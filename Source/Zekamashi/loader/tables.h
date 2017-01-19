/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2014 - 2017
*
*  TITLE:       TABLES.H
*
*  VERSION:     1.71
*
*  DATE:        19 Jan 2017
*
*  Patch tables for supported VirtualBox versions.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

typedef struct _TABLE_DESC {
    LPWSTR  lpDescription;
    PVOID   DDTablePointer;
    ULONG   DDTableSize;
    PVOID   VMMTablePointer;
    ULONG   VMMTableSize;
} TABLE_DESC, *PTABLE_DESC;

//5.0.16
unsigned char TsmiPatchDataValue_5016[189] = {
    0x84, 0x15, 0x03, 0x00, 0x02, 0x51, 0x52, 0x7D, 0x17, 0x03, 0x00, 0x02, 0x51, 0x52, 0xE4, 0x19,
    0x03, 0x00, 0x02, 0x51, 0x52, 0x37, 0x1B, 0x03, 0x00, 0x02, 0x51, 0x52, 0x62, 0x1E, 0x03, 0x00,
    0x02, 0x51, 0x52, 0x04, 0x20, 0x03, 0x00, 0x02, 0x51, 0x52, 0x38, 0x21, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x40, 0xB7, 0x03, 0x00, 0x02, 0x51, 0x52, 0x1D, 0x76, 0x11, 0x00, 0x02, 0x51, 0x52, 0x80,
    0xD5, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x88, 0xA6, 0x12, 0x00,
    0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x58, 0xAA, 0x12, 0x00, 0x08, 0x4D, 0x61,
    0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x08, 0xAC, 0x12, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63,
    0x61, 0x6C, 0x52, 0x43, 0x7C, 0x12, 0x00, 0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65,
    0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74,
    0x68, 0x00, 0x00, 0xB6, 0xBE, 0x00, 0x00, 0x02, 0xDE, 0x10, 0xE6, 0x05, 0x01, 0x00, 0x02, 0xDE,
    0x10, 0x06, 0xE1, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x14, 0xE1, 0x01, 0x00, 0x02, 0xED, 0x1C, 0x81,
    0x21, 0x04, 0x00, 0x02, 0xDE, 0x10, 0x95, 0x21, 0x04, 0x00, 0x02, 0xCA, 0xC0
};

//5.0.16 
unsigned char TsmiPatchDataValueVMM_5016[27] = {
    0x25, 0xDD, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x2C, 0xDD, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x34, 0xDD, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00
};

//5.0.22
unsigned char TsmiPatchDataValue_5022[182] = {
    0x1D, 0xDB, 0x02, 0x00, 0x02, 0x51, 0x52, 0x84, 0xDD, 0x02, 0x00, 0x02, 0x51, 0x52, 0xD7, 0xDE,
    0x02, 0x00, 0x02, 0x51, 0x52, 0x22, 0xE1, 0x02, 0x00, 0x02, 0x51, 0x52, 0xC4, 0xE2, 0x02, 0x00,
    0x02, 0x51, 0x52, 0xC8, 0xE3, 0x02, 0x00, 0x02, 0x51, 0x52, 0xF0, 0x75, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x2D, 0xE8, 0x0F, 0x00, 0x02, 0x51, 0x52, 0x60, 0x35, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0x98, 0x03, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0x68, 0x07, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x18,
    0x09, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x53, 0xD9, 0x10, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0x86, 0xAC, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0x06, 0xED, 0x00, 0x00, 0x02, 0xDE, 0x10, 0x86, 0xB7, 0x01, 0x00, 0x02, 0xDE,
    0x10, 0x94, 0xB7, 0x01, 0x00, 0x02, 0xED, 0x1C, 0x21, 0xD7, 0x03, 0x00, 0x02, 0xDE, 0x10, 0x35,
    0xD7, 0x03, 0x00, 0x02, 0xCA, 0xC0
};

//5.0.22
unsigned char TsmiPatchDataValueVMM_5022[27] = {
    0x95, 0xD0, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x9C, 0xD0, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x00, 0xA4, 0xD0, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00
};

