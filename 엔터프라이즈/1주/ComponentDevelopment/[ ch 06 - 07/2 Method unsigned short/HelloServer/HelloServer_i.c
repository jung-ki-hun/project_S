/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun May 07 11:28:22 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 06\2 Method unsined short\HelloServer\HelloServer.idl:
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

const IID IID_IHello = {0x52DAEC03,0x09B5,0x456A,{0x93,0x70,0xFD,0x03,0x4D,0x47,0x82,0x29}};


const IID LIBID_HELLOSERVERLib = {0x827F9D25,0xFB07,0x4294,{0xAA,0x17,0xFC,0x26,0x7E,0x8B,0xCE,0x1E}};


const CLSID CLSID_Hello = {0xB23344A1,0x9B60,0x4C9E,{0xBA,0x39,0x4B,0x97,0xBD,0x35,0xA1,0x01}};


#ifdef __cplusplus
}
#endif

