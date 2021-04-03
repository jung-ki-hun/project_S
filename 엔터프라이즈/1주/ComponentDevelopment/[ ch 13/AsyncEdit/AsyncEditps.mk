
AsyncEditps.dll: dlldata.obj AsyncEdit_p.obj AsyncEdit_i.obj
	link /dll /out:AsyncEditps.dll /def:AsyncEditps.def /entry:DllMain dlldata.obj AsyncEdit_p.obj AsyncEdit_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AsyncEditps.dll
	@del AsyncEditps.lib
	@del AsyncEditps.exp
	@del dlldata.obj
	@del AsyncEdit_p.obj
	@del AsyncEdit_i.obj
