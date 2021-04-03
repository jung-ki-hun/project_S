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

STDMETHODIMP CHello::get_name(BSTR *pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_name;
	return S_OK;
}

STDMETHODIMP CHello::put_name(BSTR newVal)
{
	// TODO: Add your implementation code here
	m_name = newVal;
	return S_OK;
}
