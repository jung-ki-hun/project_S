/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jun 04 10:34:17 2008
 */
/* Compiler settings for C:\Documents and Settings\admin\πŸ≈¡ »≠∏È\COM\[ ch 11\AddBack.Agg\AddBack.idl:
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

const IID IID_IAddBack = {0x127F8D51,0xB1DB,0x49E9,{0x9F,0x56,0xD0,0x6A,0x0E,0xE0,0xC5,0x00}};


const IID LIBID_ADDBACKLib = {0xC9B7AF1A,0x4E30,0x45AD,{0xAA,0x72,0x8F,0x7A,0x85,0x15,0x33,0x2B}};


const CLSID CLSID_AddBack = {0x780D8EC7,0x1C8F,0x4039,{0xB1,0xE7,0x81,0xF2,0x48,0xEA,0x0E,0x59}};


#ifdef __cplusplus
}
#endif

