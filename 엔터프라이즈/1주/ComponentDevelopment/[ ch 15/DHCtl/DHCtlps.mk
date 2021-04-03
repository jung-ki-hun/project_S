
DHCtlps.dll: dlldata.obj DHCtl_p.obj DHCtl_i.obj
	link /dll /out:DHCtlps.dll /def:DHCtlps.def /entry:DllMain dlldata.obj DHCtl_p.obj DHCtl_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del DHCtlps.dll
	@del DHCtlps.lib
	@del DHCtlps.exp
	@del dlldata.obj
	@del DHCtl_p.obj
	@del DHCtl_i.obj
