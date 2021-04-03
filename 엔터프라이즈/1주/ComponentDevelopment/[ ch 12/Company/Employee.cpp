// Employee.cpp : Implementation of CEmployee
#include "stdafx.h"
#include "Company.h"
#include "Employee.h"

/////////////////////////////////////////////////////////////////////////////
// CEmployee

STDMETHODIMP CEmployee::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IEmployee
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CEmployee::get_Name(BSTR * pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Name.Copy();
	return S_OK;
}

STDMETHODIMP CEmployee::get_Address(BSTR * pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Address.Copy();
	return S_OK;
}

STDMETHODIMP CEmployee::get_Telephone(BSTR * pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Telephone.Copy();
	return S_OK;
}
