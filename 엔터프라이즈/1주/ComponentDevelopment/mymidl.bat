PATH=c:\;c:\windows\system;c:\windows;
SET PATH=%PATH%c:\"Program Files"\"Microsoft Visual Studio"\VC98\bin\;
PATH=%PATH%c:\"Program Files"\"Microsoft Visual Studio"\common\MSDEV98\bin\;
copy c:\"Program Files"\"Microsoft Visual Studio"\VC98\include\unknwn.idl
copy c:\"Program Files"\"Microsoft Visual Studio"\VC98\include\wtypes.idl
midl %1
