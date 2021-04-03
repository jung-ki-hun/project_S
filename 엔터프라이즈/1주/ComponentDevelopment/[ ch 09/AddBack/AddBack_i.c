/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue May 16 10:12:37 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 09\AddBack\AddBack.idl:
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

const IID IID_IAddBack = {0x7746F4EB,0xABC8,0x40FA,{0xA8,0xC8,0x1A,0xA9,0x0A,0x8F,0xD7,0x8C}};


const IID LIBID_ADDBACKLib = {0x47EC9DBA,0x237E,0x4B5F,{0xA1,0x7F,0x0F,0x4F,0x56,0x72,0x1C,0x85}};


const CLSID CLSID_AddBack = {0x0B39A1AE,0xECAD,0x11D3,{0x82,0x55,0x00,0x00,0xC0,0xB1,0x10,0x65}};


#ifdef __cplusplus
}
#endif

