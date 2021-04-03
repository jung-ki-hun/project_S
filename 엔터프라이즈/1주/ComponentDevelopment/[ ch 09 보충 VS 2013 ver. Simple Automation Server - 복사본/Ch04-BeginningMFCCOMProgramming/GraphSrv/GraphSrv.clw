; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CGraphSrvView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "GraphSrv.h"
ODLFile=GraphSrv.odl
LastPage=0

ClassCount=9
Class1=CGraphSrvApp
Class2=CGraphSrvDoc
Class3=CGraphSrvView
Class4=CMainFrame
Class5=CInPlaceFrame
Class7=CChildFrame

ResourceCount=12
Resource1=IDD_DATAEDIT
Resource2=IDD_ABOUTBOX
Resource3=IDR_GRAPHSTYPE
Class6=CAboutDlg
Resource4=IDR_GRAPHSTYPE_SRVR_EMB
Class8=CGraph
Resource5=IDR_MAINFRAME
Class9=CEditDlg
Resource6=IDR_GRAPHSTYPE_SRVR_IP
Resource7=IDR_MAINFRAME (English (U.S.))
Resource8=IDR_GRAPHSTYPE_SRVR_IP (English (U.S.))
Resource9=IDR_GRAPHSTYPE (English (U.S.))
Resource10=IDR_GRAPHSTYPE_SRVR_EMB (English (U.S.))
Resource11=IDD_ABOUTBOX (English (U.S.))
Resource12=IDD_DATAEDIT (English (U.S.))

[CLS:CGraphSrvApp]
Type=0
HeaderFile=GraphSrv.h
ImplementationFile=GraphSrv.cpp
Filter=N

[CLS:CGraphSrvDoc]
Type=0
HeaderFile=GraphSrvDoc.h
ImplementationFile=GraphSrvDoc.cpp
Filter=N
LastObject=CGraphSrvDoc
BaseClass=COleServerDoc
VirtualFilter=vLODC

[CLS:CGraphSrvView]
Type=0
HeaderFile=GraphSrvView.h
ImplementationFile=GraphSrvView.cpp
Filter=C
LastObject=CGraphSrvView
BaseClass=CView
VirtualFilter=VWC

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

[CLS:CChildFrame]
Type=0
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp
Filter=M

[CLS:CAboutDlg]
Type=0
HeaderFile=GraphSrv.cpp
ImplementationFile=GraphSrv.cpp
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
Command3=ID_FILE_PRINT_SETUP
Command4=ID_FILE_MRU_FILE1
Command5=ID_APP_EXIT
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_APP_ABOUT
CommandCount=8

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_GRAPHSTYPE_SRVR_EMB]
Type=1
Class=CGraphSrvView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_UPDATE
Command5=ID_FILE_SAVE_COPY_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_OPTIONS_GRAPHTYPE_BAR
Command16=ID_OPTIONS_GRAPHTYPE_LINE
Command17=ID_OPTIONS_GRAPHTYPE_PIE
Command18=ID_OPTIONS_FRAMETYPE_FULL
Command19=ID_OPTIONS_FRAMETYPE_AXIS
Command20=ID_OPTIONS_FRAMETYPE_NONE
Command21=ID_OPTIONS_YAXISLINES
Command22=ID_OPTIONS_IMPORTDATA
Command23=ID_OPTIONS_EXPORTDATA
Command24=ID_OPTIONS_EDITDATA
Command25=ID_VIEW_TOOLBAR
Command26=ID_VIEW_STATUS_BAR
Command27=ID_WINDOW_NEW
Command28=ID_WINDOW_CASCADE
Command29=ID_WINDOW_TILE_HORZ
Command30=ID_WINDOW_ARRANGE
Command31=ID_APP_ABOUT
CommandCount=31

[MNU:IDR_GRAPHSTYPE_SRVR_IP]
Type=1
Class=CGraphSrvView
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_CUT
Command3=ID_EDIT_COPY
Command4=ID_EDIT_PASTE
Command5=ID_VIEW_TOOLBAR
Command6=ID_OPTIONS_GRAPHTYPE_BAR
Command7=ID_OPTIONS_GRAPHTYPE_LINE
Command8=ID_OPTIONS_GRAPHTYPE_PIE
Command9=ID_OPTIONS_FRAMETYPE_FULL
Command10=ID_OPTIONS_FRAMETYPE_AXIS
Command11=ID_OPTIONS_FRAMETYPE_NONE
Command12=ID_OPTIONS_YAXISLINES
Command13=ID_OPTIONS_IMPORTDATA
Command14=ID_OPTIONS_EXPORTDATA
Command15=ID_OPTIONS_EDITDATA
Command16=ID_APP_ABOUT
CommandCount=16

[TB:IDR_GRAPHSTYPE_SRVR_IP]
Type=1
Class=CGraphSrvView
Command1=ID_EDIT_CUT
Command2=ID_EDIT_COPY
Command3=ID_EDIT_PASTE
Command4=ID_APP_ABOUT
CommandCount=4

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

[ACL:IDR_GRAPHSTYPE_SRVR_IP]
Type=1
Class=CGraphSrvView
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

[ACL:IDR_GRAPHSTYPE_SRVR_EMB]
Type=1
Class=CGraphSrvView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_UPDATE
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

[CLS:CGraph]
Type=0
HeaderFile=Graph.h
ImplementationFile=Graph.cpp
BaseClass=CCmdTarget
Filter=N
LastObject=CGraph

