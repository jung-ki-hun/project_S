// AddFrontDlg.cpp : implementation file
//

#include "stdafx.h"
#include "AddFront.h"
#include "AddFrontDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddFrontDlg dialog

CAddFrontDlg::CAddFrontDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CAddFrontDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CAddFrontDlg)
	m_nAddEnd = 0;
	m_nAutoType = -1;
	m_nSum = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	
	m_nAutoType = 0;
	m_pAddBack = NULL;
	m_pDisp = NULL;
}

void CAddFrontDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAddFrontDlg)
	DDX_Text(pDX, IDC_ADDEND, m_nAddEnd);
	DDX_Radio(pDX, IDC_AUTOTYPE, m_nAutoType);
	DDX_Text(pDX, IDC_SUM, m_nSum);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAddFrontDlg, CDialog)
	//{{AFX_MSG_MAP(CAddFrontDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_ADD, OnAdd)
	ON_BN_CLICKED(IDC_ADDTEN, OnAddten)
	ON_BN_CLICKED(IDC_CLEAR, OnClear)
	ON_BN_CLICKED(IDC_CREATE, OnCreateServer)
	ON_BN_CLICKED(IDC_RELEASE, OnReleaseServer)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CAddFrontDlg message handlers

BOOL CAddFrontDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CAddFrontDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CAddFrontDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CAddFrontDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CAddFrontDlg::OnAdd() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if(m_nAutoType == 0) {
		HRESULT hr;
		DISPID dispIDParam = DISPID_PROPERTYPUT;
		m_varg.vt = VT_I2;
		m_varg.iVal = m_nAddEnd;

		m_dispparams.rgvarg = &m_varg;
		m_dispparams.cArgs = 1;
		m_dispparams.cNamedArgs = 1;
		m_dispparams.rgdispidNamedArgs = &dispIDParam;
		hr = m_pDisp->Invoke(m_dispidAddEnd,
							 IID_NULL,
							 LOCALE_SYSTEM_DEFAULT,
							 DISPATCH_PROPERTYPUT,
							 &m_dispparams,
							 NULL, &m_excepinfo, NULL);
		if (FAILED(hr)) {
			CString szMsg = "에러가 발생했습니다!\n";
			CString szTemp;
			
			_bstr_t bstrSource(m_excepinfo.bstrSource);
			_bstr_t bstrDescription(m_excepinfo.bstrDescription);
			
			szTemp.Format("에러 소스 : %s\n",
				bstrSource.length() ? 
				(LPCTSTR)bstrSource : _T("없음"));
			szMsg += szTemp;
			szTemp.Format("에러 설명 : %s\n",
				bstrDescription.length() ? 
				(LPCTSTR)bstrDescription : _T("없음"));
			szMsg += szTemp;
			AfxMessageBox(szMsg);
			SysFreeString(m_excepinfo.bstrSource);
			SysFreeString(m_excepinfo.bstrDescription);
		}

		m_dispparams.rgvarg = NULL;
		m_dispparams.cArgs = 0;
		m_dispparams.cNamedArgs = 0;
		m_dispparams.rgdispidNamedArgs = NULL;
		m_pDisp->Invoke(m_dispidAdd,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_METHOD,
						&m_dispparams,
						NULL, NULL, NULL);
						
		m_pDisp->Invoke(m_dispidSum,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_PROPERTYGET,
						&m_dispparams,
						&m_retval,
						NULL, NULL);
		m_nSum = m_retval.iVal;
	}
	else {
		try {
			m_pAddBack->AddEnd = m_nAddEnd;
			m_pAddBack->Add();
			m_nSum = m_pAddBack->Sum;
		}
		catch(_com_error& e) {
			ShowMessage(e);
		}
	}
	UpdateData(FALSE);
}

void CAddFrontDlg::OnAddten() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if(m_nAutoType == 0) {
		HRESULT hr;
		DISPID dispIDParam = DISPID_PROPERTYPUT;
		m_varg.vt = VT_I2;
		m_varg.iVal = m_nAddEnd;

		m_dispparams.rgvarg = &m_varg;
		m_dispparams.cArgs = 1;
		m_dispparams.cNamedArgs = 1;
		m_dispparams.rgdispidNamedArgs = &dispIDParam;
		hr = m_pDisp->Invoke(m_dispidAddEnd,
							 IID_NULL,
							 LOCALE_SYSTEM_DEFAULT,
							 DISPATCH_PROPERTYPUT,
							 &m_dispparams,
							 NULL, NULL, NULL);
		if (FAILED(hr)) {
			CString szMsg = "에러가 발생했습니다!\n";
			CString szTemp;
			ISupportErrorInfo* pSErrInfo;
			IErrorInfo* pErrInfo;
			BSTR bszSource;
			BSTR bszDescription;
			_bstr_t bstrSource;
			_bstr_t bstrDescription;

			hr = m_pDisp->QueryInterface(IID_ISupportErrorInfo,
										 (LPVOID*)&pSErrInfo);
			if(SUCCEEDED(hr)) {
				hr = pSErrInfo->InterfaceSupportsErrorInfo(__uuidof(m_pDisp));
				if(SUCCEEDED(hr)) {
					hr = ::GetErrorInfo(0, &pErrInfo);
					if(SUCCEEDED(hr)) {
						pErrInfo->GetSource(&bszSource);
						pErrInfo->GetDescription(&bszDescription);
						bstrSource = bszSource;
						bstrDescription = bszDescription;
						szTemp.Format("에러 소스 : %s\n",
							bstrSource.length() ? 
							(LPCTSTR)bstrSource : _T("없음"));
						szMsg += szTemp;
						szTemp.Format("에러 설명 : %s\n",
							bstrDescription.length() ? 
							(LPCTSTR)bstrDescription : _T("없음"));
						szMsg += szTemp;
						AfxMessageBox(szMsg);
						SysFreeString(bszSource);
						SysFreeString(bszDescription);
						pErrInfo->Release();
					}
				}
				pSErrInfo->Release();
			}
		}
		m_dispparams.rgvarg = NULL;
		m_dispparams.cArgs = 0;
		m_dispparams.cNamedArgs = 0;
		m_dispparams.rgdispidNamedArgs = NULL;
		m_pDisp->Invoke(m_dispidAddTen,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_METHOD,
						&m_dispparams,
						NULL, NULL, NULL);
						
		m_pDisp->Invoke(m_dispidSum,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_PROPERTYGET,
						&m_dispparams,
						&m_retval,
						NULL, NULL);
		m_nSum = m_retval.iVal;
	}
	else {
		try {
			m_pAddBack->AddEnd = m_nAddEnd;
			m_pAddBack->AddTen();
			m_nSum = m_pAddBack->Sum;
		}
		catch(_com_error& e) {
			ShowMessage(e);
		}
	}
	UpdateData(FALSE);
}


