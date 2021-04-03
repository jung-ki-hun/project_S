// MyMulDiv1.cpp : CMyMulDiv�� �����Դϴ�.

#include "stdafx.h"
#include "MyMulDiv1.h"


// CMyMulDiv


STDMETHODIMP CMyMulDiv::Mul(short val1, short val2, short * result)
{
    // TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
    // 3 * 5 = 3 * 3 * 3 * 3 * 3

    short _result = 0;

    for (int i = 0 ; i < val2 ; i++)
    {
        Add(_result, val1, &_result);
    }

    *result = _result;

    return S_OK;
}

STDMETHODIMP CMyMulDiv::Div(short val1, short val2, short * result)
{
    // TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
    
    short divCnt = 0;

    while (true)
    {
        Sub(val1, val2, &val1);
        divCnt += 1;
        if (val1 <= 0)
            break;
    }

    *result = divCnt;

    return S_OK;
}

STDMETHODIMP CMyMulDiv::Add(short val1, short val2, short * result)
{
    // TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

    return m_pMyAddSub->Add(val1, val2, result);
}

STDMETHODIMP CMyMulDiv::Sub(short val1, short val2, short * result)
{
    // TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

    return m_pMyAddSub->Sub(val1, val2, result);
}