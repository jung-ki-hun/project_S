// Hello.cpp : CHello의 구현입니다.

#include "stdafx.h"
#include "Hello.h"


// CHello



STDMETHODIMP CHello::sayHello(wchar_t* name, wchar_t** message)
{
	// TODO: 여기에 구현 코드를 추가합니다.
	TCHAR * buffer = (TCHAR*)::CoTaskMemAlloc(256);
	if (buffer == NULL)
		return E_FAIL;
	::wsprintf(buffer, TEXT("%s 씨 잘가세요."), name);
	*message = (TCHAR*)buffer;
	return S_OK;
}
