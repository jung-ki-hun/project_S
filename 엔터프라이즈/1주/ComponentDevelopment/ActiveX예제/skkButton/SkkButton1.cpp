// SkkButton1.cpp : Implementation of CSkkButton

#include "stdafx.h"
#include "SkkButton.h"
#include "SkkButton1.h"

/////////////////////////////////////////////////////////////////////////////
// CSkkButton


STDMETHODIMP CSkkButton::get_TopLeft(OLE_COLOR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_clrTopLeft;
	return S_OK;
}

STDMETHODIMP CSkkButton::put_TopLeft(OLE_COLOR newVal)
{
	// TODO: Add your implementation code here
	m_clrTopLeft=newVal;
	FireViewChange();
	return S_OK;
}

STDMETHODIMP CSkkButton::get_BottomRight(OLE_COLOR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_clrBottomRight;

	return S_OK;
}

STDMETHODIMP CSkkButton::put_BottomRight(OLE_COLOR newVal)
{
	// TODO: Add your implementation code here

	m_clrBottomRight=newVal;
	FireViewChange();
	return S_OK;
}


LRESULT CSkkButton::OnLButtonDown(UINT uMsg, WPARAM wParam, 
											LPARAM lParam, BOOL& bHandled)
{
		COLORREF colTopLeft, colBottomRight;
		HBRUSH hOldBrush, hBrush;
		HPEN hOldPen, hPen;
		HDC hDC;


		POINT pt;
		pt.x = LOWORD(lParam);
		pt.y = HIWORD(lParam);
		Fire_Clicked(pt.x, pt.y);
		ReleaseDC(hDC);


		hDC=GetDC();
		OleTranslateColor(m_clrFillColor, NULL, &colTopLeft);
		hBrush = CreateSolidBrush(colTopLeft);
		hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);
		FillRect(hDC, &rc, hBrush);
		SelectObject(hDC, hOldBrush);
		DeleteObject(hBrush);
		
		SetBkMode(hDC, TRANSPARENT);
		SetTextColor(hDC, RGB(0,0,0));
		USES_CONVERSION;
		DrawText(hDC, OLE2CT((BSTR)m_bstrText), -1, &rc, DT_SINGLELINE | DT_CENTER |
					    DT_VCENTER);


		OleTranslateColor(m_clrBottomRight, NULL, &colTopLeft);
		hPen = (HPEN)CreatePen(PS_SOLID, 1, colTopLeft);
		hOldPen = (HPEN)SelectObject(hDC, hPen);
		MoveToEx(hDC, rc.left, rc.top, NULL);
		LineTo(hDC, rc.right, rc.top);
		MoveToEx(hDC, rc.left+1, rc.top+1, NULL);
		LineTo(hDC, rc.right-1, rc.top+1);
		MoveToEx(hDC, rc.left+2, rc.top+2, NULL);
		LineTo(hDC, rc.right-2, rc.top+2);
		MoveToEx(hDC, rc.left+3, rc.top+3, NULL);
		LineTo(hDC, rc.right-3, rc.top+3);

		MoveToEx(hDC, rc.left, rc.top, NULL);
		LineTo(hDC, rc.left, rc.bottom);
		MoveToEx(hDC, rc.left+1, rc.top+1, NULL);
		LineTo(hDC, rc.left+1, rc.bottom-1);
		MoveToEx(hDC, rc.left+2, rc.top+2, NULL);
		LineTo(hDC, rc.left+2, rc.bottom-2);
		MoveToEx(hDC, rc.left+3, rc.top+3, NULL);
		LineTo(hDC, rc.left+3, rc.bottom-3);

		SelectObject(hDC, hOldPen);
		DeleteObject(hPen);
		
		OleTranslateColor(m_clrTopLeft, NULL, &colBottomRight);
		hPen = (HPEN)CreatePen(PS_SOLID, 1, colBottomRight);
		hOldPen = (HPEN)SelectObject(hDC, hPen);

		MoveToEx(hDC, rc.right, rc.top, NULL);
		LineTo(hDC, rc.right, rc.bottom);
		MoveToEx(hDC, rc.right-1, rc.top+1, NULL);
		LineTo(hDC, rc.right-1, rc.bottom-1);
		MoveToEx(hDC, rc.right-2, rc.top+2, NULL);
		LineTo(hDC, rc.right-2, rc.bottom-2);	
		MoveToEx(hDC, rc.right-3, rc.top+3, NULL);
		LineTo(hDC, rc.right-3, rc.bottom-3);

		MoveToEx(hDC, rc.left, rc.bottom, NULL);
		LineTo(hDC, rc.right+1, rc.bottom);
		MoveToEx(hDC, rc.left+1, rc.bottom-1, NULL);
		LineTo(hDC, rc.right, rc.bottom-1);
		MoveToEx(hDC, rc.left+2, rc.bottom-2, NULL);
		LineTo(hDC, rc.right-1, rc.bottom-2);
		MoveToEx(hDC, rc.left+3, rc.bottom-3, NULL);
		LineTo(hDC, rc.right-2, rc.bottom-3);
	

		SelectObject(hDC, hOldPen);
		DeleteObject(hPen);
/*
		POINT pt;
		pt.x = LOWORD(lParam);
		pt.y = HIWORD(lParam);
		Fire_Clicked(pt.x, pt.y);
		ReleaseDC(hDC);
*/
		SetCapture();
		return 0;
}

LRESULT CSkkButton::OnLButtonUp(UINT uMsg, WPARAM wParam, 
											LPARAM lParam, BOOL& bHandled)
{
		FireViewChange();
		ReleaseCapture();
		return 0;
}

