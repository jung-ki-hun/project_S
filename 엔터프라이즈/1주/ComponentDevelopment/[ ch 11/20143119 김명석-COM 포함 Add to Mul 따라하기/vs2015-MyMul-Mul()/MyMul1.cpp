// MyMul1.cpp : CMyMul�� �����Դϴ�.

#include "stdafx.h"
#include "MyMul1.h"


// CMyMul



STDMETHODIMP CMyMul::Mul(int a, int b, int* c)
{
	int re=0;
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	for (int i = 1; i <= b; i++) {
		re = re + Add(0, a, c);
	}
	*c = a * b;
	return S_OK;
}
STDMETHODIMP CMyMul::Add(int a, int b, int* c)
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.
	*c = a + b;
	return m_pSansu->Add(a,b,c);
}
