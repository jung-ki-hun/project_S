/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jun 04 09:23:35 2008
 */
/* Compiler settings for C:\Documents and Settings\admin\πŸ≈¡ »≠∏È\COM\[ ch 11\AddEnd\AddEnd.idl:
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

const IID IID_IAddEnd = {0x9C40083F,0x1D1C,0x4403,{0x95,0xBB,0x94,0xC7,0x30,0x55,0x35,0x7E}};


const IID LIBID_ADDENDLib = {0xDFE393E7,0x00ED,0x4C28,{0x9D,0x5C,0xCE,0xCB,0xD4,0xDC,0x6B,0x95}};


const CLSID CLSID_AddEnd = {0x33EB3867,0x9BBD,0x4439,{0x89,0x2B,0xAC,0x02,0xC8,0x62,0x91,0x61}};


#ifdef __cplusplus
}
#endif

