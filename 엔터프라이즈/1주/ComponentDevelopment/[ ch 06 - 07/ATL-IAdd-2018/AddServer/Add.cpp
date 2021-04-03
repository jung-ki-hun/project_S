// Add.cpp : CAdd의 구현입니다.

#include "stdafx.h"
#include "Add.h"


// CAdd



STDMETHODIMP CAdd::Add(int a, int b, int* c)
{
	// TODO: 여기에 구현 코드를 추가합니다.
	*c = a + b;

	return S_OK;
}
