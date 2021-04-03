// ATLSansu.cpp : CATLSansu의 구현입니다.

#include "stdafx.h"
#include "ATLSansu.h"


// CATLSansu


STDMETHODIMP CATLSansu::SansuAdd(int a, int b, int* c)
{
	// TODO: 여기에 구현 코드를 추가합니다.
	*c=a+b;
	return S_OK;
}
