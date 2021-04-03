// Hello.cpp : Implementation of CHelloServerApp and DLL registration.

#include "stdafx.h"
#include "HelloServer.h"
#include "Hello.h"

/////////////////////////////////////////////////////////////////////////////
//


STDMETHODIMP CHello::sayHello(unsigned short *name, unsigned short **message)
{
	// TODO: Add your implementation code here
	char * buffer = (char*)::CoTaskMemAlloc(256);
	if(buffer == NULL)
		return E_FAIL;

	::wsprintf(buffer, "%s ¾¾ ¾È³çÇÏ¼¼¿ä?", name);
	*message = (unsigned short *)buffer;
	return S_OK;
}