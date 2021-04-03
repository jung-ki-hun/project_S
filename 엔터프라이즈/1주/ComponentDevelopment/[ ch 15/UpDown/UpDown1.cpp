// UpDown1.cpp : Implementation of CUpDown

#include "stdafx.h"
#include "UpDown.h"
#include "UpDown1.h"

/////////////////////////////////////////////////////////////////////////////
// CUpDown


STDMETHODIMP CUpDown::get_MinValue(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal=m_MinValue;
	return S_OK;
}

STDMETHODIMP CUpDown::put_MinValue(short newVal)
{
	// TODO: Add your implementation code here
	if(newVal <= m_MaxValue)
	{
		m_MinValue=newVal;
		SetRange(m_MinValue, m_MaxValue);
	}
	return S_OK;
}

STDMETHODIMP CUpDown::get_MaxValue(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal=m_MinValue;
	return S_OK;
}

STDMETHODIMP CUpDown::put_MaxValue(short newVal)
{
	// TODO: Add your implementation code here
	if(newVal >= m_MinValue)
	{
		m_MaxValue=newVal;
		SetRange(m_MinValue, m_MaxValue);
	}
	return S_OK;
}

STDMETHODIMP CUpDown::get_Value(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal=m_Value;

	return S_OK;
}

STDMETHODIMP CUpDown::put_Value(short newVal)
{
	// TODO: Add your implementation code here
	if(newVal < m_MinValue || newVal > m_MaxValue)
		return Error(_T(" 범위를 초과 했음 "));
	else 
	{
		m_Value=newVal;
		SetDlgItemInt(IDC_TEXT, m_Value);
		return S_OK;
	}
}

void CUpDown::SetRange(int min, int max)
{
		HWND hWnd = GetDlgItem(IDC_SPIN);
		if (!::IsWindow(hWnd))
			return;
		SendMessage(hWnd, UDM_SETRANGE, 0, MAKELPARAM(max, min));
}
