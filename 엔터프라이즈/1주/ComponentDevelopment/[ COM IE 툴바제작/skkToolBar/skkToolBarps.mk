
skkToolBarps.dll: dlldata.obj skkToolBar_p.obj skkToolBar_i.obj
	link /dll /out:skkToolBarps.dll /def:skkToolBarps.def /entry:DllMain dlldata.obj skkToolBar_p.obj skkToolBar_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del skkToolBarps.dll
	@del skkToolBarps.lib
	@del skkToolBarps.exp
	@del dlldata.obj
	@del skkToolBar_p.obj
	@del skkToolBar_i.obj
