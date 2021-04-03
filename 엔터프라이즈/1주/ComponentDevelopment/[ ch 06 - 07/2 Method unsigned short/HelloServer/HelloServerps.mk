
HelloServerps.dll: dlldata.obj HelloServer_p.obj HelloServer_i.obj
	link /dll /out:HelloServerps.dll /def:HelloServerps.def /entry:DllMain dlldata.obj HelloServer_p.obj HelloServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del HelloServerps.dll
	@del HelloServerps.lib
	@del HelloServerps.exp
	@del dlldata.obj
	@del HelloServer_p.obj
	@del HelloServer_i.obj
