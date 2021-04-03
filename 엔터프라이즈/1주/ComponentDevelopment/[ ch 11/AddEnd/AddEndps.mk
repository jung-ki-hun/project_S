
AddEndps.dll: dlldata.obj AddEnd_p.obj AddEnd_i.obj
	link /dll /out:AddEndps.dll /def:AddEndps.def /entry:DllMain dlldata.obj AddEnd_p.obj AddEnd_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AddEndps.dll
	@del AddEndps.lib
	@del AddEndps.exp
	@del dlldata.obj
	@del AddEnd_p.obj
	@del AddEnd_i.obj
