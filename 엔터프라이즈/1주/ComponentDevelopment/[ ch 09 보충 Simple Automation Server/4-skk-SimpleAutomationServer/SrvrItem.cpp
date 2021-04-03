// SrvrItem.cpp : implementation of the CSkkSrvrItem class
//

#include "stdafx.h"
#include "skk.h"

#include "skkDoc.h"
#include "SrvrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSkkSrvrItem implementation

IMPLEMENT_DYNAMIC(CSkkSrvrItem, COleServerItem)

CSkkSrvrItem::CSkkSrvrItem(CSkkDoc* pContainerDoc)
	: COleServerItem(pContainerDoc, TRUE)
{
	// TODO: add one-time construction code here
	//  (eg, adding additional clipboard formats to the item's data source)
	SetItemName("Skk1");
}

CSkkSrvrItem::~CSkkSrvrItem()
{
	// TODO: add cleanup code here
}

void CSkkSrvrItem::Serialize(CArchive& ar)
{
	// CSkkSrvrItem::Serialize will be called by the framework if
	//  the item is copied to the clipboard.  This can happen automatically
	//  through the OLE callback OnGetClipboardData.  A good default for
	//  the embedded item is simply to delegate to the document's Serialize
	//  function.  If you support links, then you will want to serialize
	//  just a portion of the document.

//	if (!IsLinkedItem())
//	{
		CSkkDoc* pDoc = GetDocument();
		ASSERT_VALID(pDoc);
		pDoc->Serialize(ar);
//	}
}

BOOL CSkkSrvrItem::OnGetExtent(DVASPECT dwDrawAspect, CSize& rSize)
{
	// Most applications, like this one, only handle drawing the content
	//  aspect of the item.  If you wish to support other aspects, such
	//  as DVASPECT_THUMBNAIL (by overriding OnDrawEx), then this
	//  implementation of OnGetExtent should be modified to handle the
	//  additional aspect(s).

	if (dwDrawAspect != DVASPECT_CONTENT)
		return COleServerItem::OnGetExtent(dwDrawAspect, rSize);

	// CSkkSrvrItem::OnGetExtent is called to get the extent in
	//  HIMETRIC units of the entire item.  The default implementation
	//  here simply returns a hard-coded number of units.

	CSkkDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: replace this arbitrary size

	rSize = CSize(3000, 3000);   // 3000 x 3000 HIMETRIC units

	return TRUE;
}

#include "Graph.h"

BOOL CSkkSrvrItem::OnDraw(CDC* pDC, CSize& rSize)
{
	// Remove this if you use rSize
//	UNREFERENCED_PARAMETER(rSize);

	CSkkDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
// Get the size of the item, convert its coordinates, and use it to set
   // the extent
   CSize size;
   OnGetExtent(DVASPECT_CONTENT, size);
   rSize = size;
	// TODO: set mapping mode and extent
	//  (The extent is usually the same as the size returned from OnGetExtent)
   pDC->SetMapMode(MM_ANISOTROPIC);
   pDC->HIMETRICtoLP(&size);
   pDC->SetWindowOrg(0,0);
   pDC->SetWindowExt(size);

	// TODO: add drawing code here.  Optionally, fill in the HIMETRIC extent.
	//  All drawing takes place in the metafile device context (pDC).
   // Create a display rectangle, and tell the object to render itself
   CRect area(0, 0, size.cx, size.cy);
   pDoc->GetGraph()->Display(area, pDC);
	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CSkkSrvrItem diagnostics

#ifdef _DEBUG
void CSkkSrvrItem::AssertValid() const
{
	COleServerItem::AssertValid();
}

void CSkkSrvrItem::Dump(CDumpContext& dc) const
{
	COleServerItem::Dump(dc);
}
#endif

/////////////////////////////////////////////////////////////////////////////
