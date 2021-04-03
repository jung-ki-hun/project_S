// RemInServer1.cpp : Implementation of CRemInServerApp and DLL registration.

#include "stdafx.h"
#include "RemInServer.h"
#include "RemInServer1.h"

/////////////////////////////////////////////////////////////////////////////
//

STDMETHODIMP CRemInServer::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IAddEnd,
		&IID_IAdd,
	};

	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CRemInServer::get_AddEnd(short * pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_AddEnd;
	return S_OK;
}

STDMETHODIMP CRemInServer::put_AddEnd(short newVal)
{
	// TODO: Add your implementation code here
	m_AddEnd = newVal;
	return S_OK;
}

STDMETHODIMP CRemInServer::get_Sum(short * pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Sum;
	return S_OK;
}

STDMETHODIMP CRemInServer::Clear()
{
	// TODO: Add your implementation code here
	m_Sum = 0;
	return S_OK;
}

STDMETHODIMP CRemInServer::Add()
{
	// TODO: Add your implementation code here
	m_Sum += m_AddEnd;
	return S_OK;
}

STDMETHODIMP CRemInServer::AddTen()
{
	// TODO: Add your implementation code here
	m_Sum += 10;
	return S_OK;
}
