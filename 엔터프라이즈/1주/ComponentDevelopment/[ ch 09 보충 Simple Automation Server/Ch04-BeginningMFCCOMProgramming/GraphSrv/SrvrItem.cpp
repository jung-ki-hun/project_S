// SrvrItem.cpp : implementation of the CGraphSrvSrvrItem class
//

#include "stdafx.h"
#include "GraphSrv.h"

#include "GraphSrvDoc.h"

#include <fstream.h>
#include "Graph.h"

#include "SrvrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvSrvrItem implementation

IMPLEMENT_DYNAMIC(CGraphSrvSrvrItem, COleServerItem)

CGraphSrvSrvrItem::CGraphSrvSrvrItem(CGraphSrvDoc* pContainerDoc)
	: COleServerItem(pContainerDoc, TRUE)
{
   // Set the item name for linking
   SetItemName("Graph1");
}

CGraphSrvSrvrItem::~CGraphSrvSrvrItem()
{
	// TODO: add cleanup code here
}

void CGraphSrvSrvrItem::Serialize(CArchive& ar)
{
	// CGraphSrvSrvrItem::Serialize will be called by the framework if
	//  the item is copied to the clipboard.  This can happen automatically
	//  through the OLE callback OnGetClipboardData.  A good default for
	//  the embedded item is simply to delegate to the document's Serialize
	//  function.  If you support links, then you will want to serialize
	//  just a portion of the document.

//	if (!IsLinkedItem())
//	{
		CGraphSrvDoc* pDoc = GetDocument();
		ASSERT_VALID(pDoc);
		pDoc->Serialize(ar);
//	}
}

BOOL CGraphSrvSrvrItem::OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize)
{
	// Most applications, like this one, only handle drawing the content
	//  aspect of the item.  If you wish to support other aspects, such
	//  as DVASPECT_THUMBNAIL (by overriding OnDrawEx), then this
	//  implementation of OnGetExtent should be modified to handle the
	//  additional aspect(s).

	if (dwDrawAspect != DVASPECT_CONTENT)
		return COleServerItem::OnGetExtent(dwDrawAspect, rSize);

	// CGraphSrvSrvrItem::OnGetExtent is called to get the extent in
	//  HIMETRIC units of the entire item.  The default implementation
	//  here simply returns a hard-coded number of units.

	CGraphSrvDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: replace this arbitrary size

	rSize = CSize(10000, 6000);

	return TRUE;
}

BOOL CGraphSrvSrvrItem::OnDraw(CDC* pDC, CSize& rSize)
{
	CGraphSrvDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

   // Get the size of the item, convert its coordinates, and use it to set
   // the extent
   CSize size;
   OnGetExtent(DVASPECT_CONTENT, size);
   rSize = size;

   pDC->SetMapMode(MM_ANISOTROPIC);
   pDC->HIMETRICtoLP(&size);
   pDC->SetWindowOrg(0,0);
   pDC->SetWindowExt(size);

   // Create a display rectangle, and tell the object to render itself
   CRect area(0, 0, size.cx, size.cy);
   pDoc->GetGraph()->Display(area, pDC);

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CGraphSrvSrvrItem diagnostics

#ifdef _DEBUG
void CGraphSrvSrvrItem::AssertValid() const
{
	COleServerItem::AssertValid();
}

void CGraphSrvSrvrItem::Dump(CDumpContext& dc) const
{
	COleServerItem::Dump(dc);
}
#endif

/////////////////////////////////////////////////////////////////////////////
