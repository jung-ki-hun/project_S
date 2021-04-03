/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue May 08 16:59:40 2012
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ COM IE 툴바제작\skkToolBar\skkToolBar.idl:
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

const IID IID_IStockBar = {0x0F090CFD,0x68C6,0x4340,{0xBC,0xD2,0xED,0x3C,0x12,0x0B,0x8B,0xEA}};


const IID LIBID_SKKTOOLBARLib = {0x608545D7,0xC79A,0x4F5C,{0xA0,0xCC,0x9F,0x5E,0x7A,0xE2,0xBD,0x1C}};


const CLSID CLSID_StockBar = {0xE4ADBB2B,0x731E,0x4E30,{0xA0,0xD1,0xA1,0xDA,0x00,0x2C,0x2A,0x84}};


#ifdef __cplusplus
}
#endif

