/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jul 12 21:36:30 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 15\DHCtl\DHCtl.idl:
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


#include "DHCtl.h"

#define TYPE_FORMAT_STRING_SIZE   999                               
#define PROC_FORMAT_STRING_SIZE   135                               

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


/* Object interface: IDHCtl, ver. 0.0,
   GUID={0x5EA45DD6,0x6B33,0x4B4E,{0x81,0x0F,0x60,0xEA,0x91,0xCC,0xAD,0x18}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDHCtl_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IDHCtl_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    56
    };

static const MIDL_SERVER_INFO IDHCtl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDHCtl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDHCtl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDHCtl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IDHCtlProxyVtbl = 
{
    &IDHCtl_ProxyInfo,
    &IID_IDHCtl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IDHCtl::get_UrlPath */ ,
    (void *)-1 /* IDHCtl::put_UrlPath */ ,
    (void *)-1 /* IDHCtl::GoToURL */
};


static const PRPC_STUB_FUNCTION IDHCtl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDHCtlStubVtbl =
{
    &IID_IDHCtl,
    &IDHCtl_ServerInfo,
    10,
    &IDHCtl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDHCtlUI, ver. 0.0,
   GUID={0xA7104204,0x03ED,0x4BBB,{0xBA,0xA3,0x38,0x6B,0x8E,0xD7,0x33,0xD3}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDHCtlUI_ServerInfo;

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

static const unsigned short IDHCtlUI_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    78,
    112
    };

static const MIDL_SERVER_INFO IDHCtlUI_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDHCtlUI_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDHCtlUI_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDHCtlUI_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IDHCtlUIProxyVtbl = 
{
    &IDHCtlUI_ProxyInfo,
    &IID_IDHCtlUI,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *)-1 /* IDHCtlUI::OnClick */ ,
    (void *)-1 /* IDHCtlUI::GoToHome */
};


