// AddBack1.cpp : Implementation of CAddBack
#include "stdafx.h"
#include "AddBack.h"
#include "AddBack1.h"

/////////////////////////////////////////////////////////////////////////////
// CAddBack

STDMETHODIMP CAddBack::Add()
{
	// TODO: Add your implementation code here
	short sum, addend;

	m_pAddEnd->get_AddEnd(&addend);
	m_pAddEnd->get_Sum(&sum);
	sum += addend;
	m_pAddEnd->put_Sum(sum);

	return S_OK;
}

STDMETHODIMP CAddBack::AddTen()
{
	// TODO: Add your implementation code here
	short sum;

	m_pAddEnd->get_Sum(&sum);
	sum += 10;
	m_pAddEnd->put_Sum(sum);

	return S_OK;
}



STDMETHODIMP CAddBack::get_AddEnd(short * pVal)
{
	// TODO: Add your implementation code here
	return m_pAddEnd->get_AddEnd(pVal);
}

STDMETHODIMP CAddBack::put_AddEnd(short newVal)
{
	// TODO: Add your implementation code here
	return m_pAddEnd->put_AddEnd(newVal);
}

STDMETHODIMP CAddBack::get_Sum(short * pVal)
{
	// TODO: Add your implementation code here
	return m_pAddEnd->get_Sum(pVal);
}

STDMETHODIMP CAddBack::put_Sum(short newVal)
{
	// TODO: Add your implementation code here
	return m_pAddEnd->put_Sum(newVal);
}

STDMETHODIMP CAddBack::Clear()
{
	// TODO: Add your implementation code here
	return m_pAddEnd->Clear();
}
