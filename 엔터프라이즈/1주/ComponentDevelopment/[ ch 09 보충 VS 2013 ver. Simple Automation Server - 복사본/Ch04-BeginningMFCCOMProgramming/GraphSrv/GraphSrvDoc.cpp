// GraphSrvDoc.cpp : implementation of the CGraphSrvDoc class
//

#include "stdafx.h"
#include "GraphSrv.h"

#include <fstream.h>
#include "Graph.h"

#include "GraphSrvDoc.h"
#include "SrvrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvDoc

IMPLEMENT_DYNCREATE(CGraphSrvDoc, COleServerDoc)

BEGIN_MESSAGE_MAP(CGraphSrvDoc, COleServerDoc)
	//{{AFX_MSG_MAP(CGraphSrvDoc)
	ON_COMMAND(ID_OPTIONS_FRAMETYPE_AXIS, OnOptionsFrametypeAxis)
	ON_UPDATE_COMMAND_UI(ID_OPTIONS_FRAMETYPE_AXIS, OnUpdateOptionsFrametypeAxis)
	ON_COMMAND(ID_OPTIONS_FRAMETYPE_FULL, OnOptionsFrametypeFull)
	ON_UPDATE_COMMAND_UI(ID_OPTIONS_FRAMETYPE_FULL, OnUpdateOptionsFrametypeFull)
	ON_COMMAND(ID_OPTIONS_FRAMETYPE_NONE, OnOptionsFrametypeNone)
	ON_UPDATE_COMMAND_UI(ID_OPTIONS_FRAMETYPE_NONE, OnUpdateOptionsFrametypeNone)
	ON_COMMAND(ID_OPTIONS_GRAPHTYPE_BAR, OnOptionsGraphtypeBar)
	ON_UPDATE_COMMAND_UI(ID_OPTIONS_GRAPHTYPE_BAR, OnUpdateOptionsGraphtypeBar)
	ON_COMMAND(ID_OPTIONS_GRAPHTYPE_LINE, OnOptionsGraphtypeLine)
	ON_UPDATE_COMMAND_UI(ID_OPTIONS_GRAPHTYPE_LINE, OnUpdateOptionsGraphtypeLine)
	ON_COMMAND(ID_OPTIONS_GRAPHTYPE_PIE, OnOptionsGraphtypePie)
	ON_UPDATE_COMMAND_UI(ID_OPTIONS_GRAPHTYPE_PIE, OnUpdateOptionsGraphtypePie)
	ON_COMMAND(ID_OPTIONS_YAXISLINES, OnOptionsYaxislines)
	ON_UPDATE_COMMAND_UI(ID_OPTIONS_YAXISLINES, OnUpdateOptionsYaxislines)
	ON_COMMAND(ID_OPTIONS_IMPORTDATA, OnOptionsImportdata)
	ON_COMMAND(ID_OPTIONS_EXPORTDATA, OnOptionsExportdata)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CGraphSrvDoc, COleServerDoc)
	//{{AFX_DISPATCH_MAP(CGraphSrvDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//      DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_IGraphSrv to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {DA328813-027C-11D1-9257-00201834E2A3}
static const IID IID_IGraphSrv =
{ 0xda328813, 0x27c, 0x11d1, { 0x92, 0x57, 0x0, 0x20, 0x18, 0x34, 0xe2, 0xa3 } };

BEGIN_INTERFACE_MAP(CGraphSrvDoc, COleServerDoc)
	INTERFACE_PART(CGraphSrvDoc, IID_IGraphSrv, Dispatch)
END_INTERFACE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvDoc construction/destruction

CGraphSrvDoc::CGraphSrvDoc()
{
	// Use OLE compound files
	EnableCompoundFile();

    // Create the graph object
    m_pGraph = new CGraph();
    ASSERT(m_pGraph);

    // Test only - give it some data to use, while we're developing
    m_pGraph->SetTitle("Test Data");
    m_pGraph->Add("One", 10);
    m_pGraph->Add("Two", 45);
    m_pGraph->Add("Three", 22);
    m_pGraph->Add("Four", 33);
    m_pGraph->Add("Five", 51);

	EnableAutomation();

	AfxOleLockApp();
}

CGraphSrvDoc::~CGraphSrvDoc()
{
    delete m_pGraph;
	AfxOleUnlockApp();
}

