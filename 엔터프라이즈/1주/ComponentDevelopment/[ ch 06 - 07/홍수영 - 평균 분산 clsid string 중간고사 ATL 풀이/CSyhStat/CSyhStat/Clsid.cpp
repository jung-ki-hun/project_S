// Clsid.cpp : CClsid�� �����Դϴ�.

#include "stdafx.h"
#include "Clsid.h"


// CClsid


STDMETHODIMP CClsid::getclsid(unsigned short ** message)
{
    // TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
    unsigned short *buffer = (unsigned short *)::CoTaskMemAlloc(256);
    if (buffer == NULL)
        return E_FAIL;
    ::wcscpy((wchar_t *)buffer, L"8044255C-7397-430F-BBC9-92FBE71E8BC3");
    *message = (unsigned short *)buffer;

    return S_OK;
}
