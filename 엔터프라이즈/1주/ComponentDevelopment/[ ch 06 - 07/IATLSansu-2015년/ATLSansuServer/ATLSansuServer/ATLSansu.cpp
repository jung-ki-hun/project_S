// ATLSansu.cpp : CATLSansu�� �����Դϴ�.

#include "stdafx.h"
#include "ATLSansu.h"


// CATLSansu


STDMETHODIMP CATLSansu::SansuAdd(int a, int b, int* c)
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	*c=a+b;
	return S_OK;
}
