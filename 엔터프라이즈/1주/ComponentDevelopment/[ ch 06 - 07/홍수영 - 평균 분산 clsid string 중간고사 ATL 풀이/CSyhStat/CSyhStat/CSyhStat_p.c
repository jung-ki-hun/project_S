

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Thu May 02 16:13:44 2013
 */
/* Compiler settings for .\CSyhStat.idl:
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


#include "CSyhStat_i.h"

#define TYPE_FORMAT_STRING_SIZE   31                                
#define PROC_FORMAT_STRING_SIZE   121                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _CSyhStat_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } CSyhStat_MIDL_TYPE_FORMAT_STRING;

typedef struct _CSyhStat_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } CSyhStat_MIDL_PROC_FORMAT_STRING;

typedef struct _CSyhStat_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } CSyhStat_MIDL_EXPR_FORMAT_STRING;


static RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const CSyhStat_MIDL_TYPE_FORMAT_STRING CSyhStat__MIDL_TypeFormatString;
extern const CSyhStat_MIDL_PROC_FORMAT_STRING CSyhStat__MIDL_ProcFormatString;
extern const CSyhStat_MIDL_EXPR_FORMAT_STRING CSyhStat__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStat_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IStat_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IClsid_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IClsid_ProxyInfo;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need a Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const CSyhStat_MIDL_PROC_FORMAT_STRING CSyhStat__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure mean */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 10 */	NdrFcShort( 0x48 ),	/* 72 */
/* 12 */	NdrFcShort( 0x2c ),	/* 44 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dataInput */

/* 24 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter meanResult */

/* 30 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 32 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 34 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure variance */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x4 ),	/* 4 */
/* 50 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 52 */	NdrFcShort( 0x48 ),	/* 72 */
/* 54 */	NdrFcShort( 0x2c ),	/* 44 */
/* 56 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 58 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dataInput */

/* 66 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter varianceResult */

/* 72 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 76 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getclsid */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x3 ),	/* 3 */
/* 92 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x36 ),	/* 54 */
/* 98 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 100 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter message */

/* 108 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 110 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 112 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const CSyhStat_MIDL_TYPE_FORMAT_STRING CSyhStat__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/*  4 */	NdrFcShort( 0x28 ),	/* 40 */
/*  6 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/*  8 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 10 */	NdrFcShort( 0x28 ),	/* 40 */
/* 12 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 14 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (2) */
/* 16 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 18 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 20 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 28 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_CSyhStat_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IStat, ver. 0.0,
   GUID={0x102D7E28,0xD619,0x4A00,{0x90,0xD8,0xB8,0x97,0xC9,0x66,0x33,0xB6}} */

#pragma code_seg(".orpc")
static const unsigned short IStat_FormatStringOffsetTable[] =
    {
    0,
    42
    };

static const MIDL_STUBLESS_PROXY_INFO IStat_ProxyInfo =
    {
    &Object_StubDesc,
    CSyhStat__MIDL_ProcFormatString.Format,
    &IStat_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IStat_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    CSyhStat__MIDL_ProcFormatString.Format,
    &IStat_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IStatProxyVtbl = 
{
    &IStat_ProxyInfo,
    &IID_IStat,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IStat::mean */ ,
    (void *) (INT_PTR) -1 /* IStat::variance */
};

const CInterfaceStubVtbl _IStatStubVtbl =
{
    &IID_IStat,
    &IStat_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IClsid, ver. 0.0,
   GUID={0x96C57569,0xC391,0x4C00,{0x82,0x32,0xF9,0xA9,0xDE,0x07,0x2C,0x72}} */

#pragma code_seg(".orpc")
static const unsigned short IClsid_FormatStringOffsetTable[] =
    {
    84
    };

static const MIDL_STUBLESS_PROXY_INFO IClsid_ProxyInfo =
    {
    &Object_StubDesc,
    CSyhStat__MIDL_ProcFormatString.Format,
    &IClsid_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IClsid_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    CSyhStat__MIDL_ProcFormatString.Format,
    &IClsid_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IClsidProxyVtbl = 
{
    &IClsid_ProxyInfo,
    &IID_IClsid,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IClsid::getclsid */
};

const CInterfaceStubVtbl _IClsidStubVtbl =
{
    &IID_IClsid,
    &IClsid_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
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
    CSyhStat__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * _CSyhStat_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IStatProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IClsidProxyVtbl,
    0
};

const CInterfaceStubVtbl * _CSyhStat_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IStatStubVtbl,
    ( CInterfaceStubVtbl *) &_IClsidStubVtbl,
    0
};

PCInterfaceName const _CSyhStat_InterfaceNamesList[] = 
{
    "IStat",
    "IClsid",
    0
};


#define _CSyhStat_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _CSyhStat, pIID, n)

int __stdcall _CSyhStat_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _CSyhStat, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _CSyhStat, 2, *pIndex )
    
}

const ExtendedProxyFileInfo CSyhStat_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _CSyhStat_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _CSyhStat_StubVtblList,
    (const PCInterfaceName * ) & _CSyhStat_InterfaceNamesList,
    0, // no delegation
    & _CSyhStat_IID_Lookup, 
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

