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
	CString szMsg("AddEnd �Ӽ��� ����Ǿ����ϴ�.\n");
	CString szTemp;
	szTemp.Format("AddEnd �Ӽ� �� : %d", newVal);
	szMsg += szTemp;
	AfxMessageBox(szMsg);
	return S_OK;
}

STDMETHODIMP CEventHandler::raw_ChangedSum (short newVal)
{
	CString szMsg("Sum �Ӽ��� ����Ǿ����ϴ�.\n");
	CString szTemp;
	szTemp.Format("Sum �Ӽ� �� : %d", newVal);
	szMsg += szTemp;
	AfxMessageBox(szMsg);
	return S_OK;
}

