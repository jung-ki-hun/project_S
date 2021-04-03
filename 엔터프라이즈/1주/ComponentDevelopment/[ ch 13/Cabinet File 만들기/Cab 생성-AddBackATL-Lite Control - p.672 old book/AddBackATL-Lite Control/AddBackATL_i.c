/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Jul 03 13:36:27 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 13\Cabinet File 만들기-실패\AddBackATL\AddBackATL.idl:
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

const IID IID_IAddBackATL = {0x2734EA17,0x38EA,0x4E54,{0xA0,0x9E,0xAA,0x11,0xCE,0x9B,0x1D,0x64}};


const IID LIBID_ADDBACKATLLib = {0x9E8142B7,0xF42F,0x4BEB,{0x98,0x4F,0x58,0xA0,0xEA,0x70,0x7D,0x21}};


const IID DIID__IAddBackATLEvents = {0x01D60ED5,0xD6FB,0x4E7F,{0xB1,0x76,0x6F,0xAF,0x65,0xD8,0x96,0x77}};


const CLSID CLSID_AddBackATL = {0x6D8D50AD,0xAD3D,0x4670,{0xA2,0x5F,0x9E,0x3E,0x6E,0x11,0x68,0x0F}};


#ifdef __cplusplus
}
#endif

