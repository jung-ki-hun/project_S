/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jul 12 21:36:30 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 15\DHCtl\DHCtl.idl:
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

const IID IID_IDHCtl = {0x5EA45DD6,0x6B33,0x4B4E,{0x81,0x0F,0x60,0xEA,0x91,0xCC,0xAD,0x18}};


const IID IID_IDHCtlUI = {0xA7104204,0x03ED,0x4BBB,{0xBA,0xA3,0x38,0x6B,0x8E,0xD7,0x33,0xD3}};


const IID LIBID_DHCTLLib = {0xDEF1582B,0x5D23,0x4C55,{0xAB,0x71,0xBF,0x8B,0x9E,0xCA,0xC2,0x40}};


const CLSID CLSID_DHCtl = {0x07B19F58,0xF23E,0x4BEC,{0x97,0xDC,0xA1,0x67,0xC7,0x7B,0xF6,0xD1}};


#ifdef __cplusplus
}
#endif

