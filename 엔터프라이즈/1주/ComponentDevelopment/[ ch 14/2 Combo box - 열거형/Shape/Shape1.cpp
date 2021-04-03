// Shape1.cpp : Implementation of CShape

#include "stdafx.h"
#include "Shape.h"
#include "Shape1.h"

/////////////////////////////////////////////////////////////////////////////
// CShape


STDMETHODIMP CShape::get_ShapeType(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_nShapeType;
	return S_OK;
}

STDMETHODIMP CShape::put_ShapeType(short newVal)
{
	// TODO: Add your implementation code here
	if(newVal < 0 || newVal > 2)
		return Error(_T("사각형 - 0, 원형 - 1, 삼각형 - 2"));
	else {
		m_nShapeType = newVal;
		FireViewChange();
		return S_OK;
	}
}

STDMETHODIMP CShape::ChangeShape(short shpType)
{
	// TODO: Add your implementation code here

	return put_ShapeType(shpType);
}

LRESULT CShape::OnLButtonDown(UINT uMsg, WPARAM wParam, 
											LPARAM lParam, BOOL& bHandled)
{
	POINT pt;
	POINT pt3[3];
	HRGN hRgn;
	BOOL bIn = FALSE;

	pt.x = LOWORD(lParam);
	pt.y = HIWORD(lParam);

	switch(m_nShapeType) {
	case 0 :	// Rectangle
		bIn = PtInRect(&rc, pt);
		break;
	case 1 :	// Ellipse
		bIn = InCircle(pt);
		break;
	case 2:		// Triangle
		pt3[0].x = (rc.left + rc.right) / 2;
		pt3[0].y = rc.top;
		pt3[1].x = rc.left;
		pt3[1].y = rc.bottom;
		pt3[2].x = rc.right;
		pt3[2].y = rc.bottom;
		hRgn = CreatePolygonRgn(&pt3[0], 3, WINDING);
		bIn = PtInRegion(hRgn, pt.x, pt.y);
		DeleteObject(hRgn);
		break;
	}
	if(bIn)
		Fire_ClickIn(pt.x, pt.y);
	else
		Fire_ClickOut(pt.x, pt.y);
	
	return 0;
}

BOOL CShape::InCircle(POINT pt)
{
    double a = (rc.right - rc.left) / 2;
    double b = (rc.bottom - rc.top) / 2;

    double x = pt.x - (rc.left + rc.right) / 2;
    double y = pt.y - (rc.top + rc.bottom) / 2;

    return ((x * x) / (a * a) + (y * y) / (b * b) <= 1);
}
