// skkDoc.cpp : implementation of the CSkkDoc class
//

#include "stdafx.h"
#include "skk.h"

#include "Graph.h"

#include "skkDoc.h"
#include "SrvrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSkkDoc

IMPLEMENT_DYNCREATE(CSkkDoc, COleServerDoc)

BEGIN_MESSAGE_MAP(CSkkDoc, COleServerDoc)
	//{{AFX_MSG_MAP(CSkkDoc)
	ON_COMMAND(IDM_SHAPE, OnShape)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CSkkDoc, COleServerDoc)
	//{{AFX_DISPATCH_MAP(CSkkDoc)
	DISP_FUNCTION(CSkkDoc, "ShowApplication", ShowApplication, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CSkkDoc, "ShapeChange", ShapeChange, VT_EMPTY, VTS_NONE)
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_ISkk to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {F5CB0012-87CF-4702-8D93-ABF3FC98B728}
static const IID IID_ISkk =
{ 0xf5cb0012, 0x87cf, 0x4702, { 0x8d, 0x93, 0xab, 0xf3, 0xfc, 0x98, 0xb7, 0x28 } };

BEGIN_INTERFACE_MAP(CSkkDoc, COleServerDoc)
	INTERFACE_PART(CSkkDoc, IID_ISkk, Dispatch)
END_INTERFACE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSkkDoc construction/destruction

CSkkDoc::CSkkDoc()
{
	// Use OLE compound files
	EnableCompoundFile();
	
	m_pGraph = new CGraph();
    ASSERT(m_pGraph);
	// TODO: add one-time construction code here

	EnableAutomation();

	AfxOleLockApp();
}

CSkkDoc::~CSkkDoc()
{
    delete m_pGraph;
	AfxOleUnlockApp();
}

BOOL CSkkDoc::OnNewDocument()
{
	if (!COleServerDoc::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CSkkDoc server implementation

COleServerItem* CSkkDoc::OnGetEmbeddedItem()
{
	// OnGetEmbeddedItem is called by the framework to get the COleServerItem
	//  that is associated with the document.  It is only called when necessary.

	CSkkSrvrItem* pItem = new CSkkSrvrItem(this);
	ASSERT_VALID(pItem);
	return pItem;
}



/////////////////////////////////////////////////////////////////////////////
// CSkkDoc serialization

void CSkkDoc::Serialize(CArchive& ar)
{
	m_pGraph->Serialize(ar);
	if (ar.IsStoring())
	{

	}
	else
	{
	
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSkkDoc diagnostics

#ifdef _DEBUG
void CSkkDoc::AssertValid() const
{
	COleServerDoc::AssertValid();
}

void CSkkDoc::Dump(CDumpContext& dc) const
{
	COleServerDoc::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSkkDoc commands

void CSkkDoc::OnShape() 
{
	// TODO: Add your command handler code here
	m_pGraph->m_nShape=!m_pGraph->m_nShape;
	UpdateAllViews(NULL);
	UpdateAllItems(NULL);
}

#include "MainFrm.h"

void CSkkDoc::ShowApplication() 
{
	CSkkApp* pApp = (CSkkApp*) AfxGetApp();
	CMainFrame* pFrame  = (CMainFrame*) pApp->m_pMainWnd;

	pFrame->ShowWindow(SW_SHOW);
}

void CSkkDoc::ShapeChange() 
{
	// TODO: Add your dispatch handler code here
    ASSERT(m_pGraph);
	OnShape();
}

COleServerItem* CSkkDoc::OnGetLinkedItem(LPCTSTR lpszItemName) 
{
   COleServerItem* pItem = COleServerDoc::OnGetLinkedItem(lpszItemName);

   if (pItem == NULL)
   {
      pItem = new CSkkSrvrItem(this);
      ASSERT(pItem);
   }

   return pItem;
}
