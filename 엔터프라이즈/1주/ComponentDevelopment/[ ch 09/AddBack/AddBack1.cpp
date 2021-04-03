// AddBack1.cpp : Implementation of CAddBack
#include "stdafx.h"
#include "AddBack.h"
#include "AddBack1.h"

/////////////////////////////////////////////////////////////////////////////
// CAddBack

STDMETHODIMP CAddBack::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAddBack
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

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
	if (newVal < 1) {
		HRESULT hr;
		CComPtr<ICreateErrorInfo> pCreateErrInfo;
		CComQIPtr<IErrorInfo, &IID_IErrorInfo> pErrInfo;

		hr = ::CreateErrorInfo(&pCreateErrInfo);
		if(SUCCEEDED(hr)) {
			pCreateErrInfo->SetSource(OLESTR("AddBack.AddBack.3"));
			pCreateErrInfo->SetDescription(OLESTR("0 보다 큰 값을 입력하십시오!"));
			pErrInfo = pCreateErrInfo;
			::SetErrorInfo(0, pErrInfo);
		}
		return E_INVALIDARG;
	}
	m_AddEnd = newVal;
	return S_OK;
}

STDMETHODIMP CAddBack::get_Sum(short *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Sum;

	return S_OK;
}