static const PRPC_STUB_FUNCTION IDHCtlUI_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDHCtlUIStubVtbl =
{
    &IID_IDHCtlUI,
    &IDHCtlUI_ServerInfo,
    9,
    &IDHCtlUI_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[2] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
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

	/* Procedure get_UrlPath */

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

/* 16 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */

	/* Return value */

/* 22 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_UrlPath */

/* 28 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x8 ),	/* 8 */
/* 42 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x2,		/* 2 */

	/* Parameter newVal */

/* 44 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 48 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Return value */

/* 50 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 54 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GoToURL */

/* 56 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 58 */	NdrFcLong( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnClick */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 80 */	NdrFcLong( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x6,		/* Oi2 Flags:  clt must size, has return, */
			0x3,		/* 3 */

	/* Parameter pdispBody */

/* 94 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
#ifndef _ALPHA_
/* 96 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 98 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter varColor */

/* 100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 104 */	NdrFcShort( 0x3dc ),	/* Type Offset=988 */

	/* Return value */

/* 106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 108 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GoToHome */

/* 112 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 120 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 126 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
#ifndef _ALPHA_
/* 130 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 132 */	0x8,		/* FC_LONG */
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
/*  4 */	NdrFcShort( 0x1a ),	/* Offset= 26 (30) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0xc ),	/* Offset= 12 (20) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 20 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 22 */	NdrFcShort( 0x8 ),	/* 8 */
/* 24 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (10) */
/* 26 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 28 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 30 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x4 ),	/* 4 */
/* 36 */	NdrFcShort( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (6) */
/* 40 */	
			0x12, 0x0,	/* FC_UP */
/* 42 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (20) */
/* 44 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (40) */
/* 54 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 56 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 66 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 72 */	
			0x12, 0x0,	/* FC_UP */
/* 74 */	NdrFcShort( 0x37e ),	/* Offset= 894 (968) */
/* 76 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 78 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 80 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 82 */	NdrFcShort( 0x2 ),	/* Offset= 2 (84) */
/* 84 */	NdrFcShort( 0x10 ),	/* 16 */
/* 86 */	NdrFcShort( 0x2b ),	/* 43 */
/* 88 */	NdrFcLong( 0x3 ),	/* 3 */
/* 92 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 94 */	NdrFcLong( 0x11 ),	/* 17 */
/* 98 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 100 */	NdrFcLong( 0x2 ),	/* 2 */
/* 104 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 106 */	NdrFcLong( 0x4 ),	/* 4 */
/* 110 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 112 */	NdrFcLong( 0x5 ),	/* 5 */
/* 116 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 118 */	NdrFcLong( 0xb ),	/* 11 */
/* 122 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 124 */	NdrFcLong( 0xa ),	/* 10 */
/* 128 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 130 */	NdrFcLong( 0x6 ),	/* 6 */
/* 134 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (348) */
/* 136 */	NdrFcLong( 0x7 ),	/* 7 */
/* 140 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 142 */	NdrFcLong( 0x8 ),	/* 8 */
/* 146 */	NdrFcShort( 0xffffff96 ),	/* Offset= -106 (40) */
/* 148 */	NdrFcLong( 0xd ),	/* 13 */
/* 152 */	NdrFcShort( 0xca ),	/* Offset= 202 (354) */
/* 154 */	NdrFcLong( 0x9 ),	/* 9 */
/* 158 */	NdrFcShort( 0xffffff98 ),	/* Offset= -104 (54) */
/* 160 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 164 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (372) */
/* 166 */	NdrFcLong( 0x24 ),	/* 36 */
/* 170 */	NdrFcShort( 0x2da ),	/* Offset= 730 (900) */
/* 172 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 176 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (900) */
/* 178 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 182 */	NdrFcShort( 0x2d2 ),	/* Offset= 722 (904) */
/* 184 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 188 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (908) */
/* 190 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 194 */	NdrFcShort( 0x2ce ),	/* Offset= 718 (912) */
/* 196 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 200 */	NdrFcShort( 0x2cc ),	/* Offset= 716 (916) */
/* 202 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 206 */	NdrFcShort( 0x2ca ),	/* Offset= 714 (920) */
/* 208 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 212 */	NdrFcShort( 0x2b8 ),	/* Offset= 696 (908) */
/* 214 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 218 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (912) */
/* 220 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 224 */	NdrFcShort( 0x2bc ),	/* Offset= 700 (924) */
/* 226 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 230 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (920) */
/* 232 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 236 */	NdrFcShort( 0x2b4 ),	/* Offset= 692 (928) */
/* 238 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 242 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (932) */
/* 244 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 248 */	NdrFcShort( 0x2b0 ),	/* Offset= 688 (936) */
/* 250 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 254 */	NdrFcShort( 0x2ae ),	/* Offset= 686 (940) */
/* 256 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 260 */	NdrFcShort( 0x2ac ),	/* Offset= 684 (944) */
/* 262 */	NdrFcLong( 0x10 ),	/* 16 */
/* 266 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 268 */	NdrFcLong( 0x12 ),	/* 18 */
/* 272 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 274 */	NdrFcLong( 0x13 ),	/* 19 */
/* 278 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 280 */	NdrFcLong( 0x16 ),	/* 22 */
/* 284 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 286 */	NdrFcLong( 0x17 ),	/* 23 */
/* 290 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 292 */	NdrFcLong( 0xe ),	/* 14 */
/* 296 */	NdrFcShort( 0x290 ),	/* Offset= 656 (952) */
/* 298 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 302 */	NdrFcShort( 0x296 ),	/* Offset= 662 (964) */
/* 304 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 308 */	NdrFcShort( 0x254 ),	/* Offset= 596 (904) */
/* 310 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 314 */	NdrFcShort( 0x252 ),	/* Offset= 594 (908) */
/* 316 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 320 */	NdrFcShort( 0x250 ),	/* Offset= 592 (912) */
/* 322 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 326 */	NdrFcShort( 0x24a ),	/* Offset= 586 (912) */
/* 328 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 332 */	NdrFcShort( 0x244 ),	/* Offset= 580 (912) */
/* 334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* Offset= 0 (338) */
/* 340 */	NdrFcLong( 0x1 ),	/* 1 */
/* 344 */	NdrFcShort( 0x0 ),	/* Offset= 0 (344) */
/* 346 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (345) */
/* 348 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 352 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 354 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 366 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 368 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 370 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 372 */	
			0x12, 0x0,	/* FC_UP */
/* 374 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (882) */
/* 376 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 378 */	NdrFcShort( 0x18 ),	/* 24 */
/* 380 */	NdrFcShort( 0xa ),	/* 10 */
/* 382 */	NdrFcLong( 0x8 ),	/* 8 */
/* 386 */	NdrFcShort( 0x58 ),	/* Offset= 88 (474) */
/* 388 */	NdrFcLong( 0xd ),	/* 13 */
/* 392 */	NdrFcShort( 0x78 ),	/* Offset= 120 (512) */
/* 394 */	NdrFcLong( 0x9 ),	/* 9 */
/* 398 */	NdrFcShort( 0x94 ),	/* Offset= 148 (546) */
/* 400 */	NdrFcLong( 0xc ),	/* 12 */
/* 404 */	NdrFcShort( 0xbc ),	/* Offset= 188 (592) */
/* 406 */	NdrFcLong( 0x24 ),	/* 36 */
/* 410 */	NdrFcShort( 0x114 ),	/* Offset= 276 (686) */
/* 412 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 416 */	NdrFcShort( 0x130 ),	/* Offset= 304 (720) */
/* 418 */	NdrFcLong( 0x10 ),	/* 16 */
/* 422 */	NdrFcShort( 0x148 ),	/* Offset= 328 (750) */
/* 424 */	NdrFcLong( 0x2 ),	/* 2 */
/* 428 */	NdrFcShort( 0x160 ),	/* Offset= 352 (780) */
/* 430 */	NdrFcLong( 0x3 ),	/* 3 */
/* 434 */	NdrFcShort( 0x178 ),	/* Offset= 376 (810) */
/* 436 */	NdrFcLong( 0x14 ),	/* 20 */
/* 440 */	NdrFcShort( 0x190 ),	/* Offset= 400 (840) */
/* 442 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (441) */
/* 444 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 446 */	NdrFcShort( 0x4 ),	/* 4 */
/* 448 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 454 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 456 */	NdrFcShort( 0x4 ),	/* 4 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x1 ),	/* 1 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	0x12, 0x0,	/* FC_UP */
/* 468 */	NdrFcShort( 0xfffffe40 ),	/* Offset= -448 (20) */
/* 470 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 472 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 474 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 478 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 480 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 482 */	NdrFcShort( 0x4 ),	/* 4 */
/* 484 */	NdrFcShort( 0x4 ),	/* 4 */
/* 486 */	0x11, 0x0,	/* FC_RP */
/* 488 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (444) */
/* 490 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 492 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 494 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 506 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 508 */	NdrFcShort( 0xffffff66 ),	/* Offset= -154 (354) */
/* 510 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 512 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x6 ),	/* Offset= 6 (524) */
/* 520 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 522 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 524 */	
			0x11, 0x0,	/* FC_RP */
/* 526 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (494) */
/* 528 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 540 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 542 */	NdrFcShort( 0xfffffe18 ),	/* Offset= -488 (54) */
/* 544 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 546 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 552 */	NdrFcShort( 0x6 ),	/* Offset= 6 (558) */
/* 554 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 556 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 558 */	
			0x11, 0x0,	/* FC_RP */
/* 560 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (528) */
/* 562 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 564 */	NdrFcShort( 0x4 ),	/* 4 */
/* 566 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 572 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 574 */	NdrFcShort( 0x4 ),	/* 4 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	0x12, 0x0,	/* FC_UP */
/* 586 */	NdrFcShort( 0x17e ),	/* Offset= 382 (968) */
/* 588 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 590 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 592 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x6 ),	/* Offset= 6 (604) */
/* 600 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 602 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 604 */	
			0x11, 0x0,	/* FC_RP */
/* 606 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (562) */
/* 608 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 610 */	NdrFcLong( 0x2f ),	/* 47 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 624 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 626 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 630 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 632 */	NdrFcShort( 0x4 ),	/* 4 */
/* 634 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 636 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 638 */	NdrFcShort( 0x10 ),	/* 16 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0xa ),	/* Offset= 10 (652) */
/* 644 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 646 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 648 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (608) */
/* 650 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 652 */	
			0x12, 0x0,	/* FC_UP */
/* 654 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (626) */
/* 656 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 658 */	NdrFcShort( 0x4 ),	/* 4 */
/* 660 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 666 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 668 */	NdrFcShort( 0x4 ),	/* 4 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	0x12, 0x0,	/* FC_UP */
/* 680 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (636) */
/* 682 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 684 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 686 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 692 */	NdrFcShort( 0x6 ),	/* Offset= 6 (698) */
/* 694 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 696 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 698 */	
			0x11, 0x0,	/* FC_RP */
/* 700 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (656) */
/* 702 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 706 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 708 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 712 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 714 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 716 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (702) */
			0x5b,		/* FC_END */
/* 720 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 722 */	NdrFcShort( 0x18 ),	/* 24 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0xa ),	/* Offset= 10 (736) */
/* 728 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 730 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 732 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (708) */
/* 734 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 736 */	
			0x11, 0x0,	/* FC_RP */
/* 738 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (494) */
/* 740 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 744 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 750 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 756 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 758 */	NdrFcShort( 0x4 ),	/* 4 */
/* 760 */	NdrFcShort( 0x4 ),	/* 4 */
/* 762 */	0x12, 0x0,	/* FC_UP */
/* 764 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (740) */
/* 766 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 768 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 770 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 772 */	NdrFcShort( 0x2 ),	/* 2 */
/* 774 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 780 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 784 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 786 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	NdrFcShort( 0x4 ),	/* 4 */
/* 792 */	0x12, 0x0,	/* FC_UP */
/* 794 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (770) */
/* 796 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 798 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 800 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 810 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 814 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 816 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 820 */	NdrFcShort( 0x4 ),	/* 4 */
/* 822 */	0x12, 0x0,	/* FC_UP */
/* 824 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (800) */
/* 826 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 828 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 830 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 834 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 840 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 844 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 846 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 848 */	NdrFcShort( 0x4 ),	/* 4 */
/* 850 */	NdrFcShort( 0x4 ),	/* 4 */
/* 852 */	0x12, 0x0,	/* FC_UP */
/* 854 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (830) */
/* 856 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 858 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 860 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 866 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 868 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 874 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 876 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 878 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (860) */
/* 880 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 882 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 884 */	NdrFcShort( 0x28 ),	/* 40 */
/* 886 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (868) */
/* 888 */	NdrFcShort( 0x0 ),	/* Offset= 0 (888) */
/* 890 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 892 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 894 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 896 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdf7 ),	/* Offset= -521 (376) */
			0x5b,		/* FC_END */
/* 900 */	
			0x12, 0x0,	/* FC_UP */
/* 902 */	NdrFcShort( 0xfffffef6 ),	/* Offset= -266 (636) */
/* 904 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 906 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 908 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 910 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 912 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 914 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 916 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 918 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 920 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 922 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 924 */	
			0x12, 0x0,	/* FC_UP */
/* 926 */	NdrFcShort( 0xfffffdbe ),	/* Offset= -578 (348) */
/* 928 */	
			0x12, 0x10,	/* FC_UP */
/* 930 */	NdrFcShort( 0xfffffc86 ),	/* Offset= -890 (40) */
/* 932 */	
			0x12, 0x10,	/* FC_UP */
/* 934 */	NdrFcShort( 0xfffffdbc ),	/* Offset= -580 (354) */
/* 936 */	
			0x12, 0x10,	/* FC_UP */
/* 938 */	NdrFcShort( 0xfffffc8c ),	/* Offset= -884 (54) */
/* 940 */	
			0x12, 0x10,	/* FC_UP */
/* 942 */	NdrFcShort( 0xfffffdc6 ),	/* Offset= -570 (372) */
/* 944 */	
			0x12, 0x10,	/* FC_UP */
/* 946 */	NdrFcShort( 0x2 ),	/* Offset= 2 (948) */
/* 948 */	
			0x12, 0x0,	/* FC_UP */
/* 950 */	NdrFcShort( 0xfffffc4a ),	/* Offset= -950 (0) */
/* 952 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 954 */	NdrFcShort( 0x10 ),	/* 16 */
/* 956 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 958 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 960 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 962 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 964 */	
			0x12, 0x0,	/* FC_UP */
/* 966 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (952) */
/* 968 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 970 */	NdrFcShort( 0x20 ),	/* 32 */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x0 ),	/* Offset= 0 (974) */
/* 976 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 978 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 980 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 982 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 984 */	NdrFcShort( 0xfffffc74 ),	/* Offset= -908 (76) */
/* 986 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 988 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0xfffffc64 ),	/* Offset= -924 (72) */

			0x0
        }
    };

const CInterfaceProxyVtbl * _DHCtl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDHCtlUIProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDHCtlProxyVtbl,
    0
};

const CInterfaceStubVtbl * _DHCtl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDHCtlUIStubVtbl,
    ( CInterfaceStubVtbl *) &_IDHCtlStubVtbl,
    0
};

PCInterfaceName const _DHCtl_InterfaceNamesList[] = 
{
    "IDHCtlUI",
    "IDHCtl",
    0
};

const IID *  _DHCtl_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _DHCtl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DHCtl, pIID, n)

int __stdcall _DHCtl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _DHCtl, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _DHCtl, 2, *pIndex )
    
}

const ExtendedProxyFileInfo DHCtl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DHCtl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DHCtl_StubVtblList,
    (const PCInterfaceName * ) & _DHCtl_InterfaceNamesList,
    (const IID ** ) & _DHCtl_BaseIIDList,
    & _DHCtl_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
