

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Fri Mar 19 02:18:48 2004
 */
/* Compiler settings for _DHTML.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IDHTMLCtlUI,0xCC72F349,0xA155,0x4E77,0xBA,0xE6,0x29,0xEE,0xB8,0x35,0x5A,0xC0);


MIDL_DEFINE_GUID(IID, IID_IDHTMLCtl,0x301363E5,0x1A3D,0x45E5,0x9A,0xC5,0x0D,0x85,0x96,0xAF,0x5F,0x86);


MIDL_DEFINE_GUID(IID, LIBID_DHTML,0xE4FA2653,0xAB9D,0x446B,0xA0,0x87,0x63,0xB0,0x00,0x9D,0x0A,0xFE);


MIDL_DEFINE_GUID(CLSID, CLSID_CDHTMLCtlUI,0x542F7C7E,0x4296,0x4389,0x9A,0x23,0x33,0x19,0x62,0x46,0xAC,0x1F);


MIDL_DEFINE_GUID(CLSID, CLSID_CDHTMLCtl,0x73FED92B,0xDA89,0x4C5D,0xA9,0x9E,0x9C,0x15,0xE9,0xD4,0x80,0xE9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

