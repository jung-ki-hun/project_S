// AddBack1.cpp : Implementation of CAddBack
#include "stdafx.h"
#include "AddBack.h"
#include "AddBack1.h"

/////////////////////////////////////////////////////////////////////////////
// CAddBack


STDMETHODIMP CAddBack::Add()
{
	// TODO: Add your implementation code here
	m_Sum += m_AddEnd;

	return S_OK;
}

STDMETHODIMP CAddBack::AddTen()
{
	// TODO: Add your implementation code here
	m_Sum += 10;

	return S_OK;
}

STDMETHODIMP CAddBack::Clear()
{
	// TODO: Add your implementation code here
	m_Sum = 0;

	return S_OK;
}

STDMETHODIMP CAddBack::get_AddEnd(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_AddEnd;

	return S_OK;
}

STDMETHODIMP CAddBack::put_AddEnd(short newVal)
{
	// TODO: Add your implementation code here

	m_AddEnd = newVal;
	return S_OK;
}

STDMETHODIMP CAddBack::get_Sum(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Sum;

	return S_OK;
}
