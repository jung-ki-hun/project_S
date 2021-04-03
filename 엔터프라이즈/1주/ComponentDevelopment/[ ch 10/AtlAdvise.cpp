ATLAPI AtlAdvise(IUnknown* pUnkCP, IUnknown* pUnk,
				 const IID& iid, LPWORD pdw)
{
	CComPtr<IConnectionPointContainer> pCPC;
	CComPtr<IConnectionPoint> pCP;
	HRESULT hRes = pUnkCP->QueryInterface(IID_IConnectionPointContainer, (void**) &pCPC);
	if(SUCCEEDED(hRes))
		hres=pCPC->FindConnectionPoint(iid,&pCP);
	if(SUCCEEDED(hRes))
		hRes = pCP->Advise(pUnk, pdw);
	return hRes;
}