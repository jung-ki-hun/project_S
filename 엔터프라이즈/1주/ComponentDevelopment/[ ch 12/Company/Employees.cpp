// Employees.cpp : Implementation of CEmployees
#include "stdafx.h"
#include "Company.h"
#include "Employees.h"

/////////////////////////////////////////////////////////////////////////////
// CEmployees

STDMETHODIMP CEmployees::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_IEmployees
	};
	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}

STDMETHODIMP CEmployees::get_Count(long * pVal)
{
	// TODO: Add your implementation code here
	*pVal = m_Count;
	return S_OK;
}

STDMETHODIMP CEmployees::get_Item(long index, VARIANT * pVal)
{
	// TODO: Add your implementation code here
	if (NULL == pVal) 
		return E_POINTER;
 
	// ¿Œµ¶Ω∫¥¬ 1ø°º≠ Ω√¿€(VBøÎ)
	if ((index < 1) || (index > m_Count))
		return E_INVALIDARG;
	
	VariantInit(pVal);
	pVal->vt = VT_DISPATCH;
	pVal->punkVal = NULL;
 
	// 0 ø°º≠ Ω√¿€«œ¥¬ ¿Œµ¶Ω∫∑Œ ∫Ø∞Ê
	HRESULT hr = VariantCopy(pVal, &m_pEmployees[index-1]);
	if(FAILED(hr))
		MessageBox(NULL, "Can't get the Item.", NULL, MB_OK);

	return hr;
}

STDMETHODIMP CEmployees::get__NewEnum(LPUNKNOWN * pVal)
{
	// TODO: Add your implementation code here
	if (NULL == pVal) 
		return E_POINTER;
	*pVal = NULL;
 
	typedef CComObject<
		CComEnum<IEnumVARIANT, &IID_IEnumVARIANT, VARIANT, 
		 _Copy<VARIANT> > > EnumVar;
	EnumVar* p = new EnumVar;
 
	HRESULT hr = p->Init(&m_pEmployees[0], 
						 &m_pEmployees[m_Count], 
						 NULL, AtlFlagCopy);
 
	if (SUCCEEDED(hr))
		hr = p->QueryInterface(IID_IEnumVARIANT, (LPVOID*)pVal);
	if (FAILED(hr))
		delete p;
 
	return hr;
}

void CEmployees::Init()
{
	static char* names[] = {
				"±Ë¿œ", "±Ë¿Ã", "±ËªÔ", "±ËªÁ", "±Ëø¿",
				"±Ë¿∞", "±Ëƒ•", "±Ë∆»", "±Ë±∏", "±ËΩ "};
	static char* addrs[] = {
				"¡÷º“1", "¡÷º“2", "¡÷º“3", "¡÷º“4", "¡÷º“5",
				"¡÷º“6", "¡÷º“7", "¡÷º“8", "¡÷º“9", "¡÷º“10"};
	static char* telnos[] = {
				"111-1111", "222-2222", "333-3333",
				"444-4444", "555-5555", "666-6666",
				"777-7777", "888-8888", "999-9999",
				"000-0000"};

	if (m_pEmployees != NULL)
		delete [] m_pEmployees;
	m_Count = 10;
 
	m_pEmployees = new CComVariant[m_Count];
 
	CComObject<CEmployee>* pEmployee;
	LPDISPATCH lpDisp = NULL;
 
	for (int i = 0; i < m_Count; i++) {
		HRESULT hr = CComObject<CEmployee>::CreateInstance(&pEmployee);
		if(FAILED(hr)) {
			MessageBox(NULL, "Can't create Employe object", NULL, MB_OK);
			return;
		}
		pEmployee->m_Name = names[i];
		pEmployee->m_Address = addrs[i];
		pEmployee->m_Telephone = telnos[i];
		pEmployee->QueryInterface(IID_IDispatch, (void**)&lpDisp);

	//	CComVariant& var = m_pEmployees[i];
	//	var.vt = VT_DISPATCH;
	//	var.pdispVal = lpDisp;
		CComVariant* var = &m_pEmployees[i];
		var->vt = VT_DISPATCH;
		var->pdispVal = lpDisp;
	//	m_pEmployees[i].vt=VT_DISPATCH;
	//	m_pEmployees[i].pdispVal = lpDisp;
	}
}