BOOL CGraphSrvDoc::OnNewDocument()
{
	if (!COleServerDoc::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvDoc server implementation

COleServerItem* CGraphSrvDoc::OnGetEmbeddedItem()
{
	// OnGetEmbeddedItem is called by the framework to get the COleServerItem
	//  that is associated with the document.  It is only called when necessary.

	CGraphSrvSrvrItem* pItem = new CGraphSrvSrvrItem(this);
	ASSERT_VALID(pItem);
	return pItem;
}



/////////////////////////////////////////////////////////////////////////////
// CGraphSrvDoc serialization

void CGraphSrvDoc::Serialize(CArchive& ar)
{
	m_pGraph->Serialize(ar);
	
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvDoc diagnostics

#ifdef _DEBUG
void CGraphSrvDoc::AssertValid() const
{
	COleServerDoc::AssertValid();
}

void CGraphSrvDoc::Dump(CDumpContext& dc) const
{
	COleServerDoc::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvDoc commands

void CGraphSrvDoc::OnOptionsFrametypeAxis() 
{
   if (!m_pGraph->IsAxisFrame())
   {
      m_pGraph->SetAxisFrame();
      SetModifiedFlag(TRUE);
      UpdateAllViews(NULL);
	  UpdateAllItems(NULL);
   }
}

void CGraphSrvDoc::OnUpdateOptionsFrametypeAxis(CCmdUI* pCmdUI) 
{
   pCmdUI->SetCheck(m_pGraph->IsAxisFrame());
}

void CGraphSrvDoc::OnOptionsFrametypeFull() 
{
   if (!m_pGraph->IsFullFrame())
   {
      m_pGraph->SetFullFrame();
      SetModifiedFlag(TRUE);
      UpdateAllViews(NULL);
	  UpdateAllItems(NULL);
   }
}

void CGraphSrvDoc::OnUpdateOptionsFrametypeFull(CCmdUI* pCmdUI) 
{
   pCmdUI->SetCheck(m_pGraph->IsFullFrame());
}

void CGraphSrvDoc::OnOptionsFrametypeNone() 
{
   if (!m_pGraph->IsNoFrame())
   {
      m_pGraph->SetNoFrame();
      SetModifiedFlag(TRUE);
      UpdateAllViews(NULL);
  	  UpdateAllItems(NULL);
   }
}

void CGraphSrvDoc::OnUpdateOptionsFrametypeNone(CCmdUI* pCmdUI) 
{
   pCmdUI->SetCheck(m_pGraph->IsNoFrame());
}

void CGraphSrvDoc::OnOptionsGraphtypeBar() 
{
   if (!m_pGraph->IsBarGraph())
   {
      m_pGraph->SetBarGraph();
      SetModifiedFlag(TRUE);
      UpdateAllViews(NULL);
	  UpdateAllItems(NULL);
   }
}

void CGraphSrvDoc::OnUpdateOptionsGraphtypeBar(CCmdUI* pCmdUI) 
{
   pCmdUI->SetCheck(m_pGraph->IsBarGraph());
}

void CGraphSrvDoc::OnOptionsGraphtypeLine() 
{
   if (!m_pGraph->IsLineGraph())
   {
      m_pGraph->SetLineGraph();
      SetModifiedFlag(TRUE);
      UpdateAllViews(NULL);
	  UpdateAllItems(NULL);
   }
}

void CGraphSrvDoc::OnUpdateOptionsGraphtypeLine(CCmdUI* pCmdUI) 
{
   pCmdUI->SetCheck(m_pGraph->IsLineGraph());
}

void CGraphSrvDoc::OnOptionsGraphtypePie() 
{
   if (!m_pGraph->IsPieChart())
   {
      m_pGraph->SetPieChart();
      SetModifiedFlag(TRUE);
      UpdateAllViews(NULL);
	  UpdateAllItems(NULL);
   }
}

void CGraphSrvDoc::OnUpdateOptionsGraphtypePie(CCmdUI* pCmdUI) 
{
   pCmdUI->SetCheck(m_pGraph->IsPieChart());
}

void CGraphSrvDoc::OnOptionsYaxislines() 
{
   BOOL bLines = m_pGraph->HasYLines();

   if (!bLines)
      m_pGraph->SetYLines();
   else
      m_pGraph->SetNoYLines();

   SetModifiedFlag(TRUE);
   UpdateAllViews(NULL);
   UpdateAllItems(NULL);
}

void CGraphSrvDoc::OnUpdateOptionsYaxislines(CCmdUI* pCmdUI) 
{
   pCmdUI->SetCheck(m_pGraph->HasYLines());
}

void CGraphSrvDoc::OnOptionsImportdata() 
{
   // Import a dataset from an ASCII file. Check if there is any data in 
   // this graph object, and alert the user.

   if (m_pGraph->Size() != 0)
      if (IDNO == AfxMessageBox("This operation will overwrite the "
                                "existing data. Continue?", MB_YESNO))
         return;

   // First, get a filename to read from...
   CFileDialog cf(TRUE);
   if (cf.DoModal() == IDOK)
   {
      ifstream is(cf.GetPathName());
      if (!is)
      {
         AfxMessageBox("Error opening file for import");
         return;
      }

      // Read the dataset and redraw...
      m_pGraph->Import(is);
      SetModifiedFlag(TRUE);
      UpdateAllViews(NULL);
  	  UpdateAllItems(NULL);
   }
}

void CGraphSrvDoc::OnOptionsExportdata() 
{
   // Export the dataset to an ASCII file. First, get a filename
   // to export to...

   CFileDialog cf(FALSE);
   if (cf.DoModal() == IDOK)
   {
      ofstream os(cf.GetPathName());
      if (!os)
      {
         AfxMessageBox("Error opening file for export");
         return;
      }

      // Write the dataset...
      m_pGraph->Export(os);
   }
}

COleServerItem* CGraphSrvDoc::OnGetLinkedItem(LPCTSTR lpszItemName) 
{
   // See if the base class has the item
   COleServerItem* pItem = COleServerDoc::OnGetLinkedItem(lpszItemName);

   if (pItem == NULL)
   {
      pItem = new CGraphSrvSrvrItem(this);
      ASSERT(pItem);
   }

   return pItem;
}
