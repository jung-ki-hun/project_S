// MyAddSub1.cpp : CMyAddSub�� �����Դϴ�.

#include "stdafx.h"
#include "MyAddSub1.h"


// CMyAddSub


STDMETHODIMP CMyAddSub::Add(short val1, short val2, short * result)
{
    // TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
    *result = val1 + val2;

    return S_OK;
}

STDMETHODIMP CMyAddSub::Sub(short val1, short val2, short * result)
{
    // TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
    *result = val1 - val2;

    return S_OK;
}