//5.1.0
unsigned char TsmiPatchDataValue_5100[182] = {
    0x9D, 0xDC, 0x02, 0x00, 0x02, 0x51, 0x52, 0x04, 0xDF, 0x02, 0x00, 0x02, 0x51, 0x52, 0x57, 0xE0,
    0x02, 0x00, 0x02, 0x51, 0x52, 0xA2, 0xE2, 0x02, 0x00, 0x02, 0x51, 0x52, 0x44, 0xE4, 0x02, 0x00,
    0x02, 0x51, 0x52, 0x48, 0xE5, 0x02, 0x00, 0x02, 0x51, 0x52, 0x70, 0x7C, 0x03, 0x00, 0x02, 0x51,
    0x52, 0xDD, 0x55, 0x10, 0x00, 0x02, 0x51, 0x52, 0x50, 0xA6, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0x38, 0x71, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0xD8, 0x72, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x60,
    0x7A, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x33, 0x44, 0x11, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xDF, 0xAB, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0xE5, 0xED, 0x00, 0x00, 0x02, 0xDE, 0x10, 0x71, 0xBC, 0x01, 0x00, 0x02, 0xDE,
    0x10, 0x11, 0xE9, 0x03, 0x00, 0x02, 0xDE, 0x10, 0x7D, 0xBC, 0x01, 0x00, 0x02, 0xED, 0x1C, 0x25,
    0xE9, 0x03, 0x00, 0x02, 0xCA, 0xC0
};

//5.1.0
unsigned char TsmiPatchDataValueVMM_5100[27] = {
    0xD5, 0xD4, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0xDC, 0xD4, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x00, 0xE4, 0xD4, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00
};

//5.1.2
unsigned char TsmiPatchDataValue_5102[182] = {
    0x7D, 0xDC, 0x02, 0x00, 0x02, 0x51, 0x52, 0xE4, 0xDE, 0x02, 0x00, 0x02, 0x51, 0x52, 0x37, 0xE0,
    0x02, 0x00, 0x02, 0x51, 0x52, 0x82, 0xE2, 0x02, 0x00, 0x02, 0x51, 0x52, 0x24, 0xE4, 0x02, 0x00,
    0x02, 0x51, 0x52, 0x28, 0xE5, 0x02, 0x00, 0x02, 0x51, 0x52, 0x90, 0x7C, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x6D, 0x59, 0x10, 0x00, 0x02, 0x51, 0x52, 0x50, 0xA6, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0x38, 0x71, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0xD8, 0x72, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x60,
    0x7A, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x33, 0x44, 0x11, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xDF, 0xAB, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0xE5, 0xED, 0x00, 0x00, 0x02, 0xDE, 0x10, 0x71, 0xBC, 0x01, 0x00, 0x02, 0xDE,
    0x10, 0x31, 0xE9, 0x03, 0x00, 0x02, 0xDE, 0x10, 0x7D, 0xBC, 0x01, 0x00, 0x02, 0xED, 0x1C, 0x45,
    0xE9, 0x03, 0x00, 0x02, 0xCA, 0xC0
};

//5.1.2
unsigned char TsmiPatchDataValueVMM_5102[27] = {
    0xC5, 0xD4, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0xCC, 0xD4, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x00, 0xD4, 0xD4, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00
};

