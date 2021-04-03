// SetGet.cpp : Implementation of CSetGetServerApp and DLL registration.

#include "stdafx.h"
#include "SetGetServer.h"
#include "SetGet.h"

/////////////////////////////////////////////////////////////////////////////
//


STDMETHODIMP SetGet::Add(int addend)
{
	// TODO: Add your implementation code here
	data+=addend;
	return S_OK;
}

STDMETHODIMP SetGet::Sub(int subtrahend)
{
	// TODO: Add your implementation code here
	data-=subtrahend;
	return S_OK;
}

STDMETHODIMP SetGet::Set(int setData)
{
	// TODO: Add your implementation code here
	data=setData;
	return S_OK;
}

STDMETHODIMP SetGet::Get(int *getData)
{
	// TODO: Add your implementation code here
	*getData=data;
	return S_OK;
}
