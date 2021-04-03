// MyAddSub1.cpp : CMyAddSub의 구현입니다.

#include "stdafx.h"
#include "MyAddSub1.h"


// CMyAddSub


STDMETHODIMP CMyAddSub::Add(short val1, short val2, short * result)
{
    // TODO: 여기에 구현 코드를 추가합니다.
    *result = val1 + val2;

    return S_OK;
}

STDMETHODIMP CMyAddSub::Sub(short val1, short val2, short * result)
{
    // TODO: 여기에 구현 코드를 추가합니다.
    *result = val1 - val2;

    return S_OK;
}
