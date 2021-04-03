// SansuServer.cpp : DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "stdafx.h"
#include "SansuFactory.h"

LONG g_cObjects = 0;
static HMODULE g_hModule = 0;

BOOL APIENTRY DllMain(HINSTANCE hModule,
	DWORD dwReason,
	LPVOID lpReserved
)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		// DLL 이 프로세스의 주소 영역에 맵핑됨
		// DLL 초기화 코드
		g_hModule = hModule;
		break;
	}
	return TRUE;
}

extern "C"
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
	HRESULT hr = CLASS_E_CLASSNOTAVAILABLE;
	IUnknown* pUnk = NULL;

	if (rclsid == CLSID_Sansu) {
		hr = E_OUTOFMEMORY;
		pUnk = new CSansuFactory;
	}

	if (pUnk != NULL) {
		hr = pUnk->QueryInterface(riid, ppv);
		if (FAILED(hr))
			delete pUnk;
	}

	return hr;
}

extern "C"
STDAPI DllCanUnloadNow(void)
{
	if (g_cObjects == 0)
		return S_OK;
	return S_FALSE;
}

BOOL SetRegKeyValue(LPTSTR pszKey,
	LPTSTR pszSubkey,
	LPTSTR pszValue);

extern "C"
STDAPI DllRegisterServer(void)
{
	HRESULT hr = NOERROR;
	TCHAR szID[129];
	TCHAR szCLSID[129];
	TCHAR szModulePath[MAX_PATH];
	wchar_t wszCLSID[129];

	GetModuleFileName(g_hModule, szModulePath,
		sizeof(szModulePath) / sizeof(TCHAR));
	StringFromGUID2(CLSID_Sansu, wszCLSID, 128);
	wcstombs(szID, wszCLSID, 128);

	lstrcpy(szCLSID, TEXT("CLSID\\"));
	lstrcat(szCLSID, szID);
	SetRegKeyValue(
		TEXT("SansuServer.Sansu.1"),
		NULL,
		TEXT("Sansu COM 객체"));
	SetRegKeyValue(
		TEXT("SansuServer.Sansu.1"),
		TEXT("CLSID"),
		szID);

	SetRegKeyValue(
		szCLSID,
		NULL,
		TEXT("Sansu COM 객체"));
	SetRegKeyValue(
		szCLSID,
		TEXT("ProgID"),
		TEXT("SansuServer.Sansu.1"));
	SetRegKeyValue(
		szCLSID,
		TEXT("InprocServer32"),
		szModulePath);

	return (hr);
}

BOOL SetRegKeyValue(LPTSTR pszKey,
	LPTSTR pszSubkey,
	LPTSTR pszValue)
{
	BOOL bOk = FALSE;
	LONG ec;
	HKEY hKey;
	TCHAR szKey[256];

	lstrcpy(szKey, pszKey);

	if (NULL != pszSubkey) {
		lstrcat(szKey, TEXT("\\"));
		lstrcat(szKey, pszSubkey);
	}

	ec = RegCreateKeyEx(
		HKEY_CLASSES_ROOT,
		szKey,
		0,
		NULL,
		REG_OPTION_NON_VOLATILE,
		KEY_ALL_ACCESS,
		NULL,
		&hKey,
		NULL);

	if (ERROR_SUCCESS == ec) {
		if (NULL != pszValue) {
			ec = RegSetValueEx(
				hKey,
				NULL,
				0,
				REG_SZ,
				(BYTE *)pszValue,
				(lstrlen(pszValue) + 1) * sizeof(TCHAR));
		}
		if (ERROR_SUCCESS == ec)
			bOk = TRUE;
		RegCloseKey(hKey);
	}

	return bOk;
}

extern "C"
STDAPI DllUnregisterServer(void)
{
	HRESULT hr = NOERROR;
	TCHAR szID[129];
	TCHAR szCLSID[129];
	TCHAR szTemp[129];
	wchar_t wszCLSID[129];

	StringFromGUID2(CLSID_Sansu, wszCLSID, 128);
	wcstombs(szID, wszCLSID, 128);

	lstrcpy(szCLSID, TEXT("CLSID\\"));
	lstrcat(szCLSID, szID);

	RegDeleteKey(HKEY_CLASSES_ROOT,
		TEXT("SansuServer.Sansu.1\\CLSID"));
	RegDeleteKey(HKEY_CLASSES_ROOT,
		TEXT("SansuServer.Sansu.1"));

	wsprintf(szTemp, TEXT("%s\\%s"), szCLSID,
		TEXT("InprocServer32"));
	RegDeleteKey(HKEY_CLASSES_ROOT, szTemp);
	wsprintf(szTemp, TEXT("%s\\%s"), szCLSID,
		TEXT("ProgID"));
	RegDeleteKey(HKEY_CLASSES_ROOT, szTemp);
	RegDeleteKey(HKEY_CLASSES_ROOT, szCLSID);

	return (hr);
}