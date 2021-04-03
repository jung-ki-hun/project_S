// AddEnd1.cpp : Implementation of CAddEnd
#include "stdafx.h"
#include "AddEnd.h"
#include "AddEnd1.h"

/////////////////////////////////////////////////////////////////////////////
// CAddEnd


STDMETHODIMP CAddEnd::Clear()
{
	// TODO: Add your implementation code here
	m_Sum=0;
	return S_OK;
}

STDMETHODIMP CAddEnd::get_AddEnd(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal=m_AddEnd;
	return S_OK;
}

STDMETHODIMP CAddEnd::put_AddEnd(short newVal)
{
	// TODO: Add your implementation code here
	m_AddEnd=newVal;
	return S_OK;
}


STDMETHODIMP CAddEnd::get_Sum(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal=m_Sum;
	return S_OK;
}

STDMETHODIMP CAddEnd::put_Sum(short newVal)
{
	// TODO: Add your implementation code here
	m_Sum=newVal;
	return S_OK;
}
