

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, IID_IStat,0x102D7E28,0xD619,0x4A00,0x90,0xD8,0xB8,0x97,0xC9,0x66,0x33,0xB6);


MIDL_DEFINE_GUID(IID, IID_IClsid,0x96C57569,0xC391,0x4C00,0x82,0x32,0xF9,0xA9,0xDE,0x07,0x2C,0x72);


MIDL_DEFINE_GUID(IID, LIBID_CSyhStatLib,0x8044255C,0x7397,0x430F,0xBB,0xC9,0x92,0xFB,0xE7,0x1E,0x8B,0xC3);


MIDL_DEFINE_GUID(CLSID, CLSID_Stat,0x2B2740C6,0x2614,0x4C43,0xB7,0xF1,0x60,0x01,0x20,0x87,0x10,0x44);


MIDL_DEFINE_GUID(CLSID, CLSID_Clsid,0x11B7F1F6,0x0289,0x4C8A,0xA6,0x91,0x3E,0x6E,0x72,0x41,0xDE,0x8E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



