// RemOutServer1.cpp : Implementation of CRemOutServerApp and DLL registration.

#include "stdafx.h"
#include "RemOutServer.h"
#include "RemOutServer1.h"

/////////////////////////////////////////////////////////////////////////////
//

STDMETHODIMP CRemOutServer::InterfaceSupportsErrorInfo(REFIID riid)
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

STDMETHODIMP CRemOutServer::get_AddEnd(short * pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_AddEnd;
	return S_OK;
}

STDMETHODIMP CRemOutServer::put_AddEnd(short newVal)
{
	// TODO: Add your implementation code here
	m_AddEnd = newVal;
	return S_OK;
}

STDMETHODIMP CRemOutServer::get_Sum(short * pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Sum;
	return S_OK;
}

STDMETHODIMP CRemOutServer::Clear()
{
	// TODO: Add your implementation code here
	m_Sum = 0;
	return S_OK;
}

STDMETHODIMP CRemOutServer::Add()
{
	// TODO: Add your implementation code here
	m_Sum += m_AddEnd;
	return S_OK;
}

STDMETHODIMP CRemOutServer::AddTen()
{
	// TODO: Add your implementation code here
	m_Sum += 10;
	return S_OK;
}