//5.1.4
unsigned char TsmiPatchDataValue_5104[182] = {
    0x2D, 0xE8, 0x02, 0x00, 0x02, 0x51, 0x52, 0x94, 0xEA, 0x02, 0x00, 0x02, 0x51, 0x52, 0xE7, 0xEB,
    0x02, 0x00, 0x02, 0x51, 0x52, 0x32, 0xEE, 0x02, 0x00, 0x02, 0x51, 0x52, 0xD4, 0xEF, 0x02, 0x00,
    0x02, 0x51, 0x52, 0xD8, 0xF0, 0x02, 0x00, 0x02, 0x51, 0x52, 0x90, 0x8B, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x6D, 0x6E, 0x10, 0x00, 0x02, 0x51, 0x52, 0x60, 0xB6, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0x38, 0x88, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0x58, 0x8A, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0xE0,
    0x91, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x23, 0x5B, 0x11, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0x8F, 0xAF, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0x95, 0xF1, 0x00, 0x00, 0x02, 0xDE, 0x10, 0x91, 0xC0, 0x01, 0x00, 0x02, 0xDE,
    0x10, 0xA1, 0xF9, 0x03, 0x00, 0x02, 0xDE, 0x10, 0x9D, 0xC0, 0x01, 0x00, 0x02, 0xED, 0x1C, 0xB5,
    0xF9, 0x03, 0x00, 0x02, 0xCA, 0xC0
};

//5.1.4
unsigned char TsmiPatchDataValueVMM_5104[17] = {
    0x30, 0x53, 0x1E, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00
};

//5.1.6
unsigned char TsmiPatchDataValue_5106[175] = {
    0x0D, 0xE9, 0x02, 0x00, 0x02, 0x51, 0x52, 0x74, 0xEB, 0x02, 0x00, 0x02, 0x51, 0x52, 0xC7, 0xEC,
    0x02, 0x00, 0x02, 0x51, 0x52, 0x12, 0xEF, 0x02, 0x00, 0x02, 0x51, 0x52, 0xB4, 0xF0, 0x02, 0x00,
    0x02, 0x51, 0x52, 0xB8, 0xF1, 0x02, 0x00, 0x02, 0x51, 0x52, 0x60, 0x8C, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x6D, 0x75, 0x10, 0x00, 0x02, 0x51, 0x52, 0x70, 0xC6, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0xD8, 0x98, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0xF8, 0x9A, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x80,
    0xA2, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0xC3, 0x6B, 0x11, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xBF, 0xAF, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0x31, 0xC1, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x51, 0xFA, 0x03, 0x00, 0x02, 0xDE,
    0x10, 0x3D, 0xC1, 0x01, 0x00, 0x02, 0xED, 0x1C, 0x65, 0xFA, 0x03, 0x00, 0x02, 0xCA, 0xC0
};

//5.1.8
unsigned char TsmiPatchDataValue_5108[175] = {
    0xDD, 0xE8, 0x02, 0x00, 0x02, 0x51, 0x52, 0x44, 0xEB, 0x02, 0x00, 0x02, 0x51, 0x52, 0x97, 0xEC,
    0x02, 0x00, 0x02, 0x51, 0x52, 0xE2, 0xEE, 0x02, 0x00, 0x02, 0x51, 0x52, 0x84, 0xF0, 0x02, 0x00,
    0x02, 0x51, 0x52, 0x88, 0xF1, 0x02, 0x00, 0x02, 0x51, 0x52, 0x40, 0x8C, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x6D, 0x7F, 0x10, 0x00, 0x02, 0x51, 0x52, 0x70, 0xD6, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0xD8, 0xA8, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0xF8, 0xAA, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x80,
    0xB2, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0xC3, 0x7B, 0x11, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xAF, 0xAD, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0x81, 0xC1, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x91, 0xFA, 0x03, 0x00, 0x02, 0xDE,
    0x10, 0x8D, 0xC1, 0x01, 0x00, 0x02, 0xED, 0x1C, 0xA5, 0xFA, 0x03, 0x00, 0x02, 0xCA, 0xC0
};

