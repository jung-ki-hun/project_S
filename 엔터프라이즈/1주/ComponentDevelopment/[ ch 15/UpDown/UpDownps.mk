
UpDownps.dll: dlldata.obj UpDown_p.obj UpDown_i.obj
	link /dll /out:UpDownps.dll /def:UpDownps.def /entry:DllMain dlldata.obj UpDown_p.obj UpDown_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del UpDownps.dll
	@del UpDownps.lib
	@del UpDownps.exp
	@del dlldata.obj
	@del UpDown_p.obj
	@del UpDown_i.obj
