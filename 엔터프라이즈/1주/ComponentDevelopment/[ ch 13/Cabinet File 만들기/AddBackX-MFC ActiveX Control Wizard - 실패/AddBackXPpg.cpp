// AddBackXPpg.cpp : Implementation of the CAddBackXPropPage property page class.

#include "stdafx.h"
#include "AddBackX.h"
#include "AddBackXPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CAddBackXPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CAddBackXPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CAddBackXPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CAddBackXPropPage, "ADDBACKX.AddBackXPropPage.1",
	0x82ea398, 0x25fc, 0x4771, 0x84, 0xd0, 0x61, 0x36, 0xc4, 0x42, 0x86, 0x94)


/////////////////////////////////////////////////////////////////////////////
// CAddBackXPropPage::CAddBackXPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CAddBackXPropPage

BOOL CAddBackXPropPage::CAddBackXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_ADDBACKX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXPropPage::CAddBackXPropPage - Constructor

CAddBackXPropPage::CAddBackXPropPage() :
	COlePropertyPage(IDD, IDS_ADDBACKX_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CAddBackXPropPage)
	// NOTE: ClassWizard will add member initialization here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXPropPage::DoDataExchange - Moves data between page and properties

void CAddBackXPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CAddBackXPropPage)
	// NOTE: ClassWizard will add DDP, DDX, and DDV calls here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CAddBackXPropPage message handlers
