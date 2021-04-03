// AsyncEdit1.cpp : Implementation of CAsyncEdit

#include "stdafx.h"
#include "AsyncEdit.h"
#include "AsyncEdit1.h"

/////////////////////////////////////////////////////////////////////////////
// CAsyncEdit

STDMETHODIMP CAsyncEdit::get_UrlPath(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_bstrUrl.Copy();

	return S_OK;
}

STDMETHODIMP CAsyncEdit::put_UrlPath(BSTR newVal)
{
	// TODO: Add your implementation code here
	m_bstrUrl = newVal;
	if (::IsWindow(m_ctlEdit.m_hWnd)) {
		::SendMessage(m_ctlEdit.m_hWnd, WM_SETTEXT, 
					  0,  (LPARAM)_T(""));
		CBindStatusCallback<CAsyncEdit>::Download(this, OnData, 
					  m_bstrUrl, m_spClientSite, FALSE);
	}

	return S_OK;
}
