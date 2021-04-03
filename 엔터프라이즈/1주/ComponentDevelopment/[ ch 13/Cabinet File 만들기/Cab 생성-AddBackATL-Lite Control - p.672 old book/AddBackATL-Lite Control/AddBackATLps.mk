
AddBackATLps.dll: dlldata.obj AddBackATL_p.obj AddBackATL_i.obj
	link /dll /out:AddBackATLps.dll /def:AddBackATLps.def /entry:DllMain dlldata.obj AddBackATL_p.obj AddBackATL_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del AddBackATLps.dll
	@del AddBackATLps.lib
	@del AddBackATLps.exp
	@del dlldata.obj
	@del AddBackATL_p.obj
	@del AddBackATL_i.obj
