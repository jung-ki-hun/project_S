
Shapeps.dll: dlldata.obj Shape_p.obj Shape_i.obj
	link /dll /out:Shapeps.dll /def:Shapeps.def /entry:DllMain dlldata.obj Shape_p.obj Shape_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Shapeps.dll
	@del Shapeps.lib
	@del Shapeps.exp
	@del dlldata.obj
	@del Shape_p.obj
	@del Shape_i.obj