void CAddFrontDlg::OnClear() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if(m_nAutoType == 0) {
		m_dispparams.rgvarg = NULL;
		m_dispparams.cArgs = 0;
		m_dispparams.cNamedArgs = 0;
		m_dispparams.rgdispidNamedArgs = NULL;
		m_pDisp->Invoke(m_dispidClear,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_METHOD,
						&m_dispparams,
						NULL, NULL, NULL);
							
		m_pDisp->Invoke(m_dispidSum,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_PROPERTYGET,
						&m_dispparams,
						&m_retval,
						NULL, NULL);
		m_nSum = m_retval.iVal;
	}
	else {
		try {
			m_pAddBack->Clear();
			m_nSum = m_pAddBack->Sum;
		}
		catch(_com_error& e) {
			ShowMessage(e);
		}
	}
	UpdateData(FALSE);
}

void CAddFrontDlg::OnCreateServer() 
{
	// TODO: Add your control notification handler code here
	OLECHAR* szName;

	UpdateData(TRUE);
	if(m_nAutoType == 0) {
		m_pDisp = IDispatchPtr(__uuidof(AddBack));
		
		szName = L"AddEnd";
		m_pDisp->GetIDsOfNames(IID_NULL,
							   &szName,
							   1,
							   LOCALE_SYSTEM_DEFAULT,
							   &m_dispidAddEnd);			
		szName = L"Sum";
		m_pDisp->GetIDsOfNames(IID_NULL,
							   &szName,
							   1,
							   LOCALE_SYSTEM_DEFAULT,
							   &m_dispidSum);

		szName = L"Add";
		m_pDisp->GetIDsOfNames(IID_NULL,
							   &szName,
							   1,
							   LOCALE_SYSTEM_DEFAULT,
							   &m_dispidAdd);

		szName = L"AddTen";
		m_pDisp->GetIDsOfNames(IID_NULL,
							   &szName,
							   1,
							   LOCALE_SYSTEM_DEFAULT,
							   &m_dispidAddTen);

		szName = L"Clear";
		m_pDisp->GetIDsOfNames(IID_NULL,
							   &szName,
							   1,
							   LOCALE_SYSTEM_DEFAULT,
							   &m_dispidClear);

		VariantInit(&m_varg);
		VariantInit(&m_retval);
		m_dispparams.rgvarg = NULL;
		m_dispparams.cArgs = 0;
		m_dispparams.rgdispidNamedArgs = NULL;
		m_dispparams.cNamedArgs = 0;

		m_pDisp->Invoke(m_dispidAddEnd,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_PROPERTYGET,
						&m_dispparams,
						&m_retval,
						NULL, NULL);
		m_nAddEnd = m_retval.iVal;
			
		m_pDisp->Invoke(m_dispidSum,
						IID_NULL,
						LOCALE_SYSTEM_DEFAULT,
						DISPATCH_PROPERTYGET,
						&m_dispparams,
						&m_retval,
						NULL, NULL);
		m_nSum = m_retval.iVal;
	}
	else {
		try {
			m_pAddBack = IAddBackPtr(__uuidof(AddBack));
			
			m_nAddEnd = m_pAddBack->AddEnd;
			m_nSum = m_pAddBack->Sum;
		}
		catch(_com_error& e) {
			ShowMessage(e);
		}
	}
	UpdateData(FALSE);	
}

void CAddFrontDlg::OnReleaseServer() 
{
	// TODO: Add your control notification handler code here
	m_pDisp = 0;
	m_pAddBack = 0;	
}

CAddFrontDlg::~CAddFrontDlg()
{
	OnReleaseServer();
}

void CAddFrontDlg::ShowMessage(_com_error & e)
{
	_bstr_t bstrSource(e.Source());
	_bstr_t bstrDescription(e.Description());
	CString szMsg = "에러가 발생했습니다!\n";
	CString szTemp;
		
	szTemp.Format("에러 코드 : %081x\n", e.Error());
	szMsg += szTemp;
	szTemp.Format("에러 내용 : %s\n", e.ErrorMessage());
	szMsg += szTemp;
	szTemp.Format("에러 소스 : %s\n",
		bstrSource.length() ? (LPCTSTR)bstrSource : _T("없음"));
	szMsg += szTemp;
	szTemp.Format("에러 설명 : %s\n",
		bstrDescription.length() ? (LPCTSTR)bstrDescription : _T("없음"));
	szMsg += szTemp;
	AfxMessageBox(szMsg);
}
