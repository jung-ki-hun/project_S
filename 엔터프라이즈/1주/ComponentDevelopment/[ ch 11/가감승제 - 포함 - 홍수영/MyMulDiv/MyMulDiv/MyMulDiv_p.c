

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Thu May 30 15:09:38 2013
 */
/* Compiler settings for .\MyMulDiv.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif // __RPCPROXY_H_VERSION__


#include "MyMulDiv_i.h"

#define TYPE_FORMAT_STRING_SIZE   7                                 
#define PROC_FORMAT_STRING_SIZE   97                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _MyMulDiv_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MyMulDiv_MIDL_TYPE_FORMAT_STRING;

typedef struct _MyMulDiv_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MyMulDiv_MIDL_PROC_FORMAT_STRING;

typedef struct _MyMulDiv_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } MyMulDiv_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const MyMulDiv_MIDL_TYPE_FORMAT_STRING MyMulDiv__MIDL_TypeFormatString;
extern const MyMulDiv_MIDL_PROC_FORMAT_STRING MyMulDiv__MIDL_ProcFormatString;
extern const MyMulDiv_MIDL_EXPR_FORMAT_STRING MyMulDiv__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMyMulDiv_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyMulDiv_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMyAddSub_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMyAddSub_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const MyMulDiv_MIDL_PROC_FORMAT_STRING MyMulDiv__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Add */


	/* Procedure Mul */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0xc ),	/* 12 */
/* 12 */	NdrFcShort( 0x22 ),	/* 34 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val1 */


	/* Parameter val1 */

/* 24 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter val2 */


	/* Parameter val2 */

/* 30 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter result */


	/* Parameter result */

/* 36 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Sub */


	/* Procedure Div */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	NdrFcShort( 0xc ),	/* 12 */
/* 60 */	NdrFcShort( 0x22 ),	/* 34 */
/* 62 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 64 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter val1 */


	/* Parameter val1 */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter val2 */


	/* Parameter val2 */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter result */


	/* Parameter result */

/* 84 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MyMulDiv_MIDL_TYPE_FORMAT_STRING MyMulDiv__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMyMulDiv, ver. 0.0,
   GUID={0x5DD6D3F4,0x0203,0x4071,{0xA0,0xBF,0xC4,0x22,0xFA,0xA8,0x5A,0xB5}} */

#pragma code_seg(".orpc")
static const unsigned short IMyMulDiv_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    48
    };

static const MIDL_STUBLESS_PROXY_INFO IMyMulDiv_ProxyInfo =
    {
    &Object_StubDesc,
    MyMulDiv__MIDL_ProcFormatString.Format,
    &IMyMulDiv_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMyMulDiv_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    MyMulDiv__MIDL_ProcFormatString.Format,
    &IMyMulDiv_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IMyMulDivProxyVtbl = 
{
    &IMyMulDiv_ProxyInfo,
    &IID_IMyMulDiv,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMyMulDiv::Mul */ ,
    (void *) (INT_PTR) -1 /* IMyMulDiv::Div */
};


static const PRPC_STUB_FUNCTION IMyMulDiv_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMyMulDivStubVtbl =
{
    &IID_IMyMulDiv,
    &IMyMulDiv_ServerInfo,
    9,
    &IMyMulDiv_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMyAddSub, ver. 0.0,
   GUID={0xE32D89CF,0x0450,0x4CAF,{0x8E,0xCB,0x1D,0x20,0x48,0xC6,0xB0,0xC8}} */

#pragma code_seg(".orpc")
static const unsigned short IMyAddSub_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    48
    };

static const MIDL_STUBLESS_PROXY_INFO IMyAddSub_ProxyInfo =
    {
    &Object_StubDesc,
    MyMulDiv__MIDL_ProcFormatString.Format,
    &IMyAddSub_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IMyAddSub_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    MyMulDiv__MIDL_ProcFormatString.Format,
    &IMyAddSub_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IMyAddSubProxyVtbl = 
{
    &IMyAddSub_ProxyInfo,
    &IID_IMyAddSub,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *) (INT_PTR) -1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IMyAddSub::Add */ ,
    (void *) (INT_PTR) -1 /* IMyAddSub::Sub */
};


static const PRPC_STUB_FUNCTION IMyAddSub_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IMyAddSubStubVtbl =
{
    &IID_IMyAddSub,
    &IMyAddSub_ServerInfo,
    9,
    &IMyAddSub_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

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
    MyMulDiv__MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x70001f4, /* MIDL Version 7.0.500 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * _MyMulDiv_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IMyAddSubProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMyMulDivProxyVtbl,
    0
};

const CInterfaceStubVtbl * _MyMulDiv_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IMyAddSubStubVtbl,
    ( CInterfaceStubVtbl *) &_IMyMulDivStubVtbl,
    0
};

PCInterfaceName const _MyMulDiv_InterfaceNamesList[] = 
{
    "IMyAddSub",
    "IMyMulDiv",
    0
};

const IID *  _MyMulDiv_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _MyMulDiv_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _MyMulDiv, pIID, n)

int __stdcall _MyMulDiv_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _MyMulDiv, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _MyMulDiv, 2, *pIndex )
    
}

const ExtendedProxyFileInfo MyMulDiv_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _MyMulDiv_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _MyMulDiv_StubVtblList,
    (const PCInterfaceName * ) & _MyMulDiv_InterfaceNamesList,
    (const IID ** ) & _MyMulDiv_BaseIIDList,
    & _MyMulDiv_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

