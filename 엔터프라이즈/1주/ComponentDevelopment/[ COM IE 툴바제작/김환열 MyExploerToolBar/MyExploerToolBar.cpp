// MyExploerToolBar.cpp : Implementation of DLL Exports.


// Note: Proxy/Stub Information
//      To build a separate proxy/stub DLL, 
//      run nmake -f MyExploerToolBarps.mk in the project directory.

#include "stdafx.h"
#include "resource.h"
#include <initguid.h>
#include "MyExploerToolBar.h"

#include "MyExploerToolBar_i.c"
#include "StockBar.h"


CComModule _Module;

BEGIN_OBJECT_MAP(ObjectMap)
OBJECT_ENTRY(CLSID_StockBar, CStockBar)
END_OBJECT_MAP()

/////////////////////////////////////////////////////////////////////////////
// DLL Entry Point

extern "C"
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID /*lpReserved*/)
{
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        _Module.Init(ObjectMap, hInstance, &LIBID_MYEXPLOERTOOLBARLib);
        DisableThreadLibraryCalls(hInstance);
    }
    else if (dwReason == DLL_PROCESS_DETACH)
        _Module.Term();
    return TRUE;    // ok
}

/////////////////////////////////////////////////////////////////////////////
// Used to determine whether the DLL can be unloaded by OLE

STDAPI DllCanUnloadNow(void)
{
    return (_Module.GetLockCount()==0) ? S_OK : S_FALSE;
}

/////////////////////////////////////////////////////////////////////////////
// Returns a class factory to create an object of the requested type

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _Module.GetClassObject(rclsid, riid, ppv);
}

/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
    // registers object, typelib and all interfaces in typelib
	HKEY hKeyLocal = NULL;
	RegCreateKeyEx(HKEY_LOCAL_MACHINE, _T("Software\\Microsoft\\Internet Explorer\\Toolbar"), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKeyLocal, NULL);
	RegSetValueEx(hKeyLocal, _T("{3B816FC2-D656-4D8C-B287-5634C42AD088}"), 0, REG_BINARY, NULL, 0);
	RegCloseKey(hKeyLocal);

    return _Module.RegisterServer(TRUE);
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	HKEY hKeyLocal = NULL;
	RegCreateKeyEx(HKEY_LOCAL_MACHINE, _T("Software\\Microsoft\\Internet Explorer\\Toolbar"), 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKeyLocal, NULL);
	RegDeleteValue(hKeyLocal, _T("{3B816FC2-D656-4D8C-B287-5634C42AD088}"));
	RegCloseKey(hKeyLocal);

    return _Module.UnregisterServer(TRUE);
}


