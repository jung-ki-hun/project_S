// Company1.cpp : Implementation of CCompany
#include "stdafx.h"
#include "Company.h"
#include "Company1.h"

/////////////////////////////////////////////////////////////////////////////
// CCompany

STDMETHODIMP CCompany::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ICompany
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CCompany::get_Employees(VARIANT *pVal)
{
	// TODO: Add your implementation code here
	VariantInit(pVal);
	IDispatch* pDisp;
	m_pEmployees->QueryInterface(IID_IDispatch, (LPVOID*)&pDisp);
	pVal->vt = VT_DISPATCH;
	pVal->pdispVal = pDisp;

	return S_OK;
}