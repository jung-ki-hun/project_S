// EventHandler.cpp: implementation of the CEventHandler class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "AddFront.h"
#include "EventHandler.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

STDMETHODIMP CEventHandler::raw_ChangedAddEnd (short newVal)
{
	CString szMsg("AddEnd 속성이 변경되었습니다.\n");
	CString szTemp;
	szTemp.Format("AddEnd 속성 값 : %d", newVal);
	szMsg += szTemp;
	AfxMessageBox(szMsg);
	return S_OK;
}

STDMETHODIMP CEventHandler::raw_ChangedSum (short newVal)
{
	CString szMsg("Sum 속성이 변경되었습니다.\n");
	CString szTemp;
	szTemp.Format("Sum 속성 값 : %d", newVal);
	szMsg += szTemp;
	AfxMessageBox(szMsg);
	return S_OK;
}

