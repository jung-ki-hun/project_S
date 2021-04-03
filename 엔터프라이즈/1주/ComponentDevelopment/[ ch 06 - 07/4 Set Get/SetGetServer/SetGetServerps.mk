
SetGetServerps.dll: dlldata.obj SetGetServer_p.obj SetGetServer_i.obj
	link /dll /out:SetGetServerps.dll /def:SetGetServerps.def /entry:DllMain dlldata.obj SetGetServer_p.obj SetGetServer_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del SetGetServerps.dll
	@del SetGetServerps.lib
	@del SetGetServerps.exp
	@del dlldata.obj
	@del SetGetServer_p.obj
	@del SetGetServer_i.obj
