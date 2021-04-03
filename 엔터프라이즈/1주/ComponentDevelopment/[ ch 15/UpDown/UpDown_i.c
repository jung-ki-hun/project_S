/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jul 12 20:18:42 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 15\UpDown\UpDown.idl:
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

const IID IID_IUpDown = {0x57AA6419,0xB53B,0x4FEB,{0x80,0x5C,0x97,0xDD,0xAB,0x76,0xC2,0xB1}};


const IID LIBID_UPDOWNLib = {0x746B3C5D,0x1128,0x4845,{0x96,0xE7,0xB1,0x54,0x6A,0x1D,0x96,0x69}};


const IID DIID__IUpDownEvents = {0xDFEC1C92,0x457A,0x4F33,{0xA9,0xCB,0x37,0x3E,0x29,0x4C,0x78,0x14}};


const CLSID CLSID_UpDown = {0x62419612,0x801A,0x47C3,{0x98,0x3F,0xCD,0x6C,0x5F,0x46,0x79,0xA3}};


#ifdef __cplusplus
}
#endif

