/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jun 04 08:58:52 2008
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 12\Company\Company.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "Company.h"

#define TYPE_FORMAT_STRING_SIZE   997                               
#define PROC_FORMAT_STRING_SIZE   203                               

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICompany, ver. 0.0,
   GUID={0xECA4926A,0xD50F,0x4988,{0xB4,0x38,0x92,0xCE,0x96,0x20,0xE0,0x4F}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ICompany_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ICompany_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_SERVER_INFO ICompany_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ICompany_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ICompany_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ICompany_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _ICompanyProxyVtbl = 
{
    &ICompany_ProxyInfo,
    &IID_ICompany,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* ICompany::get_Employees */
};


static const PRPC_STUB_FUNCTION ICompany_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _ICompanyStubVtbl =
{
    &IID_ICompany,
    &ICompany_ServerInfo,
    8,
    &ICompany_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEmployees, ver. 0.0,
   GUID={0xA9469C63,0x95F4,0x4F5A,{0x97,0x23,0x3F,0xAA,0x88,0x66,0xBB,0x1B}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEmployees_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IEmployees_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    28,
    56,
    90
    };

static const MIDL_SERVER_INFO IEmployees_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEmployees_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEmployees_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEmployees_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IEmployeesProxyVtbl = 
{
    &IEmployees_ProxyInfo,
    &IID_IEmployees,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IEmployees::get_Count */ ,
    (void *)-1 /* IEmployees::get_Item */ ,
    (void *)-1 /* IEmployees::get__NewEnum */
};


static const PRPC_STUB_FUNCTION IEmployees_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEmployeesStubVtbl =
{
    &IID_IEmployees,
    &IEmployees_ServerInfo,
    10,
    &IEmployees_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEmployee, ver. 0.0,
   GUID={0x1E5EDAC6,0x7B4C,0x4CB7,{0xA6,0xAC,0x79,0x39,0x3C,0xB4,0x66,0xC6}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEmployee_ServerInfo;

#pragma code_seg(".orpc")
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[2];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x50100a4, /* MIDL Version 5.1.164 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    1,  /* Flags */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const unsigned short IEmployee_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    118,
    146,
    174
    };

static const MIDL_SERVER_INFO IEmployee_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEmployee_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEmployee_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEmployee_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IEmployeeProxyVtbl = 
{
    &IEmployee_ProxyInfo,
    &IID_IEmployee,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IEmployee::get_Name */ ,
    (void *)-1 /* IEmployee::get_Address */ ,
    (void *)-1 /* IEmployee::get_Telephone */
};


static const PRPC_STUB_FUNCTION IEmployee_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IEmployeeStubVtbl =
{
    &IID_IEmployee,
    &IEmployee_ServerInfo,
    10,
    &IEmployee_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[2] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            },
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, [wire_marshal] or [user_marshal] attribute, more than 32 methods in the interface.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will die there with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_Employees */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 16 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x3c4 ),	/* Type Offset=964 */

	/* Return value */

/* 22 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */

/* 28 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x10 ),	/* 16 */
/* 42 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 44 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 50 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 56 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 58 */	NdrFcLong( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 66 */	NdrFcShort( 0x8 ),	/* 8 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x3,		/* 3 */

	/* Parameter index */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 78 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 82 */	NdrFcShort( 0x3c4 ),	/* Type Offset=964 */

	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 90 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
#ifndef _ALPHA_
/* 108 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 110 */	NdrFcShort( 0x3d2 ),	/* Type Offset=978 */

	/* Return value */

/* 112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 126 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 132 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 134 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 136 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 138 */	NdrFcShort( 0x3da ),	/* Type Offset=986 */

	/* Return value */

/* 140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Address */

/* 146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 160 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 162 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 166 */	NdrFcShort( 0x3da ),	/* Type Offset=986 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Telephone */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 182 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 190 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 192 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 194 */	NdrFcShort( 0x3da ),	/* Type Offset=986 */

	/* Return value */

/* 196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 198 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x3c0 ),	/* Offset= 960 (964) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0x3a8 ),	/* Offset= 936 (944) */
/* 10 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 12 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 14 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	NdrFcShort( 0x10 ),	/* 16 */
/* 20 */	NdrFcShort( 0x2b ),	/* 43 */
/* 22 */	NdrFcLong( 0x3 ),	/* 3 */
/* 26 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 28 */	NdrFcLong( 0x11 ),	/* 17 */
/* 32 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 34 */	NdrFcLong( 0x2 ),	/* 2 */
/* 38 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 40 */	NdrFcLong( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 46 */	NdrFcLong( 0x5 ),	/* 5 */
/* 50 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 52 */	NdrFcLong( 0xb ),	/* 11 */
/* 56 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 58 */	NdrFcLong( 0xa ),	/* 10 */
/* 62 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 64 */	NdrFcLong( 0x6 ),	/* 6 */
/* 68 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (282) */
/* 70 */	NdrFcLong( 0x7 ),	/* 7 */
/* 74 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 76 */	NdrFcLong( 0x8 ),	/* 8 */
/* 80 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (288) */
/* 82 */	NdrFcLong( 0xd ),	/* 13 */
/* 86 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (312) */
/* 88 */	NdrFcLong( 0x9 ),	/* 9 */
/* 92 */	NdrFcShort( 0xee ),	/* Offset= 238 (330) */
/* 94 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 98 */	NdrFcShort( 0xfa ),	/* Offset= 250 (348) */
/* 100 */	NdrFcLong( 0x24 ),	/* 36 */
/* 104 */	NdrFcShort( 0x304 ),	/* Offset= 772 (876) */
/* 106 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 110 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (876) */
/* 112 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 116 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (880) */
/* 118 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 122 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (884) */
/* 124 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 128 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (888) */
/* 130 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 134 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (892) */
/* 136 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 140 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (896) */
/* 142 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 146 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (884) */
/* 148 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 152 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (888) */
/* 154 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 158 */	NdrFcShort( 0x2e6 ),	/* Offset= 742 (900) */
/* 160 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 164 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (896) */
/* 166 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 170 */	NdrFcShort( 0x2de ),	/* Offset= 734 (904) */
/* 172 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 176 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (908) */
/* 178 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 182 */	NdrFcShort( 0x2da ),	/* Offset= 730 (912) */
/* 184 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 188 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (916) */
/* 190 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 194 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (920) */
/* 196 */	NdrFcLong( 0x10 ),	/* 16 */
/* 200 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 202 */	NdrFcLong( 0x12 ),	/* 18 */
/* 206 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 208 */	NdrFcLong( 0x13 ),	/* 19 */
/* 212 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 214 */	NdrFcLong( 0x16 ),	/* 22 */
/* 218 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 220 */	NdrFcLong( 0x17 ),	/* 23 */
/* 224 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 226 */	NdrFcLong( 0xe ),	/* 14 */
/* 230 */	NdrFcShort( 0x2ba ),	/* Offset= 698 (928) */
/* 232 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 236 */	NdrFcShort( 0x2c0 ),	/* Offset= 704 (940) */
/* 238 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 242 */	NdrFcShort( 0x27e ),	/* Offset= 638 (880) */
/* 244 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 248 */	NdrFcShort( 0x27c ),	/* Offset= 636 (884) */
/* 250 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 254 */	NdrFcShort( 0x27a ),	/* Offset= 634 (888) */
/* 256 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 260 */	NdrFcShort( 0x274 ),	/* Offset= 628 (888) */
/* 262 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 266 */	NdrFcShort( 0x26e ),	/* Offset= 622 (888) */
/* 268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* Offset= 0 (272) */
/* 274 */	NdrFcLong( 0x1 ),	/* 1 */
/* 278 */	NdrFcShort( 0x0 ),	/* Offset= 0 (278) */
/* 280 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (279) */
/* 282 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 286 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 288 */	
			0x13, 0x0,	/* FC_OP */
/* 290 */	NdrFcShort( 0xc ),	/* Offset= 12 (302) */
/* 292 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 294 */	NdrFcShort( 0x2 ),	/* 2 */
/* 296 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 298 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 300 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 302 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 306 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (292) */
/* 308 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 310 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 312 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 324 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 326 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 328 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 330 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 332 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 342 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 344 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 346 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 348 */	
			0x13, 0x0,	/* FC_OP */
/* 350 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (858) */
/* 352 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 354 */	NdrFcShort( 0x18 ),	/* 24 */
/* 356 */	NdrFcShort( 0xa ),	/* 10 */
/* 358 */	NdrFcLong( 0x8 ),	/* 8 */
/* 362 */	NdrFcShort( 0x58 ),	/* Offset= 88 (450) */
/* 364 */	NdrFcLong( 0xd ),	/* 13 */
/* 368 */	NdrFcShort( 0x78 ),	/* Offset= 120 (488) */
/* 370 */	NdrFcLong( 0x9 ),	/* 9 */
/* 374 */	NdrFcShort( 0x94 ),	/* Offset= 148 (522) */
/* 376 */	NdrFcLong( 0xc ),	/* 12 */
/* 380 */	NdrFcShort( 0xbc ),	/* Offset= 188 (568) */
/* 382 */	NdrFcLong( 0x24 ),	/* 36 */
/* 386 */	NdrFcShort( 0x114 ),	/* Offset= 276 (662) */
/* 388 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 392 */	NdrFcShort( 0x130 ),	/* Offset= 304 (696) */
/* 394 */	NdrFcLong( 0x10 ),	/* 16 */
/* 398 */	NdrFcShort( 0x148 ),	/* Offset= 328 (726) */
/* 400 */	NdrFcLong( 0x2 ),	/* 2 */
/* 404 */	NdrFcShort( 0x160 ),	/* Offset= 352 (756) */
/* 406 */	NdrFcLong( 0x3 ),	/* 3 */
/* 410 */	NdrFcShort( 0x178 ),	/* Offset= 376 (786) */
/* 412 */	NdrFcLong( 0x14 ),	/* 20 */
/* 416 */	NdrFcShort( 0x190 ),	/* Offset= 400 (816) */
/* 418 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (417) */
/* 420 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 422 */	NdrFcShort( 0x4 ),	/* 4 */
/* 424 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 430 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 432 */	NdrFcShort( 0x4 ),	/* 4 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0x1 ),	/* 1 */
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 442 */	0x13, 0x0,	/* FC_OP */
/* 444 */	NdrFcShort( 0xffffff72 ),	/* Offset= -142 (302) */
/* 446 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 450 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 454 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 456 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 458 */	NdrFcShort( 0x4 ),	/* 4 */
/* 460 */	NdrFcShort( 0x4 ),	/* 4 */
/* 462 */	0x11, 0x0,	/* FC_RP */
/* 464 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (420) */
/* 466 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 468 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 470 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 482 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 484 */	NdrFcShort( 0xffffff54 ),	/* Offset= -172 (312) */
/* 486 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 488 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x6 ),	/* Offset= 6 (500) */
/* 496 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 498 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 500 */	
			0x11, 0x0,	/* FC_RP */
/* 502 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (470) */
/* 504 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 516 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 518 */	NdrFcShort( 0xffffff44 ),	/* Offset= -188 (330) */
/* 520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 522 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x6 ),	/* Offset= 6 (534) */
/* 530 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 532 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 534 */	
			0x11, 0x0,	/* FC_RP */
/* 536 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (504) */
/* 538 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 540 */	NdrFcShort( 0x4 ),	/* 4 */
/* 542 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 548 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 550 */	NdrFcShort( 0x4 ),	/* 4 */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	0x13, 0x0,	/* FC_OP */
/* 562 */	NdrFcShort( 0x17e ),	/* Offset= 382 (944) */
/* 564 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 566 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 568 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x6 ),	/* Offset= 6 (580) */
/* 576 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 578 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 580 */	
			0x11, 0x0,	/* FC_RP */
/* 582 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (538) */
/* 584 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 586 */	NdrFcLong( 0x2f ),	/* 47 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 596 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 598 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 600 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 602 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 604 */	NdrFcShort( 0x1 ),	/* 1 */
/* 606 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 608 */	NdrFcShort( 0x4 ),	/* 4 */
/* 610 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 612 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 614 */	NdrFcShort( 0x10 ),	/* 16 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0xa ),	/* Offset= 10 (628) */
/* 620 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 622 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 624 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (584) */
/* 626 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 628 */	
			0x13, 0x0,	/* FC_OP */
/* 630 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (602) */
/* 632 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 634 */	NdrFcShort( 0x4 ),	/* 4 */
/* 636 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 642 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 644 */	NdrFcShort( 0x4 ),	/* 4 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	0x13, 0x0,	/* FC_OP */
/* 656 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (612) */
/* 658 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 660 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 662 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x6 ),	/* Offset= 6 (674) */
/* 670 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 672 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 674 */	
			0x11, 0x0,	/* FC_RP */
/* 676 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (632) */
/* 678 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 682 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 684 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 686 */	NdrFcShort( 0x10 ),	/* 16 */
/* 688 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 690 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 692 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (678) */
			0x5b,		/* FC_END */
/* 696 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 698 */	NdrFcShort( 0x18 ),	/* 24 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0xa ),	/* Offset= 10 (712) */
/* 704 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 706 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 708 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (684) */
/* 710 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 712 */	
			0x11, 0x0,	/* FC_RP */
/* 714 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (470) */
/* 716 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 718 */	NdrFcShort( 0x1 ),	/* 1 */
/* 720 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 726 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 730 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 732 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 734 */	NdrFcShort( 0x4 ),	/* 4 */
/* 736 */	NdrFcShort( 0x4 ),	/* 4 */
/* 738 */	0x13, 0x0,	/* FC_OP */
/* 740 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (716) */
/* 742 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 744 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 746 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 748 */	NdrFcShort( 0x2 ),	/* 2 */
/* 750 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 756 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 760 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 762 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 764 */	NdrFcShort( 0x4 ),	/* 4 */
/* 766 */	NdrFcShort( 0x4 ),	/* 4 */
/* 768 */	0x13, 0x0,	/* FC_OP */
/* 770 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (746) */
/* 772 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 774 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 776 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 778 */	NdrFcShort( 0x4 ),	/* 4 */
/* 780 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 786 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 792 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 794 */	NdrFcShort( 0x4 ),	/* 4 */
/* 796 */	NdrFcShort( 0x4 ),	/* 4 */
/* 798 */	0x13, 0x0,	/* FC_OP */
/* 800 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (776) */
/* 802 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 804 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 806 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 810 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 816 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 820 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 822 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	0x13, 0x0,	/* FC_OP */
/* 830 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (806) */
/* 832 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 834 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 836 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 838 */	NdrFcShort( 0x8 ),	/* 8 */
/* 840 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 844 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 850 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 852 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 854 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (836) */
/* 856 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 858 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 860 */	NdrFcShort( 0x28 ),	/* 40 */
/* 862 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (844) */
/* 864 */	NdrFcShort( 0x0 ),	/* Offset= 0 (864) */
/* 866 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 868 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 870 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 872 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdf7 ),	/* Offset= -521 (352) */
			0x5b,		/* FC_END */
/* 876 */	
			0x13, 0x0,	/* FC_OP */
/* 878 */	NdrFcShort( 0xfffffef6 ),	/* Offset= -266 (612) */
/* 880 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 882 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 884 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 886 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 888 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 890 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 894 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 896 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 898 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 900 */	
			0x13, 0x0,	/* FC_OP */
/* 902 */	NdrFcShort( 0xfffffd94 ),	/* Offset= -620 (282) */
/* 904 */	
			0x13, 0x10,	/* FC_OP */
/* 906 */	NdrFcShort( 0xfffffd96 ),	/* Offset= -618 (288) */
/* 908 */	
			0x13, 0x10,	/* FC_OP */
/* 910 */	NdrFcShort( 0xfffffdaa ),	/* Offset= -598 (312) */
/* 912 */	
			0x13, 0x10,	/* FC_OP */
/* 914 */	NdrFcShort( 0xfffffdb8 ),	/* Offset= -584 (330) */
/* 916 */	
			0x13, 0x10,	/* FC_OP */
/* 918 */	NdrFcShort( 0xfffffdc6 ),	/* Offset= -570 (348) */
/* 920 */	
			0x13, 0x10,	/* FC_OP */
/* 922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (924) */
/* 924 */	
			0x13, 0x0,	/* FC_OP */
/* 926 */	NdrFcShort( 0xfffffc62 ),	/* Offset= -926 (0) */
/* 928 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 930 */	NdrFcShort( 0x10 ),	/* 16 */
/* 932 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 934 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 936 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 938 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 940 */	
			0x13, 0x0,	/* FC_OP */
/* 942 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (928) */
/* 944 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 946 */	NdrFcShort( 0x20 ),	/* 32 */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* Offset= 0 (950) */
/* 952 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 954 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 956 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 958 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 960 */	NdrFcShort( 0xfffffc4a ),	/* Offset= -950 (10) */
/* 962 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 964 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x10 ),	/* 16 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0xfffffc3a ),	/* Offset= -966 (6) */
/* 974 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 976 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 978 */	
			0x11, 0x10,	/* FC_RP */
/* 980 */	NdrFcShort( 0xfffffd64 ),	/* Offset= -668 (312) */
/* 982 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 984 */	NdrFcShort( 0x2 ),	/* Offset= 2 (986) */
/* 986 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 990 */	NdrFcShort( 0x4 ),	/* 4 */
/* 992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 994 */	NdrFcShort( 0xfffffd3e ),	/* Offset= -706 (288) */

			0x0
        }
    };

const CInterfaceProxyVtbl * _Company_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IEmployeesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ICompanyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEmployeeProxyVtbl,
    0
};

const CInterfaceStubVtbl * _Company_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IEmployeesStubVtbl,
    ( CInterfaceStubVtbl *) &_ICompanyStubVtbl,
    ( CInterfaceStubVtbl *) &_IEmployeeStubVtbl,
    0
};

PCInterfaceName const _Company_InterfaceNamesList[] = 
{
    "IEmployees",
    "ICompany",
    "IEmployee",
    0
};

const IID *  _Company_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _Company_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Company, pIID, n)

int __stdcall _Company_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Company, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _Company, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Company, 3, *pIndex )
    
}

const ExtendedProxyFileInfo Company_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Company_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Company_StubVtblList,
    (const PCInterfaceName * ) & _Company_InterfaceNamesList,
    (const IID ** ) & _Company_BaseIIDList,
    & _Company_IID_Lookup, 
    3,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
