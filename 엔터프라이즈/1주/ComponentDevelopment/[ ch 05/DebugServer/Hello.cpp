#include "stdafx.h"
#include "hello.h"

CHello::CHello(void)
{
	m_cRef = 0;
}

CHello::~CHello(void)
{
}

HRESULT STDMETHODCALLTYPE 
CHello::QueryInterface(REFIID riid, LPVOID* ppv)
{
	HRESULT hr = E_NOINTERFACE;
	*ppv = NULL;

	if(riid == IID_IUnknown || riid == IID_IHello)
		*ppv = static_cast<IHello*>(this);

	if(*ppv != NULL) {
		AddRef();
		hr = S_OK;
	}

	return hr;
}

ULONG STDMETHODCALLTYPE CHello::AddRef(void)
{
	debug("AddRef Called", m_cRef+1);

	return ++m_cRef;

}

ULONG STDMETHODCALLTYPE CHello::Release(void)
{
	debug("Release Called", m_cRef-1);
	debug("g_cObjects", g_cObjects);
	debug("g_cLocks", g_cLocks);


	if(--m_cRef == 0) {
		// COM ��ü ī���͸� ���ҽ�Ų��.
		--g_cObjects;
		delete this;
		// �����ϴٸ� �����Ѵ�.
		CloseExe();
	}
	return m_cRef;
}

HRESULT STDMETHODCALLTYPE CHello::sayHello( 
            /* [string][in] */ wchar_t *name,
            /* [string][out] */ wchar_t **message)
{
	char * buffer = (char*)::CoTaskMemAlloc(256);
	if(buffer == NULL)
		return E_FAIL;

	::wsprintf(buffer, "%s �� ��sususu���ϼ���?", name);
	*message = (wchar_t*)buffer;
	
	return S_OK;
}
