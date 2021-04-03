

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, IID_IMyMulDiv,0x5DD6D3F4,0x0203,0x4071,0xA0,0xBF,0xC4,0x22,0xFA,0xA8,0x5A,0xB5);


MIDL_DEFINE_GUID(IID, IID_IMyAddSub,0xE32D89CF,0x0450,0x4CAF,0x8E,0xCB,0x1D,0x20,0x48,0xC6,0xB0,0xC8);


MIDL_DEFINE_GUID(IID, LIBID_MyMulDivLib,0x8C6585A5,0x92ED,0x4191,0x97,0x55,0x27,0xAF,0x90,0x41,0x89,0x41);


MIDL_DEFINE_GUID(CLSID, CLSID_MyMulDiv,0xF8C2BF94,0x078B,0x4E5D,0x8F,0x56,0xB8,0xD2,0xE4,0x1A,0xD4,0x1A);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



