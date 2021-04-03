; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CSkkView
LastTemplate=CCmdTarget
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "skk.h"
ODLFile=skk.odl
LastPage=0

ClassCount=7
Class1=CSkkApp
Class2=CSkkDoc
Class3=CSkkView
Class4=CMainFrame
Class5=CInPlaceFrame

ResourceCount=4
Resource1=IDR_MAINFRAME
Resource2=IDR_SRVR_INPLACE
Resource3=IDR_SRVR_EMBEDDED
Class6=CAboutDlg
Class7=CGraph
Resource4=IDD_ABOUTBOX

[CLS:CSkkApp]
Type=0
HeaderFile=skk.h
ImplementationFile=skk.cpp
Filter=N

[CLS:CSkkDoc]
Type=0
HeaderFile=skkDoc.h
ImplementationFile=skkDoc.cpp
Filter=N
BaseClass=COleServerDoc
VirtualFilter=vLODC
LastObject=CSkkDoc

[CLS:CSkkView]
Type=0
HeaderFile=skkView.h
ImplementationFile=skkView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=ID_EDIT_COPY


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T

[CLS:CInPlaceFrame]
Type=0
HeaderFile=IpFrame.h
ImplementationFile=IpFrame.cpp
Filter=T



[CLS:CAboutDlg]
Type=0
HeaderFile=skk.cpp
ImplementationFile=skk.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=IDM_SHAPE
Command15=ID_APP_ABOUT
CommandCount=15

[MNU:IDR_SRVR_INPLACE]
Type=1
Class=CSkkView
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_CUT
Command3=ID_EDIT_COPY
Command4=ID_EDIT_PASTE
Command5=IDM_SHAPE
Command6=ID_APP_ABOUT
CommandCount=6

[TB:IDR_SRVR_INPLACE]
Type=1
Class=CSkkView
Command1=ID_EDIT_CUT
Command2=ID_EDIT_COPY
Command3=ID_EDIT_PASTE
Command4=ID_APP_ABOUT
CommandCount=4

[MNU:IDR_SRVR_EMBEDDED]
Type=1
Class=CSkkView
Command1=ID_FILE_UPDATE
Command2=ID_FILE_SAVE_COPY_AS
Command3=ID_FILE_PRINT
Command4=ID_FILE_PRINT_PREVIEW
Command5=ID_FILE_PRINT_SETUP
Command6=ID_APP_EXIT
Command7=IDM_SHAPE
Command8=ID_APP_ABOUT
CommandCount=8

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[ACL:IDR_SRVR_INPLACE]
Type=1
Class=CSkkView
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_CUT
Command3=ID_EDIT_COPY
Command4=ID_EDIT_PASTE
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_CANCEL_EDIT_SRVR
CommandCount=9

[ACL:IDR_SRVR_EMBEDDED]
Type=1
Class=CSkkView
Command1=ID_FILE_UPDATE
Command2=ID_FILE_PRINT
Command3=ID_EDIT_UNDO
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_NEXT_PANE
Command12=ID_PREV_PANE
CommandCount=12

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[CLS:CGraph]
Type=0
HeaderFile=Graph.h
ImplementationFile=Graph.cpp
BaseClass=CCmdTarget
Filter=N
LastObject=CGraph

