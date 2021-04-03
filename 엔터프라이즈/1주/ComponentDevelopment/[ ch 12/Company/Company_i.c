/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jun 04 08:58:52 2008
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 12\Company\Company.idl:
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

const IID IID_ICompany = {0xECA4926A,0xD50F,0x4988,{0xB4,0x38,0x92,0xCE,0x96,0x20,0xE0,0x4F}};


const IID IID_IEmployees = {0xA9469C63,0x95F4,0x4F5A,{0x97,0x23,0x3F,0xAA,0x88,0x66,0xBB,0x1B}};


const IID IID_IEmployee = {0x1E5EDAC6,0x7B4C,0x4CB7,{0xA6,0xAC,0x79,0x39,0x3C,0xB4,0x66,0xC6}};


const IID LIBID_COMPANYLib = {0x936AB831,0xE7CE,0x4580,{0xB3,0xFF,0x5D,0x57,0x85,0xC3,0x61,0xB2}};


const CLSID CLSID_Company = {0x77EE056D,0x5BA1,0x477D,{0x9A,0xDF,0xD0,0x40,0x6E,0xB0,0xDB,0x77}};


#ifdef __cplusplus
}
#endif

