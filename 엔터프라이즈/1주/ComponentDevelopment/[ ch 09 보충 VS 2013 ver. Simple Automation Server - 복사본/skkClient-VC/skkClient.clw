; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSkkClientDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "skkClient.h"
ODLFile=skkClient.odl

ClassCount=4
Class1=CSkkClientApp
Class2=CSkkClientDlg
Class3=CAboutDlg
Class4=CSkkClientDlgAutoProxy

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_SKKCLIENT_DIALOG

[CLS:CSkkClientApp]
Type=0
HeaderFile=skkClient.h
ImplementationFile=skkClient.cpp
Filter=N

[CLS:CSkkClientDlg]
Type=0
HeaderFile=skkClientDlg.h
ImplementationFile=skkClientDlg.cpp
Filter=D
LastObject=CSkkClientDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=skkClientDlg.h
ImplementationFile=skkClientDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[CLS:CSkkClientDlgAutoProxy]
Type=0
HeaderFile=DlgProxy.h
ImplementationFile=DlgProxy.cpp
BaseClass=CCmdTarget
Filter=N

[DLG:IDD_SKKCLIENT_DIALOG]
Type=1
Class=CSkkClientDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_SHAPECHANGE,button,1342242816

