#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BLUE
#define LV_ATTRIBUTE_IMG_BLUE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BLUE uint8_t blue_map[] = {
    0x00, 0x00, 0x00, 0x00,   /*Color of index 0*/
    0xff, 0xff, 0xff, 0x03,   /*Color of index 1*/
    0xff, 0xff, 0xff, 0x1e,   /*Color of index 2*/
    0xff, 0xff, 0xff, 0x0e,   /*Color of index 3*/
    0xff, 0xff, 0xff, 0x16,   /*Color of index 4*/
    0xf6, 0xe5, 0xb8, 0x3b,   /*Color of index 5*/
    0xf2, 0xe1, 0xb3, 0x3b,   /*Color of index 6*/
    0xed, 0xd3, 0x95, 0x57,   /*Color of index 7*/
    0xf9, 0xe8, 0xcc, 0x2d,   /*Color of index 8*/
    0xf2, 0xdc, 0xad, 0x3b,   /*Color of index 9*/
    0xf2, 0xd8, 0xb1, 0x3b,   /*Color of index 10*/
    0xd7, 0xbb, 0xaa, 0x2d,   /*Color of index 11*/
    0xe9, 0xcb, 0xa4, 0x3b,   /*Color of index 12*/
    0xe4, 0xb1, 0x93, 0x3b,   /*Color of index 13*/
    0xe1, 0xad, 0x93, 0x3b,   /*Color of index 14*/
    0xc7, 0x9c, 0x82, 0x3b,   /*Color of index 15*/
    0xc2, 0x9c, 0x7d, 0x3b,   /*Color of index 16*/
    0xbc, 0x97, 0x82, 0x3b,   /*Color of index 17*/
    0xb6, 0x93, 0x82, 0x3b,   /*Color of index 18*/
    0xe8, 0xca, 0x8b, 0x65,   /*Color of index 19*/
    0xe7, 0xc8, 0x83, 0x73,   /*Color of index 20*/
    0xe8, 0xc8, 0x7f, 0x8f,   /*Color of index 21*/
    0xe4, 0xc2, 0x79, 0x8f,   /*Color of index 22*/
    0xe4, 0xc2, 0x77, 0x8f,   /*Color of index 23*/
    0xe9, 0xc6, 0x7a, 0xab,   /*Color of index 24*/
    0xb3, 0x75, 0x55, 0x57,   /*Color of index 25*/
    0xad, 0x75, 0x52, 0x57,   /*Color of index 26*/
    0xe6, 0xc3, 0x76, 0xab,   /*Color of index 27*/
    0xf8, 0xd6, 0x8a, 0xff,   /*Color of index 28*/
    0xf0, 0xce, 0x80, 0xe3,   /*Color of index 29*/
    0xf6, 0xd3, 0x87, 0xff,   /*Color of index 30*/
    0xf4, 0xd1, 0x83, 0xff,   /*Color of index 31*/
    0xe4, 0xc0, 0x71, 0xc7,   /*Color of index 32*/
    0xed, 0xc9, 0x7c, 0xe3,   /*Color of index 33*/
    0xf2, 0xce, 0x80, 0xff,   /*Color of index 34*/
    0xeb, 0xc6, 0x77, 0xe3,   /*Color of index 35*/
    0xef, 0xcb, 0x7d, 0xff,   /*Color of index 36*/
    0xe7, 0xc3, 0x74, 0xe3,   /*Color of index 37*/
    0xec, 0xc8, 0x78, 0xff,   /*Color of index 38*/
    0xe4, 0xbf, 0x6f, 0xe3,   /*Color of index 39*/
    0xe9, 0xc4, 0x73, 0xff,   /*Color of index 40*/
    0xee, 0xc2, 0x78, 0xff,   /*Color of index 41*/
    0xe6, 0xb5, 0x6f, 0xe3,   /*Color of index 42*/
    0xe6, 0xc1, 0x6f, 0xff,   /*Color of index 43*/
    0xe5, 0xbf, 0x6d, 0xff,   /*Color of index 44*/
    0xe3, 0xbd, 0x6b, 0xff,   /*Color of index 45*/
    0xa2, 0x5d, 0x37, 0x81,   /*Color of index 46*/
    0xe8, 0xaf, 0x6b, 0xff,   /*Color of index 47*/
    0xa2, 0x59, 0x30, 0x8f,   /*Color of index 48*/
    0x9f, 0x57, 0x30, 0x8f,   /*Color of index 49*/
    0xe3, 0xa3, 0x62, 0xff,   /*Color of index 50*/
    0x9e, 0x56, 0x2c, 0x9d,   /*Color of index 51*/
    0xe0, 0x9d, 0x5e, 0xff,   /*Color of index 52*/
    0xdf, 0x9b, 0x5c, 0xff,   /*Color of index 53*/
    0x97, 0x51, 0x29, 0x9d,   /*Color of index 54*/
    0xd5, 0x8b, 0x51, 0xe3,   /*Color of index 55*/
    0xdf, 0x96, 0x58, 0xff,   /*Color of index 56*/
    0xdc, 0x91, 0x53, 0xff,   /*Color of index 57*/
    0x9e, 0x52, 0x27, 0xab,   /*Color of index 58*/
    0xd9, 0x89, 0x4e, 0xff,   /*Color of index 59*/
    0xce, 0x71, 0x3d, 0xe3,   /*Color of index 60*/
    0x99, 0x4d, 0x24, 0xb9,   /*Color of index 61*/
    0xca, 0x6f, 0x3b, 0xe3,   /*Color of index 62*/
    0xd4, 0x7c, 0x44, 0xff,   /*Color of index 63*/
    0xc0, 0x68, 0x36, 0xe3,   /*Color of index 64*/
    0xdb, 0x77, 0x3e, 0xff,   /*Color of index 65*/
    0x9b, 0x4c, 0x20, 0xc6,   /*Color of index 66*/
    0xd7, 0x75, 0x3d, 0xff,   /*Color of index 67*/
    0x92, 0x49, 0x1f, 0xc7,   /*Color of index 68*/
    0x8e, 0x48, 0x1f, 0xc7,   /*Color of index 69*/
    0xd3, 0x72, 0x3b, 0xff,   /*Color of index 70*/
    0xd0, 0x70, 0x3a, 0xff,   /*Color of index 71*/
    0xcd, 0x6e, 0x38, 0xff,   /*Color of index 72*/
    0xcc, 0x6d, 0x37, 0xff,   /*Color of index 73*/
    0xc7, 0x6b, 0x36, 0xff,   /*Color of index 74*/
    0xa5, 0x56, 0x27, 0xe3,   /*Color of index 75*/
    0xba, 0x61, 0x2e, 0xff,   /*Color of index 76*/
    0x98, 0x48, 0x1a, 0xe2,   /*Color of index 77*/
    0xb0, 0x5a, 0x29, 0xff,   /*Color of index 78*/
    0x89, 0x41, 0x18, 0xe2,   /*Color of index 79*/
    0x86, 0x40, 0x18, 0xe3,   /*Color of index 80*/
    0x83, 0x3e, 0x17, 0xe2,   /*Color of index 81*/
    0xa8, 0x54, 0x24, 0xfe,   /*Color of index 82*/
    0xa2, 0x51, 0x21, 0xff,   /*Color of index 83*/
    0x8c, 0x42, 0x17, 0xf1,   /*Color of index 84*/
    0x9a, 0x4b, 0x1d, 0xff,   /*Color of index 85*/
    0x95, 0x46, 0x17, 0xff,   /*Color of index 86*/
    0x93, 0x43, 0x16, 0xfe,   /*Color of index 87*/
    0x8f, 0x44, 0x17, 0xff,   /*Color of index 88*/
    0x8c, 0x41, 0x15, 0xfe,   /*Color of index 89*/
    0x88, 0x3f, 0x14, 0xfe,   /*Color of index 90*/
    0x85, 0x3d, 0x14, 0xfe,   /*Color of index 91*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 92*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 93*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 94*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 95*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 96*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 97*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 98*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 99*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 100*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 101*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 102*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 103*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 104*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 105*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 106*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 107*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 108*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 109*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 110*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 111*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 112*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 113*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 114*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 115*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 116*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 117*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 118*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 119*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 120*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 121*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 122*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 123*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 124*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 125*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 126*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 127*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 128*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 129*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 130*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 131*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 132*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 133*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 134*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 135*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 136*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 137*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 138*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 139*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 140*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 141*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 142*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 143*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 144*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 145*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 146*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 147*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 148*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 149*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 150*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 151*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 152*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 153*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 154*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 155*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 156*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 157*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 158*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 159*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 160*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 161*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 162*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 163*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 164*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 165*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 166*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 167*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 168*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 169*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 170*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 171*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 172*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 173*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 174*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 175*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 176*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 177*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 178*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 179*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 180*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 181*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 182*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 183*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 184*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 185*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 186*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 187*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 188*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 189*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 190*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 191*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 192*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 193*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 194*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 195*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 196*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 197*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 198*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 199*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 200*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 201*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 202*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 203*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 204*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 205*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 206*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 207*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 208*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 209*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 210*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 211*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 212*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 213*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 214*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 215*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 216*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 217*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 218*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 219*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 220*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 221*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 222*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 223*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 224*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 225*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 226*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 227*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 228*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 229*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 230*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 231*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 232*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 233*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 234*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 235*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 236*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 237*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 238*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 239*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 240*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 241*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 242*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 243*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 244*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 245*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 246*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 247*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 248*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 249*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 250*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 251*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 252*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 253*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 254*/
    0x00, 0x00, 0x00, 0x00,   /*Color of index 255*/

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00,
    0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00,
    0x00, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x00,
    0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01,
    0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03,
    0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0f, 0x30, 0x42, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x4d, 0x42, 0x3a, 0x19, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x2e, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x57, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x56, 0x33, 0x0b, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x31, 0x57, 0x57, 0x57, 0x57, 0x57, 0x58, 0x57, 0x56, 0x57, 0x57, 0x58, 0x57, 0x56, 0x57, 0x57, 0x57, 0x57, 0x56, 0x57, 0x57, 0x57, 0x57, 0x57, 0x57, 0x3d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x10, 0x58, 0x57, 0x58, 0x57, 0x58, 0x57, 0x57, 0x58, 0x58, 0x58, 0x57, 0x58, 0x57, 0x58, 0x57, 0x58, 0x57, 0x58, 0x57, 0x58, 0x57, 0x58, 0x57, 0x57, 0x57, 0x58, 0x1a, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x36, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x57, 0x59, 0x59, 0x59, 0x57, 0x59, 0x59, 0x59, 0x59, 0x57, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x44, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x45, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x54, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x4f, 0x5a, 0x5a, 0x5a, 0x59, 0x55, 0x53, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x53, 0x55, 0x58, 0x5b, 0x59, 0x5a, 0x5a, 0x11, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x4f, 0x5a, 0x59, 0x4e, 0x46, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x4c, 0x58, 0x5b, 0x5a, 0x11, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x50, 0x58, 0x48, 0x43, 0x41, 0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 0x43, 0x41, 0x43, 0x41, 0x43, 0x41, 0x43, 0x43, 0x43, 0x43, 0x46, 0x56, 0x5b, 0x11, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x51, 0x49, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x46, 0x5a, 0x11, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x4b, 0x46, 0x43, 0x43, 0x46, 0x43, 0x43, 0x43, 0x46, 0x43, 0x46, 0x43, 0x46, 0x46, 0x43, 0x46, 0x46, 0x43, 0x46, 0x43, 0x43, 0x43, 0x46, 0x43, 0x43, 0x46, 0x43, 0x52, 0x11, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x40, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x43, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x46, 0x4a, 0x12, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3e, 0x46, 0x47, 0x46, 0x47, 0x46, 0x46, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x46, 0x47, 0x47, 0x47, 0x46, 0x47, 0x46, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x47, 0x12, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3c, 0x48, 0x47, 0x43, 0x3b, 0x38, 0x34, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x38, 0x39, 0x3f, 0x47, 0x47, 0x47, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3c, 0x48, 0x35, 0x1f, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x2f, 0x43, 0x48, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3e, 0x32, 0x1c, 0x1e, 0x1e, 0x1c, 0x1e, 0x1e, 0x1e, 0x1c, 0x1c, 0x1e, 0x1c, 0x1e, 0x1c, 0x1e, 0x1c, 0x1e, 0x1c, 0x1e, 0x1e, 0x1c, 0x1e, 0x1e, 0x1c, 0x1e, 0x29, 0x46, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x37, 0x1e, 0x1f, 0x1e, 0x1e, 0x1f, 0x1e, 0x1e, 0x1e, 0x1f, 0x1e, 0x1e, 0x1f, 0x1e, 0x1e, 0x1f, 0x1e, 0x1e, 0x1f, 0x1e, 0x1f, 0x1e, 0x1e, 0x1f, 0x1e, 0x1f, 0x1e, 0x34, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x2a, 0x1f, 0x1f, 0x1f, 0x22, 0x1f, 0x1f, 0x22, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x29, 0x0e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x21, 0x22, 0x22, 0x22, 0x1f, 0x22, 0x22, 0x1f, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0c, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1d, 0x24, 0x24, 0x24, 0x22, 0x24, 0x22, 0x24, 0x22, 0x24, 0x22, 0x22, 0x24, 0x22, 0x24, 0x22, 0x24, 0x22, 0x24, 0x22, 0x24, 0x22, 0x24, 0x22, 0x24, 0x22, 0x22, 0x22, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x21, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x05, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x21, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x23, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x23, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x08, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x18, 0x28, 0x28, 0x2b, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x2b, 0x28, 0x25, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x07, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2c, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x2b, 0x15, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1b, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 0x27, 0x08, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x16, 0x2c, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x20, 0x08, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x09, 0x13, 0x16, 0x16, 0x16, 0x16, 0x16, 0x17, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x14, 0x0a, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04,
    0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03,
    0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01,
    0x00, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x00,
    0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00,
    0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const lv_img_dsc_t blue = {
    .header.cf = LV_IMG_CF_INDEXED_8BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 48,
    .header.h = 48,
    .data_size = 3328,
    .data = blue_map,
};