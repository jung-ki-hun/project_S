/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Apr 30 18:59:30 2007
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 06 - 07\4 Set Get\SetGetServer\SetGetServer.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


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

const IID IID_ISetGet = {0xA81347A8,0xC8E2,0x46BF,{0x93,0x39,0x66,0xD9,0x95,0x21,0x81,0x47}};


const IID IID_IAddSub = {0x06951608,0xCA64,0x44CA,{0xA4,0x05,0x4D,0xA4,0x67,0xF6,0xE4,0xA9}};


const IID LIBID_SETGETSERVERLib = {0x37A0CFF2,0x2EB7,0x4FA3,{0x9E,0x44,0xCD,0x6D,0x65,0x6A,0xA2,0x8A}};


const CLSID CLSID_SetGet = {0x457B1293,0x605C,0x4616,{0xB4,0xB5,0x98,0x5A,0xA1,0xE3,0xCD,0x2E}};


#ifdef __cplusplus
}
#endif

