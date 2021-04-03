
AddBackps.dll: dlldata.obj AddBack_p.obj AddBack_i.obj
	link /dll /out:AddBackps.dll /def:AddBackps.def /entry:DllMain dlldata.obj AddBack_p.obj AddBack_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AddBackps.dll
	@del AddBackps.lib
	@del AddBackps.exp
	@del dlldata.obj
	@del AddBack_p.obj
	@del AddBack_i.obj
