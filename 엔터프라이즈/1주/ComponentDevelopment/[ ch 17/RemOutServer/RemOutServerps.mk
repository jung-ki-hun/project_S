
RemOutServerps.dll: dlldata.obj RemOutServer_p.obj RemOutServer_i.obj
	link /dll /out:RemOutServerps.dll /def:RemOutServerps.def /entry:DllMain dlldata.obj RemOutServer_p.obj RemOutServer_i.obj kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL $<

clean:
	@del RemOutServerps.dll
	@del RemOutServerps.lib
	@del RemOutServerps.exp
	@del dlldata.obj
	@del RemOutServer_p.obj
	@del RemOutServer_i.obj