//5.1.10
unsigned char TsmiPatchDataValue_5110[175] = {
    0x3D, 0xF6, 0x02, 0x00, 0x02, 0x51, 0x52, 0xA4, 0xF8, 0x02, 0x00, 0x02, 0x51, 0x52, 0xF7, 0xF9,
    0x02, 0x00, 0x02, 0x51, 0x52, 0x42, 0xFC, 0x02, 0x00, 0x02, 0x51, 0x52, 0xE4, 0xFD, 0x02, 0x00,
    0x02, 0x51, 0x52, 0xE8, 0xFE, 0x02, 0x00, 0x02, 0x51, 0x52, 0xD0, 0x99, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x9D, 0x6B, 0x10, 0x00, 0x02, 0x51, 0x52, 0x70, 0xB6, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0x58, 0x8D, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0x78, 0x8F, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x00,
    0x97, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x43, 0x60, 0x11, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0x0F, 0xB5, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0x5B, 0xCE, 0x01, 0x00, 0x02, 0xDE, 0x10, 0xB1, 0x08, 0x04, 0x00, 0x02, 0xDE,
    0x10, 0x63, 0xCE, 0x01, 0x00, 0x02, 0xED, 0x1C, 0xC5, 0x08, 0x04, 0x00, 0x02, 0xCA, 0xC0
};

//5.1.12
unsigned char TsmiPatchDataValue_5112[175] = {
    0xBD, 0xFC, 0x02, 0x00, 0x02, 0x51, 0x52, 0x24, 0xFF, 0x02, 0x00, 0x02, 0x51, 0x52, 0x77, 0x00,
    0x03, 0x00, 0x02, 0x51, 0x52, 0xC2, 0x02, 0x03, 0x00, 0x02, 0x51, 0x52, 0x64, 0x04, 0x03, 0x00,
    0x02, 0x51, 0x52, 0x68, 0x05, 0x03, 0x00, 0x02, 0x51, 0x52, 0x50, 0xA0, 0x03, 0x00, 0x02, 0x51,
    0x52, 0xFD, 0x73, 0x10, 0x00, 0x02, 0x51, 0x52, 0x80, 0xC6, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0x28, 0x9E, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0x48, 0xA0, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0xD0,
    0xA7, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x13, 0x71, 0x11, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0x1F, 0xB5, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0xBB, 0xD4, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x61, 0x0E, 0x04, 0x00, 0x02, 0xDE,
    0x10, 0xC3, 0xD4, 0x01, 0x00, 0x02, 0xED, 0x1C, 0x75, 0x0E, 0x04, 0x00, 0x02, 0xCA, 0xC0
};

//5.1.14
unsigned char TsmiPatchDataValue_5114[175] = {
    0x2D, 0x02, 0x03, 0x00, 0x02, 0x51, 0x52, 0x94, 0x04, 0x03, 0x00, 0x02, 0x51, 0x52, 0xE7, 0x05,
    0x03, 0x00, 0x02, 0x51, 0x52, 0x32, 0x08, 0x03, 0x00, 0x02, 0x51, 0x52, 0xD4, 0x09, 0x03, 0x00,
    0x02, 0x51, 0x52, 0xD8, 0x0A, 0x03, 0x00, 0x02, 0x51, 0x52, 0xC0, 0xA5, 0x03, 0x00, 0x02, 0x51,
    0x52, 0x2D, 0x9D, 0x10, 0x00, 0x02, 0x51, 0x52, 0x80, 0xE6, 0x10, 0x00, 0x08, 0x4D, 0x61, 0x67,
    0x69, 0x63, 0x61, 0x6C, 0x52, 0x98, 0xC1, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61,
    0x6C, 0x52, 0xB8, 0xC3, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x40,
    0xCB, 0x11, 0x00, 0x08, 0x4D, 0x61, 0x67, 0x69, 0x63, 0x61, 0x6C, 0x52, 0x83, 0x94, 0x11, 0x00,
    0x1B, 0x44, 0x73, 0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x53, 0x73,
    0x64, 0x74, 0x46, 0x69, 0x6C, 0x65, 0x50, 0x61, 0x74, 0x68, 0x00, 0x00, 0xEF, 0xB4, 0x00, 0x00,
    0x02, 0xDE, 0x10, 0x2B, 0xD9, 0x01, 0x00, 0x02, 0xDE, 0x10, 0x81, 0x14, 0x04, 0x00, 0x02, 0xDE,
    0x10, 0x33, 0xD9, 0x01, 0x00, 0x02, 0xED, 0x1C, 0x95, 0x14, 0x04, 0x00, 0x02, 0xCA, 0xC0
};
