VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2496
   ClientLeft      =   48
   ClientTop       =   336
   ClientWidth     =   3744
   LinkTopic       =   "Form1"
   ScaleHeight     =   2496
   ScaleWidth      =   3744
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdOK 
      Caption         =   "Exit"
      Height          =   492
      Left            =   1200
      TabIndex        =   2
      Top             =   1320
      Width           =   972
   End
   Begin VB.CommandButton cmdEnum 
      Caption         =   "_NewEnum 속성"
      Height          =   492
      Left            =   1800
      TabIndex        =   1
      Top             =   120
      Width           =   1332
   End
   Begin VB.CommandButton cmdCount 
      Caption         =   "Cout/Item 속성"
      Height          =   492
      Left            =   240
      TabIndex        =   0
      Top             =   120
      Width           =   1332
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private oCompany As Company
Private oEmployees As IEmployees
Private oEmployee As IEmployee

Private Sub cmdCount_Click()
    For i = 1 To oEmployees.Count
        Set oEmployee = oEmployees(i)
        MsgBox "이름 : " & oEmployee.Name & vbCrLf & _
               "주소 : " & oEmployee.Address & vbCrLf & _
               "전화번호 : " & oEmployee.Telephone
    Next i
End Sub

Private Sub cmdEnum_Click()
    For Each oEmployee In oEmployees
        MsgBox "이름 : " & oEmployee.Name & vbCrLf & _
               "주소 : " & oEmployee.Address & vbCrLf & _
               "전화번호 : " & oEmployee.Telephone
    Next
End Sub

Private Sub cmdOK_Click()
    Unload Me
End Sub

Private Sub Form_Load()
    Set oCompany = New Company
    Set oEmployees = oCompany.Employees
End Sub

Private Sub Form_Unload(Cancel As Integer)
    Set oEmployee = Nothing
    Set oEmployees = Nothing
    Set oCompany = Nothing
End Sub


