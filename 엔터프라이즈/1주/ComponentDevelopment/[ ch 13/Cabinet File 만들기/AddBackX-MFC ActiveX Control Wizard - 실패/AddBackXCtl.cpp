// AddBackXCtl.cpp : Implementation of the CAddBackXCtrl ActiveX Control class.

#include "stdafx.h"
#include "AddBackX.h"
#include "AddBackXCtl.h"
#include "AddBackXPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CAddBackXCtrl, COleControl)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CAddBackXCtrl, COleControl)
	//{{AFX_MSG_MAP(CAddBackXCtrl)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Dispatch map

BEGIN_DISPATCH_MAP(CAddBackXCtrl, COleControl)
	//{{AFX_DISPATCH_MAP(CAddBackXCtrl)
	DISP_PROPERTY_EX(CAddBackXCtrl, "AddEnd", GetAddEnd, SetAddEnd, VT_I2)
	DISP_PROPERTY_EX(CAddBackXCtrl, "Sum", GetSum, SetNotSupported, VT_I2)
	DISP_FUNCTION(CAddBackXCtrl, "Clear", Clear, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CAddBackXCtrl, "Add", Add, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CAddBackXCtrl, "AddTen", AddTen, VT_EMPTY, VTS_NONE)
	//}}AFX_DISPATCH_MAP
	DISP_FUNCTION_ID(CAddBackXCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()


/////////////////////////////////////////////////////////////////////////////
// Event map

BEGIN_EVENT_MAP(CAddBackXCtrl, COleControl)
	//{{AFX_EVENT_MAP(CAddBackXCtrl)
	// NOTE - ClassWizard will add and remove event map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_EVENT_MAP
END_EVENT_MAP()


/////////////////////////////////////////////////////////////////////////////
// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CAddBackXCtrl, 1)
	PROPPAGEID(CAddBackXPropPage::guid)
END_PROPPAGEIDS(CAddBackXCtrl)


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CAddBackXCtrl, "ADDBACKX.AddBackXCtrl.1",
	0xe80c2ac5, 0x9f7d, 0x4ffb, 0xbf, 0xb0, 0x9b, 0x2f, 0xcc, 0xfb, 0xb5, 0x30)


/////////////////////////////////////////////////////////////////////////////
// Type library ID and version

IMPLEMENT_OLETYPELIB(CAddBackXCtrl, _tlid, _wVerMajor, _wVerMinor)


/////////////////////////////////////////////////////////////////////////////
// Interface IDs

const IID BASED_CODE IID_DAddBackX =
		{ 0xde2046e6, 0xa49, 0x4809, { 0x88, 0x8d, 0x38, 0x39, 0x54, 0x5f, 0xbe, 0xff } };
const IID BASED_CODE IID_DAddBackXEvents =
		{ 0x517dc723, 0x42e4, 0x4e37, { 0x8b, 0x19, 0x42, 0xf0, 0x9f, 0x64, 0x90, 0xd } };


/////////////////////////////////////////////////////////////////////////////
// Control type information

static const DWORD BASED_CODE _dwAddBackXOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CAddBackXCtrl, IDS_ADDBACKX, _dwAddBackXOleMisc)


/////////////////////////////////////////////////////////////////////////////
// CAddBackXCtrl::CAddBackXCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CAddBackXCtrl

BOOL CAddBackXCtrl::CAddBackXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_ADDBACKX,
			IDB_ADDBACKX,
			afxRegApartmentThreading,
			_dwAddBackXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXCtrl::CAddBackXCtrl - Constructor

CAddBackXCtrl::CAddBackXCtrl()
{
	InitializeIIDs(&IID_DAddBackX, &IID_DAddBackXEvents);
	m_AddEnd=10;
	m_Sum=0;

	// TODO: Initialize your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXCtrl::~CAddBackXCtrl - Destructor

CAddBackXCtrl::~CAddBackXCtrl()
{
	// TODO: Cleanup your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXCtrl::OnDraw - Drawing function

void CAddBackXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXCtrl::DoPropExchange - Persistence support

void CAddBackXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.

}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXCtrl::OnResetState - Reset control to default state

void CAddBackXCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXCtrl::AboutBox - Display an "About" box to the user

void CAddBackXCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_ADDBACKX);
	dlgAbout.DoModal();
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXCtrl message handlers

void CAddBackXCtrl::Clear() 
{
	// TODO: Add your dispatch handler code here
	m_Sum=0;
}

void CAddBackXCtrl::Add() 
{
	// TODO: Add your dispatch handler code here
	m_Sum+=m_AddEnd;
}

short CAddBackXCtrl::GetAddEnd() 
{
	// TODO: Add your property handler here
	
	return m_AddEnd;
}

void CAddBackXCtrl::SetAddEnd(short nNewValue) 
{
	// TODO: Add your property handler here
	m_AddEnd=nNewValue;
	SetModifiedFlag();
}

short CAddBackXCtrl::GetSum() 
{
	// TODO: Add your property handler here

	return m_Sum;
}

void CAddBackXCtrl::AddTen() 
{
	// TODO: Add your dispatch handler code here
	m_Sum+=10;
}

