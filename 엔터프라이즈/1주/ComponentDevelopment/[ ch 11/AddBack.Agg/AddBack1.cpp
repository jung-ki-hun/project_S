// AddBack1.cpp : Implementation of CAddBack
#include "stdafx.h"
#include "AddBack.h"
#include "AddBack1.h"
#include "..\AddEnd\AddEnd_i.c"
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

