/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jun 04 11:00:40 2008
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 11\AddBack.Con\AddBack.idl:
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

const IID IID_IAddBack = {0xE3F3CF64,0x923C,0x4414,{0x8A,0x1D,0xB0,0xC3,0x22,0xF3,0x01,0x0B}};


const IID IID_IAddEnd = {0x9C40083F,0x1D1C,0x4403,{0x95,0xBB,0x94,0xC7,0x30,0x55,0x35,0x7E}};


const IID LIBID_ADDBACKLib = {0xAFF61B1F,0xF86E,0x462D,{0xBB,0x59,0xEB,0xC0,0x2B,0xA0,0x76,0x9A}};


const CLSID CLSID_AddBack = {0xCCB972C9,0xC400,0x4ECB,{0x81,0x2C,0xFB,0xC7,0xBA,0xFD,0x49,0x27}};


#ifdef __cplusplus
}
#endif

