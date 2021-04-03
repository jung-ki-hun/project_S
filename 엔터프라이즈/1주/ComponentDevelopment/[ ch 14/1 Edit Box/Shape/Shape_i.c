/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Jul 12 19:53:21 2006
 */
/* Compiler settings for C:\Skk Education\Study-Lang\ComponentDevelopment\[ ch 14\1 Edit Box\Shape\Shape.idl:
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

const IID IID_IShape = {0xFF07F41B,0x03A7,0x47AD,{0xBE,0xD2,0xED,0x17,0xCD,0x29,0xF1,0xD2}};


const IID LIBID_SHAPELib = {0x0FDDF9AB,0xE68D,0x4F71,{0xB9,0x4F,0xEC,0x19,0x8F,0x43,0x69,0x38}};


const IID DIID__IShapeEvents = {0x001B3A77,0x58CC,0x44BC,{0xA7,0x38,0x74,0xB8,0x5D,0x8D,0x66,0xD5}};


const CLSID CLSID_Shape = {0x82333237,0x5AFB,0x4413,{0x86,0xA3,0xBC,0x42,0x50,0x70,0x82,0x95}};


const CLSID CLSID_ShapeProp = {0x4D7FFD84,0x0598,0x4E79,{0x81,0x6F,0xE9,0x35,0x68,0x0E,0x15,0x99}};


#ifdef __cplusplus
}
#endif

