#include "stdafx.h"

#include "MultiSDIView.h"

//CMultiSDIView::CMultiSDIView()
//{
	// TODO: add construction code here
	//m_nMag=1;
//}

LRESULT CMultiSDIView::OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
{
	m_nCount=0;
	return 0;
}

#define SIZE 10
void CMultiSDIView::DrawCross(HDC hdc, POINT point)
{
	MoveToEx(hdc, point.x-SIZE, point.y-SIZE, NULL);
	LineTo(hdc,point.x+SIZE, point.y+SIZE);
	MoveToEx(hdc, point.x-SIZE, point.y+SIZE, NULL);
	LineTo(hdc,point.x+SIZE, point.y-SIZE);
}

LRESULT CMultiSDIView::OnLButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM lParam, BOOL& /*bHandled*/)
{
	// TODO: Add your message handler code here and/or call default
	CClientDC dc(m_hWnd);
	POINT point;
	if(m_nCount<100)
	{
		point.x = LOWORD (lParam) ;
        point.y = HIWORD (lParam) ;
		data[m_nCount]=point;
		m_nCount++;
		DrawCross(dc.m_hDC, point);
	}
	return 0;
}

