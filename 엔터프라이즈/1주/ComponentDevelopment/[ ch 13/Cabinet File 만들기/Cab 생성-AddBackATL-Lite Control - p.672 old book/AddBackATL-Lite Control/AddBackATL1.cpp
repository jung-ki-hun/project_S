// AddBackATL1.cpp : Implementation of CAddBackATL

#include "stdafx.h"
#include "AddBackATL.h"
#include "AddBackATL1.h"

/////////////////////////////////////////////////////////////////////////////
// CAddBackATL


STDMETHODIMP CAddBackATL::Clear()
{
	// TODO: Add your implementation code here
	m_Sum = 0;

	return S_OK;
}

STDMETHODIMP CAddBackATL::Add()
{
	// TODO: Add your implementation code here
	m_Sum += m_AddEnd;
	return S_OK;
}

STDMETHODIMP CAddBackATL::AddTen()
{
	// TODO: Add your implementation code here
	m_Sum += 10;
	return S_OK;
}

STDMETHODIMP CAddBackATL::get_AddEnd(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_AddEnd;
	return S_OK;
}

STDMETHODIMP CAddBackATL::put_AddEnd(short newVal)
{
	// TODO: Add your implementation code here

	m_AddEnd = newVal;
	return S_OK;
}

STDMETHODIMP CAddBackATL::get_Sum(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Sum;
	return S_OK;
}
