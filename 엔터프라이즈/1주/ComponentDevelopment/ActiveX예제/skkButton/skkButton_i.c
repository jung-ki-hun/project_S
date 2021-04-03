/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Jun 16 15:22:20 2008
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\시험및학생풀이-Project\2007\2007-06-27\skkButton\skkButton.idl:
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

const IID IID_ISkkButton = {0x1D02E8FF,0x62F9,0x48C8,{0xB9,0x89,0x13,0x32,0xCF,0xDA,0xC7,0x95}};


const IID LIBID_SKKBUTTONLib = {0x998C2711,0x2151,0x4E00,{0xA0,0x53,0x0E,0x95,0xBE,0x04,0x8E,0xA9}};


const IID DIID__ISkkButtonEvents = {0xB2E4CC25,0x8BF2,0x4E43,{0x9B,0x18,0x4D,0x0F,0xAD,0xD0,0x13,0x5A}};


const CLSID CLSID_SkkButton = {0x848B3494,0xE54D,0x41B7,{0xAD,0x20,0x38,0x9B,0x56,0x01,0x4A,0x46}};


#ifdef __cplusplus
}
#endif