[MNU:IDR_GRAPHSTYPE]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_OPTIONS_GRAPHTYPE_BAR
Command16=ID_OPTIONS_GRAPHTYPE_LINE
Command17=ID_OPTIONS_GRAPHTYPE_PIE
Command18=ID_OPTIONS_FRAMETYPE_FULL
Command19=ID_OPTIONS_FRAMETYPE_AXIS
Command20=ID_OPTIONS_FRAMETYPE_NONE
Command21=ID_OPTIONS_YAXISLINES
Command22=ID_OPTIONS_IMPORTDATA
Command23=ID_OPTIONS_EXPORTDATA
Command24=ID_OPTIONS_EDITDATA
Command25=ID_VIEW_TOOLBAR
Command26=ID_VIEW_STATUS_BAR
Command27=ID_WINDOW_NEW
Command28=ID_WINDOW_CASCADE
Command29=ID_WINDOW_TILE_HORZ
Command30=ID_WINDOW_ARRANGE
Command31=ID_APP_ABOUT
CommandCount=31

[DLG:IDD_DATAEDIT]
Type=1
Class=CEditDlg
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_COMBO1,combobox,1344339969
Control4=IDC_COMBO2,combobox,1344339969
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352

[CLS:CEditDlg]
Type=0
HeaderFile=EditDlg.h
ImplementationFile=EditDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=ID_OPTIONS_EDITDATA
VirtualFilter=dWC

[TB:IDR_MAINFRAME (English (U.S.))]
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

[TB:IDR_GRAPHSTYPE_SRVR_IP (English (U.S.))]
Type=1
Class=?
Command1=ID_EDIT_CUT
Command2=ID_EDIT_COPY
Command3=ID_EDIT_PASTE
Command4=ID_APP_ABOUT
CommandCount=4

[MNU:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_PRINT_SETUP
Command4=ID_FILE_MRU_FILE1
Command5=ID_APP_EXIT
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_GRAPHSTYPE (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_OPTIONS_GRAPHTYPE_BAR
Command16=ID_OPTIONS_GRAPHTYPE_LINE
Command17=ID_OPTIONS_GRAPHTYPE_PIE
Command18=ID_OPTIONS_FRAMETYPE_FULL
Command19=ID_OPTIONS_FRAMETYPE_AXIS
Command20=ID_OPTIONS_FRAMETYPE_NONE
Command21=ID_OPTIONS_YAXISLINES
Command22=ID_OPTIONS_IMPORTDATA
Command23=ID_OPTIONS_EXPORTDATA
Command24=ID_OPTIONS_EDITDATA
Command25=ID_VIEW_TOOLBAR
Command26=ID_VIEW_STATUS_BAR
Command27=ID_WINDOW_NEW
Command28=ID_WINDOW_CASCADE
Command29=ID_WINDOW_TILE_HORZ
Command30=ID_WINDOW_ARRANGE
Command31=ID_APP_ABOUT
CommandCount=31

[MNU:IDR_GRAPHSTYPE_SRVR_EMB (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_UPDATE
Command5=ID_FILE_SAVE_COPY_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_OPTIONS_GRAPHTYPE_BAR
Command16=ID_OPTIONS_GRAPHTYPE_LINE
Command17=ID_OPTIONS_GRAPHTYPE_PIE
Command18=ID_OPTIONS_FRAMETYPE_FULL
Command19=ID_OPTIONS_FRAMETYPE_AXIS
Command20=ID_OPTIONS_FRAMETYPE_NONE
Command21=ID_OPTIONS_YAXISLINES
Command22=ID_OPTIONS_IMPORTDATA
Command23=ID_OPTIONS_EXPORTDATA
Command24=ID_OPTIONS_EDITDATA
Command25=ID_VIEW_TOOLBAR
Command26=ID_VIEW_STATUS_BAR
Command27=ID_WINDOW_NEW
Command28=ID_WINDOW_CASCADE
Command29=ID_WINDOW_TILE_HORZ
Command30=ID_WINDOW_ARRANGE
Command31=ID_APP_ABOUT
CommandCount=31

[MNU:IDR_GRAPHSTYPE_SRVR_IP (English (U.S.))]
Type=1
Class=?
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_CUT
Command3=ID_EDIT_COPY
Command4=ID_EDIT_PASTE
Command5=ID_VIEW_TOOLBAR
Command6=ID_OPTIONS_GRAPHTYPE_BAR
Command7=ID_OPTIONS_GRAPHTYPE_LINE
Command8=ID_OPTIONS_GRAPHTYPE_PIE
Command9=ID_OPTIONS_FRAMETYPE_FULL
Command10=ID_OPTIONS_FRAMETYPE_AXIS
Command11=ID_OPTIONS_FRAMETYPE_NONE
Command12=ID_OPTIONS_YAXISLINES
Command13=ID_OPTIONS_IMPORTDATA
Command14=ID_OPTIONS_EXPORTDATA
Command15=ID_OPTIONS_EDITDATA
Command16=ID_APP_ABOUT
CommandCount=16

[ACL:IDR_MAINFRAME (English (U.S.))]
Type=1
Class=?
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

[ACL:IDR_GRAPHSTYPE_SRVR_IP (English (U.S.))]
Type=1
Class=?
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

[ACL:IDR_GRAPHSTYPE_SRVR_EMB (English (U.S.))]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_UPDATE
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

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=?
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_DATAEDIT (English (U.S.))]
Type=1
Class=?
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_COMBO1,combobox,1344339969
Control4=IDC_COMBO2,combobox,1344339969
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352

