// Hello.cpp : CHello�� �����Դϴ�.

#include "stdafx.h"
#include "Hello.h"


// CHello



STDMETHODIMP CHello::sayHello(wchar_t* name, wchar_t** message)
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	TCHAR * buffer = (TCHAR*)::CoTaskMemAlloc(256);
	if (buffer == NULL)
		return E_FAIL;
	::wsprintf(buffer, TEXT("%s �� �߰�����."), name);
	*message = (TCHAR*)buffer;
	return S_OK;
}
