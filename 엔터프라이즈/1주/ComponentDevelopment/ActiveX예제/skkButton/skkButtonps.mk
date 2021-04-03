
skkButtonps.dll: dlldata.obj skkButton_p.obj skkButton_i.obj
	link /dll /out:skkButtonps.dll /def:skkButtonps.def /entry:DllMain dlldata.obj skkButton_p.obj skkButton_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del skkButtonps.dll
	@del skkButtonps.lib
	@del skkButtonps.exp
	@del dlldata.obj
	@del skkButton_p.obj
	@del skkButton_i.obj
