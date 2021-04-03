// GetSystem1.cpp : CGetSystem의 구현입니다.

#include "stdafx.h"
#include "GetSystem1.h"


// CGetSystem


STDMETHODIMP CGetSystem::getSystemBstr(BSTR* p_value)
{
	// TODO: 여기에 구현 코드를 추가합니다.
	DWORD len ;
	wchar_t * szComName = (wchar_t*)::CoTaskMemAlloc(256);
	wchar_t * szUserName = (wchar_t *)::CoTaskMemAlloc(256);
	wchar_t * buffer = (wchar_t *)::CoTaskMemAlloc(256);


	len = 255;
	GetComputerName(szComName,&len);
	len=255;
	GetUserName(szUserName,&len);

	if(buffer == NULL)
		return E_FAIL;

	::wsprintf(buffer, L"Computer Name=%s, User Name=%s",szComName,szUserName);
	*p_value = SysAllocString((OLECHAR*)buffer);
	return S_OK;
}
