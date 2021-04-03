// Hello.cpp : Implementation of CHelloServerApp and DLL registration.

#include "stdafx.h"
#include "HelloServer.h"
#include "Hello.h"

/////////////////////////////////////////////////////////////////////////////
//


STDMETHODIMP CHello::sayHello(wchar_t *name, wchar_t **message)
{
	// TODO: Add your implementation code here
	char * buffer = (char*)::CoTaskMemAlloc(256);
	if(buffer == NULL)
		return E_FAIL;

	::wsprintf(buffer, "%s ¾¾ ¾È³çÇÏ¼¼¿ä?", name);
	*message = (wchar_t*)buffer;


	return S_OK;
}
