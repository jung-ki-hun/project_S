// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "skkbutton.h"

/////////////////////////////////////////////////////////////////////////////
// CSkkButton

IMPLEMENT_DYNCREATE(CSkkButton, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CSkkButton properties

/////////////////////////////////////////////////////////////////////////////
// CSkkButton operations

void CSkkButton::SetFillColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xfffffe02, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CSkkButton::GetFillColor()
{
	unsigned long result;
	InvokeHelper(0xfffffe02, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

unsigned long CSkkButton::GetTopLeft()
{
	unsigned long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSkkButton::SetTopLeft(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CSkkButton::GetBottomRight()
{
	unsigned long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CSkkButton::SetBottomRight(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}
