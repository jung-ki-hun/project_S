#include "StdAfx.h"
#include "Sansu.h"

CSansu::CSansu(void)
{
	m_cRef = 0;
}

CSansu::~CSansu(void)
{
}

HRESULT STDMETHODCALLTYPE
CSansu::QueryInterface(REFIID riid, LPVOID* ppv)
{
	HRESULT hr = E_NOINTERFACE;
	*ppv = NULL;

	if (riid == IID_IUnknown || riid == IID_ISansu)
		*ppv = static_cast<ISansu*>(this);

	if (*ppv != NULL) {
		AddRef();
		hr = S_OK;
	}

	return hr;
}

ULONG STDMETHODCALLTYPE CSansu::AddRef(void)
{
	return ++m_cRef;
}

ULONG STDMETHODCALLTYPE CSansu::Release(void)
{
	if (--m_cRef == 0) {
		// COM 객체 카운터를 감소시킨다
		--g_cObjects;
		delete this;
	}
	return m_cRef;
}

HRESULT STDMETHODCALLTYPE CSansu::Add(
	/* [in] */ int a,
	/* [in] */ int b,
	/* [retval][out] */ int *c)
{
	*c = a + b;
	return S_OK;
}