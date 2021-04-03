#include "StdAfx.h"
#include "SansuFactory.h"
#include "Sansu.h"



CSansuFactory::CSansuFactory()
{
	m_cRef = 0;
}


CSansuFactory::~CSansuFactory()
{
}

HRESULT STDMETHODCALLTYPE
CSansuFactory::QueryInterface(REFIID riid, LPVOID* ppv)
{
	HRESULT hr = E_NOINTERFACE;
	*ppv = NULL;

	if (riid == IID_IUnknown || riid == IID_IClassFactory)
		*ppv = this;

	if (*ppv != NULL) {
		AddRef();
		hr = NO_ERROR;
	}

	return hr;
}

ULONG STDMETHODCALLTYPE
CSansuFactory::AddRef(void)
{
	return ++m_cRef;
}

ULONG STDMETHODCALLTYPE
CSansuFactory::Release(void)
{
	if (--m_cRef == 0)
		delete this;
	return m_cRef;
}



HRESULT STDMETHODCALLTYPE
CSansuFactory::CreateInstance(
	LPUNKNOWN pUnkOuter,
	REFIID riid,
	LPVOID* ppv)
{
	HRESULT hr = E_FAIL;
	CSansu* pSansu = NULL;
	*ppv = NULL;

	if (pUnkOuter != NULL)
		hr = CLASS_E_NOAGGREGATION;
	else {

		pSansu = new CSansu;
		if (pSansu != NULL) {

			// COM 객체 카운터를 증가시킨다
			++g_cObjects;

			hr = pSansu->QueryInterface(riid, ppv);
			if (FAILED(hr)) {

				// COM 객체 카운터를 감소시킨다
				--g_cObjects;

				delete pSansu;
			}
		}
		else
			hr = E_OUTOFMEMORY;
	}
	return hr;
}

HRESULT STDMETHODCALLTYPE
CSansuFactory::LockServer(BOOL bLock)
{
	return S_OK;
}
