/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Jul 03 12:47:03 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 13\AsyncEdit\AsyncEdit.idl:
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

const IID IID_IAsyncEdit = {0x996706ED,0x350D,0x11D4,{0x82,0x55,0x00,0x00,0xC0,0xB1,0x10,0x65}};


const IID LIBID_ASYNCEDITLib = {0x996706E1,0x350D,0x11D4,{0x82,0x55,0x00,0x00,0xC0,0xB1,0x10,0x65}};


const IID DIID__IAsyncEditEvents = {0x996706EF,0x350D,0x11D4,{0x82,0x55,0x00,0x00,0xC0,0xB1,0x10,0x65}};


const CLSID CLSID_AsyncEdit = {0x996706EE,0x350D,0x11D4,{0x82,0x55,0x00,0x00,0xC0,0xB1,0x10,0x65}};


#ifdef __cplusplus
}
#endif

