// GetSystem1.cpp : CGetSystem�� �����Դϴ�.

#include "stdafx.h"
#include "GetSystem1.h"


// CGetSystem


STDMETHODIMP CGetSystem::getSystemBstr(BSTR* p_value)
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
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
