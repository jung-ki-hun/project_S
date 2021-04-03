
RemInServerps.dll: dlldata.obj RemInServer_p.obj RemInServer_i.obj
	link /dll /out:RemInServerps.dll /def:RemInServerps.def /entry:DllMain dlldata.obj RemInServer_p.obj RemInServer_i.obj kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib 

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL $<

clean:
	@del RemInServerps.dll
	@del RemInServerps.lib
	@del RemInServerps.exp
	@del dlldata.obj
	@del RemInServer_p.obj
	@del RemInServer_i.obj
