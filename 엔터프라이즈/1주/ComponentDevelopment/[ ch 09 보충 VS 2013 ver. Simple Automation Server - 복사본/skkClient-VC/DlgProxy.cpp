// DlgProxy.cpp : implementation file
//

#include "stdafx.h"
#include "skkClient.h"
#include "DlgProxy.h"
#include "skkClientDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSkkClientDlgAutoProxy

IMPLEMENT_DYNCREATE(CSkkClientDlgAutoProxy, CCmdTarget)

CSkkClientDlgAutoProxy::CSkkClientDlgAutoProxy()
{
	EnableAutomation();
	
	// To keep the application running as long as an automation 
	//	object is active, the constructor calls AfxOleLockApp.
	AfxOleLockApp();

	// Get access to the dialog through the application's
	//  main window pointer.  Set the proxy's internal pointer
	//  to point to the dialog, and set the dialog's back pointer to
	//  this proxy.
	ASSERT (AfxGetApp()->m_pMainWnd != NULL);
	ASSERT_VALID (AfxGetApp()->m_pMainWnd);
	ASSERT_KINDOF(CSkkClientDlg, AfxGetApp()->m_pMainWnd);
	m_pDialog = (CSkkClientDlg*) AfxGetApp()->m_pMainWnd;
	m_pDialog->m_pAutoProxy = this;
}

CSkkClientDlgAutoProxy::~CSkkClientDlgAutoProxy()
{
	// To terminate the application when all objects created with
	// 	with automation, the destructor calls AfxOleUnlockApp.
	//  Among other things, this will destroy the main dialog
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CSkkClientDlgAutoProxy::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CSkkClientDlgAutoProxy, CCmdTarget)
	//{{AFX_MSG_MAP(CSkkClientDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CSkkClientDlgAutoProxy, CCmdTarget)
	//{{AFX_DISPATCH_MAP(CSkkClientDlgAutoProxy)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_ISkkClient to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {D7BF3501-F937-4B5B-9FC5-017F88D37B6D}
static const IID IID_ISkkClient =
{ 0xd7bf3501, 0xf937, 0x4b5b, { 0x9f, 0xc5, 0x1, 0x7f, 0x88, 0xd3, 0x7b, 0x6d } };

BEGIN_INTERFACE_MAP(CSkkClientDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CSkkClientDlgAutoProxy, IID_ISkkClient, Dispatch)
END_INTERFACE_MAP()

// The IMPLEMENT_OLECREATE2 macro is defined in StdAfx.h of this project
// {2294EE58-38B5-4F46-AA79-C3C2700BE21C}
IMPLEMENT_OLECREATE2(CSkkClientDlgAutoProxy, "SkkClient.Application", 0x2294ee58, 0x38b5, 0x4f46, 0xaa, 0x79, 0xc3, 0xc2, 0x70, 0xb, 0xe2, 0x1c)

/////////////////////////////////////////////////////////////////////////////
// CSkkClientDlgAutoProxy message handlers
