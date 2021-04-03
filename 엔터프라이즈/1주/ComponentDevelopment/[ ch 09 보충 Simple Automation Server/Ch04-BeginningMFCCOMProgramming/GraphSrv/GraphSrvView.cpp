// GraphSrvView.cpp : implementation of the CGraphSrvView class
//

#include "stdafx.h"
#include "GraphSrv.h"

#include <fstream.h>
#include "Graph.h"

#include "GraphSrvDoc.h"
#include "EditDlg.h"
#include "SrvrItem.h"

#include "GraphSrvView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvView

IMPLEMENT_DYNCREATE(CGraphSrvView, CView)

BEGIN_MESSAGE_MAP(CGraphSrvView, CView)
	//{{AFX_MSG_MAP(CGraphSrvView)
	ON_COMMAND(ID_CANCEL_EDIT_SRVR, OnCancelEditSrvr)
	ON_COMMAND(ID_OPTIONS_EDITDATA, OnOptionsEditdata)
	ON_COMMAND(ID_EDIT_COPY, OnEditCopy)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvView construction/destruction

CGraphSrvView::CGraphSrvView()
{
	// TODO: add construction code here

}

CGraphSrvView::~CGraphSrvView()
{
}

BOOL CGraphSrvView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvView drawing

void CGraphSrvView::OnDraw(CDC* pDC)
{
	CGraphSrvDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

    CRect client;
    GetClientRect(&client);
    pDoc->GetGraph()->Display(client, pDC);
}

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvView printing

BOOL CGraphSrvView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGraphSrvView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGraphSrvView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// OLE Server support

// The following command handler provides the standard keyboard
//  user interface to cancel an in-place editing session.  Here,
//  the server (not the container) causes the deactivation.
void CGraphSrvView::OnCancelEditSrvr()
{
	GetDocument()->OnDeactivateUI(FALSE);
}

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvView diagnostics

#ifdef _DEBUG
void CGraphSrvView::AssertValid() const
{
	CView::AssertValid();
}

void CGraphSrvView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGraphSrvDoc* CGraphSrvView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGraphSrvDoc)));
	return (CGraphSrvDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvView message handlers

void CGraphSrvView::OnOptionsEditdata() 
{
   CGraphSrvDoc* pDoc = GetDocument();
   ASSERT_VALID(pDoc);

   // Create the dialog, and set its graph member
   CEditDlg dlg;
   dlg.SetGraph(pDoc->GetGraph());

   // If the dialog returned OK, redraw the graph
   if (IDOK == dlg.DoModal())
   {
      CClientDC* pDC = new CClientDC(this);
      ASSERT(pDC);

      CRect client;
      GetClientRect(&client);
      pDoc->GetGraph()->Display(client, pDC);
      pDoc->UpdateAllViews(NULL);
   }
}

void CGraphSrvView::OnEditCopy() 
{
   // Copy the whole of the document to the clipboard
   CGraphSrvSrvrItem itm(GetDocument());
   itm.CopyToClipboard(TRUE);
}
