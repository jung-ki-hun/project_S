VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2724
   ClientLeft      =   48
   ClientTop       =   336
   ClientWidth     =   4668
   LinkTopic       =   "Form1"
   ScaleHeight     =   2724
   ScaleWidth      =   4668
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdOK 
      Caption         =   "Exit"
      Height          =   372
      Left            =   3240
      TabIndex        =   7
      Top             =   1920
      Width           =   1092
   End
   Begin VB.CommandButton cmdClear 
      Caption         =   "Clear Method"
      Height          =   372
      Left            =   3240
      TabIndex        =   6
      Top             =   1320
      Width           =   1092
   End
   Begin VB.CommandButton cmdAddTen 
      Caption         =   "AddTen Method"
      Height          =   372
      Left            =   3240
      TabIndex        =   5
      Top             =   720
      Width           =   1092
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "Add Method"
      Height          =   372
      Left            =   3240
      TabIndex        =   4
      Top             =   120
      Width           =   1092
   End
   Begin VB.TextBox txtSum 
      Height          =   372
      Left            =   1080
      TabIndex        =   3
      Top             =   1080
      Width           =   1332
   End
   Begin VB.TextBox txtAddEnd 
      Height          =   372
      Left            =   1080
      TabIndex        =   2
      Top             =   240
      Width           =   1332
   End
   Begin VB.Label Label2 
      Caption         =   "Sum"
      Height          =   252
      Left            =   120
      TabIndex        =   1
      Top             =   1200
      Width           =   732
   End
   Begin VB.Label Label1 
      Caption         =   "AddEnd"
      Height          =   252
      Left            =   120
      TabIndex        =   0
      Top             =   360
      Width           =   852
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private WithEvents oAddBack As AddBack
Attribute oAddBack.VB_VarHelpID = -1

Private Sub cmdAdd_Click()
    On Error GoTo ErrHandler
    
    oAddBack.AddEnd = Val(txtAddEnd.Text)
    oAddBack.Add
    txtSum.Text = oAddBack.Sum
    Exit Sub
ErrHandler:
    MsgBox "에러 코드 : " & Err.Number & vbCrLf & _
           "에러 설명 : " & Err.Description & vbCrLf & _
           "에러 소스 : " & Err.Source

End Sub

Private Sub cmdAddTen_Click()
    On Error GoTo ErrHandler
    oAddBack.AddEnd = Val(txtAddEnd.Text)
    oAddBack.AddTen
    txtSum.Text = oAddBack.Sum
    Exit Sub
ErrHandler:
    MsgBox "에러 코드 : " & Err.Number & vbCrLf & _
           "에러 설명 : " & Err.Description & vbCrLf & _
           "에러 소스 : " & Err.Source
End Sub

Private Sub cmdClear_Click()
    oAddBack.Clear
    txtSum.Text = oAddBack.Sum

End Sub

Private Sub cmdOK_Click()
    Unload Me
End Sub

Private Sub Form_Load()
    Set oAddBack = New AddBack
    txtAddEnd.Text = oAddBack.AddEnd
    txtSum.Text = oAddBack.Sum

End Sub

Private Sub oAddBack_ChangedAddEnd(ByVal newVal As Integer)
    MsgBox "AddEnd 속성이 변경되었습니다." & vbCrLf & _
           "AddEnd 속성 값 : " & newVal

End Sub

Private Sub oAddBack_ChangedSum(ByVal newVal As Integer)
    MsgBox "Sum 속성이 변경되었습니다." & vbCrLf & _
           "Sum 속성 값 : " & newVal

End Sub
