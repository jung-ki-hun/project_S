
Companyps.dll: dlldata.obj Company_p.obj Company_i.obj
	link /dll /out:Companyps.dll /def:Companyps.def /entry:DllMain dlldata.obj Company_p.obj Company_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del Companyps.dll
	@del Companyps.lib
	@del Companyps.exp
	@del dlldata.obj
	@del Company_p.obj
	@del Company_i.obj
