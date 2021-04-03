

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue May 14 13:39:51 2019
 */
/* Compiler settings for MyMul.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

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

MIDL_DEFINE_GUID(IID, IID_IMyMul,0x218EDA41,0xF520,0x40A4,0x99,0xE0,0xD7,0x23,0xE3,0x3A,0xAC,0x96);


MIDL_DEFINE_GUID(IID, IID_ISansu,0x807AB44B,0x5B2F,0x4E94,0x96,0x61,0x7F,0x18,0x8D,0xB1,0xCC,0x0A);


MIDL_DEFINE_GUID(IID, LIBID_MyMulLib,0x4A2F56DC,0x2DB1,0x4C1A,0xA5,0xC7,0x09,0xD7,0x35,0xAA,0xEE,0xE3);


MIDL_DEFINE_GUID(CLSID, CLSID_MyMul,0x14A65A3D,0x8775,0x4570,0xA2,0x91,0x69,0x5C,0x69,0x10,0xCE,0x1F);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



