/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Jul 10 16:06:49 2006
 */
/* Compiler settings for RemInServer.idl:
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

const IID IID_IAddEnd = {0xB86BF92E,0xCF3C,0x11D1,{0x94,0xF0,0x00,0x20,0xAF,0x71,0x5A,0xF0}};


const IID IID_IAdd = {0xB86BF92F,0xCF3C,0x11D1,{0x94,0xF0,0x00,0x20,0xAF,0x71,0x5A,0xF0}};


const IID LIBID_REMINSERVERLib = {0xB86BF932,0xCF3C,0x11D1,{0x94,0xF0,0x00,0x20,0xAF,0x71,0x5A,0xF0}};


const CLSID CLSID_RemInServer = {0xB86BF941,0xCF3C,0x11D1,{0x94,0xF0,0x00,0x20,0xAF,0x71,0x5A,0xF0}};


#ifdef __cplusplus
}
#endif

