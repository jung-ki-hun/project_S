/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun May 07 11:09:56 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 06\1 Method short\HelloServer\HelloServer.idl:
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

const IID IID_IHello = {0x09A354CE,0x4D7E,0x45C6,{0xBA,0x50,0x87,0x93,0xA1,0x4B,0x08,0xE0}};


const IID LIBID_HELLOSERVERLib = {0x233D4764,0x528D,0x4D86,{0x83,0x93,0xF2,0xE1,0xF9,0xDA,0x61,0x14}};


const CLSID CLSID_Hello = {0x9FC48CA4,0x0AF0,0x4955,{0x9D,0xB4,0x57,0x95,0x1C,0x99,0xD7,0x56}};


#ifdef __cplusplus
}
#endif

