// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "dhctl.h"

/////////////////////////////////////////////////////////////////////////////
// CDHCtl

IMPLEMENT_DYNCREATE(CDHCtl, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CDHCtl properties

/////////////////////////////////////////////////////////////////////////////
// CDHCtl operations

CString CDHCtl::GetUrlPath()
{
	CString result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CDHCtl::SetUrlPath(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void CDHCtl::GoToURL()
{
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
