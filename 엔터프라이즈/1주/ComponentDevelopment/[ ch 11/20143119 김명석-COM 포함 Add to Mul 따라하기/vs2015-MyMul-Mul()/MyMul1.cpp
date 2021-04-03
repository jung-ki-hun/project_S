// MyMul1.cpp : CMyMul의 구현입니다.

#include "stdafx.h"
#include "MyMul1.h"


// CMyMul



STDMETHODIMP CMyMul::Mul(int a, int b, int* c)
{
	int re=0;
	// TODO: 여기에 구현 코드를 추가합니다.
	for (int i = 1; i <= b; i++) {
		re = re + Add(0, a, c);
	}
	*c = a * b;
	return S_OK;
}
STDMETHODIMP CMyMul::Add(int a, int b, int* c)
{
	// TODO: 여기에 구현 코드를 추가합니다.
	*c = a + b;
	return m_pSansu->Add(a,b,c);
}
