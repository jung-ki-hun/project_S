// DHCtl1.cpp : Implementation of CDHCtl

#include "stdafx.h"
#include "DHCtl.h"
#include "DHCtl1.h"

/////////////////////////////////////////////////////////////////////////////
// CDHCtl


STDMETHODIMP CDHCtl::get_UrlPath(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal=m_UrlPath;
	return S_OK;
}

STDMETHODIMP CDHCtl::put_UrlPath(BSTR newVal)
{
	// TODO: Add your implementation code here
	m_UrlPath=newVal;
	return S_OK;
}

STDMETHODIMP CDHCtl::GoToURL()
{
	// TODO: Add your implementation code here
	m_spBrowser->Navigate(m_UrlPath, NULL, NULL, NULL, NULL);
	return S_OK;
}

STDMETHODIMP CDHCtl::GoToHome()
{
	// TODO: Add your implementation code here
	put_UrlPath(CComBSTR("http://www.inje.ac.kr"));
	GoToURL();
	return S_OK;
}
