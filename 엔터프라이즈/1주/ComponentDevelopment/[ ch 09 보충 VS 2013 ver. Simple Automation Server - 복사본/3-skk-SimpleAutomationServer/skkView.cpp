// skkView.cpp : implementation of the CSkkView class
//

#include "stdafx.h"
#include "skk.h"

#include "Graph.h"

#include "skkDoc.h"
#include "skkView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSkkView

IMPLEMENT_DYNCREATE(CSkkView, CView)

BEGIN_MESSAGE_MAP(CSkkView, CView)
	//{{AFX_MSG_MAP(CSkkView)
	ON_COMMAND(ID_CANCEL_EDIT_SRVR, OnCancelEditSrvr)
	ON_COMMAND(ID_EDIT_COPY, OnEditCopy)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSkkView construction/destruction

CSkkView::CSkkView()
{
	// TODO: add construction code here

}

CSkkView::~CSkkView()
{
}

BOOL CSkkView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSkkView drawing

void CSkkView::OnDraw(CDC* pDC)
{
	CSkkDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
    CRect client;
    GetClientRect(&client);
    pDoc->GetGraph()->Display(client, pDC);
}

/////////////////////////////////////////////////////////////////////////////
// CSkkView printing

BOOL CSkkView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSkkView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSkkView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// OLE Server support

// The following command handler provides the standard keyboard
//  user interface to cancel an in-place editing session.  Here,
//  the server (not the container) causes the deactivation.
void CSkkView::OnCancelEditSrvr()
{
	GetDocument()->OnDeactivateUI(FALSE);
}

/////////////////////////////////////////////////////////////////////////////
// CSkkView diagnostics

#ifdef _DEBUG
void CSkkView::AssertValid() const
{
	CView::AssertValid();
}

void CSkkView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSkkDoc* CSkkView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSkkDoc)));
	return (CSkkDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSkkView message handlers
#include "SrvrItem.h"

void CSkkView::OnEditCopy() 
{
	// TODO: Add your command handler code here
   CSkkSrvrItem itm(GetDocument());
   itm.CopyToClipboard(FALSE);	
}
