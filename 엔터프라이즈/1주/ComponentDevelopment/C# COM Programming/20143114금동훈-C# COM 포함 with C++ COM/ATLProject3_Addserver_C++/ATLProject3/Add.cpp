// Add.cpp : CAdd�� �����Դϴ�.

#include "stdafx.h"
#include "Add.h"


// CAdd



STDMETHODIMP CAdd::Add(int a, int b, int* c)
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	*c = a + b;
	return S_OK;
}
