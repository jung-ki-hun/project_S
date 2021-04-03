
MyExploerToolBarps.dll: dlldata.obj MyExploerToolBar_p.obj MyExploerToolBar_i.obj
	link /dll /out:MyExploerToolBarps.dll /def:MyExploerToolBarps.def /entry:DllMain dlldata.obj MyExploerToolBar_p.obj MyExploerToolBar_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del MyExploerToolBarps.dll
	@del MyExploerToolBarps.lib
	@del MyExploerToolBarps.exp
	@del dlldata.obj
	@del MyExploerToolBar_p.obj
	@del MyExploerToolBar_i.obj
