/*
*********************************************************************************************************
*
*	模块名称 : 汉字点阵字库。有效显示区 高11x宽11, 最右一列留白
*	文件名称 : hz12.c
*	版    本 : V1.0
*	说    明 : 只包含本程序用到汉字字库
*********************************************************************************************************
*/

#include "fonts.h"

#ifdef USE_SMALL_FONT
/*
	FLASH中内嵌小字库，只包括本程序用到的汉字点阵
	每行点阵数据，头2字节是汉子的内码，后面32字节是16点阵汉子的字模数据。
*/

unsigned char const g_Hz12[] = {
0xBC,0xB6, 0x20,0x40,0x2F,0xE0,0x52,0x40,0xF2,0x80,0x22,0xE0,0x46,0x40,0xF5,0x40,0x05,0x40,// 级 //
           0x34,0x80,0xC9,0x40,0x12,0x20,0x2C,0x10,

0xC9,0xFD, 0x00,0x80,0x0E,0x80,0x78,0x80,0x08,0x80,0x08,0xA0,0xFF,0xF0,0x08,0x80,0x08,0x80,// 升 //
           0x08,0x80,0x10,0x80,0x20,0x80,0xC0,0x80,

0xD4,0xDA, 0x04,0x00,0x04,0x20,0xFF,0xF0,0x08,0x00,0x11,0x00,0x21,0x00,0x6F,0xE0,0xA1,0x00,// 在 //
           0x21,0x00,0x21,0x20,0x2F,0xF0,0x20,0x00,

0xD5,0xFD, 0x00,0x20,0x7F,0xF0,0x02,0x00,0x02,0x00,0x22,0x40,0x23,0xE0,0x22,0x00,0x22,0x00,// 正 //
           0x22,0x00,0x22,0x00,0x22,0x20,0xFF,0xF0,
	
0xB4,0xF3, 0x04,0x00,0x04,0x00,0x04,0x20,0xFF,0xF0,0x04,0x00,0x04,0x00,0x04,0x00,0x0A,0x00,// 大 //
           0x09,0x00,0x10,0x80,0x20,0x70,0xC0,0x20,

0xBC,0xFE, 0x10,0x80,0x14,0x80,0x24,0x80,0x27,0xF0,0x68,0x80,0xA0,0x80,0x3F,0xF0,0x20,0x80,// 件 //
           0x20,0x80,0x20,0x80,0x20,0x80,0x20,0x80,

0xCE,0xC4, 0x04,0x00,0x02,0x20,0xFF,0xF0,0x00,0x80,0x10,0x80,0x10,0x80,0x09,0x00,0x09,0x00,// 文 //
           0x06,0x00,0x09,0x80,0x30,0x40,0xC0,0x30,

0xD0,0xA1, 0x02,0x00,0x02,0x00,0x02,0x00,0x12,0x80,0x12,0x40,0x12,0x20,0x22,0x20,0x42,0x10,// 小 //
           0x82,0x10,0x02,0x00,0x0A,0x00,0x06,0x00,

0xB8,0xC4, 0x01,0x00,0x09,0x00,0xFD,0x20,0x0B,0xF0,0x0A,0x40,0x7D,0x40,0x49,0x40,0x41,0x40,// 改 //
           0x48,0x80,0x70,0x80,0x43,0x40,0x1C,0x30,

0xC6,0xDA, 0x48,0x10,0x49,0xF0,0xFD,0x10,0x49,0x10,0x79,0xF0,0x49,0x10,0x79,0x10,0x49,0xF0,// 期 //
           0xFD,0x10,0x29,0x10,0x42,0x50,0x84,0x20,

0xC8,0xD5, 0x00,0x40,0x1F,0xE0,0x10,0x40,0x10,0x40,0x10,0x40,0x1F,0xC0,0x10,0x40,0x10,0x40,// 日 //
           0x10,0x40,0x1F,0xC0,0x10,0x40,0x00,0x00,

0xD0,0xDE, 0x22,0x00,0x23,0xE0,0x42,0x20,0x55,0x40,0xD0,0x80,0x53,0x60,0x54,0x90,0x53,0x40,// 修 //
           0x54,0x80,0x53,0x20,0x40,0xC0,0x47,0x00,
					 
0xBF,0xAA, 0x00,0x40,0x7F,0xE0,0x08,0x80,0x08,0x80,0x08,0xA0,0xFF,0xF0,0x08,0x80,0x08,0x80,// 开 //
           0x10,0x80,0x10,0x80,0x20,0x80,0xC0,0x80,

0xCA,0xBC, 0x21,0x00,0x21,0x00,0x22,0x40,0xFA,0x20,0x2F,0xF0,0x28,0x10,0x4B,0xE0,0x52,0x20,// 始 //
           0x52,0x20,0x32,0x20,0x4B,0xE0,0x82,0x20,

0xBD,0xF8, 0x02,0x40,0x42,0x40,0x2F,0xF0,0x02,0x40,0x02,0x40,0xE2,0x40,0x2F,0xF0,0x22,0x40,// 进 //
           0x24,0x40,0x28,0x40,0x50,0x00,0x8F,0xF0,

0xC8,0xEB, 0x04,0x00,0x04,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x05,0x00,0x05,0x00,0x08,0x80,// 入 //
           0x10,0x80,0x20,0x40,0xC0,0x30,0x00,0x00,
					 
0xB2,0xC1, 0x21,0x00,0x2F,0xF0,0xFA,0x10,0x27,0xE0,0x38,0x80,0x2A,0x40,0x67,0xE0,0xA8,0x10,// 擦 //
           0x37,0xE0,0x25,0x40,0xA9,0x20,0x53,0x10,

0xC7,0xF8, 0x00,0x40,0x7F,0xE0,0x40,0x00,0x58,0x80,0x45,0x00,0x42,0x00,0x42,0x00,0x45,0x00,// 区 //
           0x58,0x80,0x40,0x20,0x7F,0xF0,0x40,0x00,

0xC9,0xC8, 0x04,0x00,0x3F,0xE0,0x20,0x20,0x3F,0xE0,0x20,0x00,0x3D,0xE0,0x24,0x20,0x34,0xA0,// 扇 //
           0x2C,0x60,0x55,0xA0,0x84,0x20,0x0C,0x60,

0xCB,0xF9, 0x18,0x60,0x63,0x80,0x42,0x00,0x7A,0x20,0x4B,0xF0,0x4A,0x40,0x7A,0x40,0x42,0x40,// 所 //
           0x42,0x40,0x44,0x40,0x88,0x40,0x90,0x40,

0xD3,0xD0, 0x04,0x00,0x04,0x20,0xFF,0xF0,0x08,0x00,0x1F,0xC0,0x30,0x40,0x5F,0xC0,0x90,0x40,// 有 //
           0x1F,0xC0,0x10,0x40,0x11,0x40,0x10,0x80,

0xB8,0xF6, 0x04,0x00,0x04,0x00,0x0A,0x00,0x11,0x80,0x24,0x70,0xC4,0x20,0x04,0x00,0x04,0x00,// 个 //
           0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,

0xD2,0xBB, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0xFF,0xF0,0x00,0x00,0x00,0x00,// 一 //
           0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
					 
0xB6,0xC1, 0x41,0x40,0x27,0xE0,0x21,0x00,0x0F,0xF0,0xC4,0x10,0x42,0x80,0x48,0x80,0x44,0xA0,// 读 //
           0x4F,0xF0,0x51,0x00,0x62,0x40,0x4C,0x20,

0xB3,0xCC, 0x1B,0xE0,0xE2,0x20,0x22,0x20,0xFB,0xE0,0x20,0x00,0x67,0xF0,0x70,0x80,0xA8,0x80,// 程 //
           0xA3,0xE0,0x20,0x80,0x20,0xA0,0x2F,0xF0,

0xD0,0xA3, 0x21,0x00,0x20,0x80,0x27,0xF0,0xF8,0x00,0x22,0x40,0x74,0x20,0xA8,0x40,0xA2,0x80,// 校 //
           0x22,0x80,0x21,0x00,0x22,0xC0,0x2C,0x30,

0xD0,0xF2, 0x02,0x20,0x7F,0xF0,0x40,0x00,0x5F,0xE0,0x42,0x80,0x41,0x00,0x5F,0xF0,0x41,0x20,// 序 //
           0x41,0x00,0x41,0x00,0x45,0x00,0x82,0x00,

0xD1,0xE9, 0x01,0x00,0xF1,0x00,0x12,0x80,0x54,0x40,0x58,0x30,0x53,0xC0,0x78,0x00,0x0A,0xA0,// 验 //
           0xEA,0xA0,0x0A,0x20,0x48,0x40,0x37,0xF0,
					 
0xBB,0xA7, 0x04,0x00,0x02,0x20,0x3F,0xF0,0x20,0x20,0x20,0x20,0x3F,0xE0,0x20,0x00,0x20,0x00,// 户 //
           0x20,0x00,0x20,0x00,0x40,0x00,0x80,0x00,

0xC7,0xF8, 0x00,0x40,0x7F,0xE0,0x40,0x00,0x58,0x80,0x45,0x00,0x42,0x00,0x42,0x00,0x45,0x00,// 区 //
           0x58,0x80,0x40,0x20,0x7F,0xF0,0x40,0x00,

0xCC,0xF8, 0x02,0x80,0xF2,0x80,0x92,0x90,0x9A,0xA0,0xF6,0xC0,0x22,0x80,0xB6,0xC0,0xAA,0xA0,// 跳 //
           0xA2,0x80,0xB2,0x90,0xC4,0x90,0x18,0x70,

0xD3,0xC3, 0x00,0x20,0x3F,0xF0,0x22,0x20,0x22,0x20,0x3F,0xE0,0x22,0x20,0x22,0x20,0x3F,0xE0,// 用 //
           0x22,0x20,0x42,0x20,0x42,0xA0,0x82,0x60,

0xD7,0xAA, 0x20,0x80,0x20,0x80,0xF7,0xE0,0x41,0x00,0x57,0xF0,0xF9,0x00,0x13,0xE0,0x18,0x20,// 转 //
           0x70,0x40,0xD3,0x80,0x10,0xC0,0x10,0x40,
					 
0xB0,0xDC, 0x01,0x00,0x7D,0x20,0x45,0xF0,0x45,0x20,0x56,0x20,0x55,0x40,0x55,0x40,0x55,0x40,// 败 //
           0x10,0x80,0x28,0xC0,0x41,0x20,0x86,0x10,

0xB3,0xC9, 0x02,0x80,0x02,0x40,0x3F,0xF0,0x22,0x00,0x22,0x40,0x3A,0x40,0x29,0x40,0x29,0x40,// 成 //
           0x28,0x90,0x59,0x90,0x42,0x50,0x8C,0x30,

0xB9,0xA6, 0x01,0x00,0x11,0x00,0xF9,0x20,0x27,0xF0,0x21,0x20,0x21,0x20,0x21,0x20,0x39,0x20,// 功 //
           0xC2,0x20,0x04,0x20,0x08,0xA0,0x30,0x40,

0xCA,0xA7, 0x04,0x00,0x24,0x40,0x3F,0xE0,0x44,0x00,0x04,0x20,0xFF,0xF0,0x04,0x00,0x04,0x00,// 失 //
           0x09,0x00,0x10,0x80,0x20,0x40,0xC0,0x30,

0xC4,0xA3, 0x22,0x40,0x2F,0xF0,0x22,0x40,0xF7,0xE0,0x24,0x20,0x77,0xE0,0xAC,0x20,0xA7,0xE0,// 模 //
           0x21,0x00,0x2F,0xF0,0x22,0x40,0x2C,0x30,

0xCA,0xBD, 0x01,0x40,0x01,0x20,0xFF,0xF0,0x01,0x00,0x01,0x00,0x7D,0x00,0x11,0x00,0x11,0x00,// 式 //
           0x10,0x80,0x1E,0x90,0xE0,0x50,0x00,0x30,

0xD6,0xD0, 0x02,0x00,0x02,0x00,0x02,0x20,0x7F,0xF0,0x42,0x20,0x42,0x20,0x7F,0xE0,0x42,0x20,// 中 //
           0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,

0xB3,0xA2, 0x04,0x00,0x24,0x40,0x14,0x80,0x7F,0xF0,0x40,0x20,0xBF,0xC0,0x00,0x20,0xFF,0xF0,// 尝 //
           0x08,0x00,0x10,0x80,0x20,0x40,0x3F,0xC0,

0xB4,0xCE, 0x04,0x00,0x84,0x00,0x47,0xE0,0x48,0x20,0x29,0x40,0x21,0x00,0x41,0x00,0xC2,0x80,// 次 //
           0x42,0x80,0x44,0x40,0x48,0x20,0x30,0x10,

0xB5,0xDA, 0x21,0x00,0x3D,0xF0,0x52,0x80,0xBF,0xC0,0x04,0x40,0x7F,0xC0,0x44,0x00,0x7F,0xE0,// 第 //
           0x0C,0x20,0x14,0xA0,0x24,0x40,0xC4,0x00,

0xCA,0xD4, 0x40,0x80,0x20,0xB0,0x00,0x80,0x1F,0xF0,0xC0,0x80,0x4F,0x80,0x42,0x80,0x42,0x40,// 试 //
           0x4A,0x50,0x53,0x50,0x6C,0x30,0x00,0x10,
			
0xB3,0xFD, 0x01,0x00,0xF2,0x80,0x92,0x40,0xA4,0x30,0xCF,0xC0,0xA1,0x00,0x9F,0xF0,0xD1,0x00,// 除 //
           0xB5,0x40,0x89,0x20,0x93,0x10,0x81,0x00,

0xD0,0xB4, 0x00,0x00,0x7F,0xF0,0x40,0x10,0x90,0x40,0x1F,0xE0,0x10,0x00,0x3F,0xE0,0x00,0x20,// 写 //
           0xFF,0xA0,0x00,0x20,0x02,0x40,0x01,0x80,
	
0xBB,0xA7, 0x04,0x00,0x02,0x20,0x3F,0xF0,0x20,0x20,0x20,0x20,0x3F,0xE0,0x20,0x00,0x20,0x00,// 户 //
           0x20,0x00,0x20,0x00,0x40,0x00,0x80,0x00,

0xC7,0xF8, 0x00,0x40,0x7F,0xE0,0x40,0x00,0x58,0x80,0x45,0x00,0x42,0x00,0x42,0x00,0x45,0x00,// 区 //
           0x58,0x80,0x40,0x20,0x7F,0xF0,0x40,0x00,

0xCC,0xF8, 0x02,0x80,0xF2,0x80,0x92,0x90,0x9A,0xA0,0xF6,0xC0,0x22,0x80,0xB6,0xC0,0xAA,0xA0,// 跳 //
           0xA2,0x80,0xB2,0x90,0xC4,0x90,0x18,0x70,

0xD3,0xC3, 0x00,0x20,0x3F,0xF0,0x22,0x20,0x22,0x20,0x3F,0xE0,0x22,0x20,0x22,0x20,0x3F,0xE0,// 用 //
           0x22,0x20,0x42,0x20,0x42,0xA0,0x82,0x60,

0xD7,0xAA, 0x20,0x80,0x20,0x80,0xF7,0xE0,0x41,0x00,0x57,0xF0,0xF9,0x00,0x13,0xE0,0x18,0x20,// 转 //
           0x70,0x40,0xD3,0x80,0x10,0xC0,0x10,0x40,

0xB5,0xA9, 0x00,0x40,0x1F,0xE0,0x10,0x40,0x10,0x40,0x1F,0xC0,0x10,0x40,0x10,0x40,0x1F,0xC0,// 旦 //
           0x10,0x40,0x00,0x00,0x00,0x20,0xFF,0xF0,

0xB5,0xE7, 0x04,0x00,0x04,0x40,0x7F,0xE0,0x44,0x40,0x44,0x40,0x7F,0xC0,0x44,0x40,0x44,0x40,// 电 //
           0x7F,0xC0,0x04,0x10,0x04,0x10,0x03,0xF0,

0xB8,0xB4, 0x10,0x20,0x3F,0xF0,0x50,0x40,0x9F,0xC0,0x10,0x40,0x1F,0xC0,0x08,0x00,0x1F,0x80,// 复 //
           0x28,0x80,0x45,0x00,0x87,0x00,0x38,0xF0,

0xB9,0xA4, 0x00,0x40,0x7F,0xE0,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x04,0x00,// 工 //
           0x04,0x00,0x04,0x20,0xFF,0xF0,0x00,0x00,

0xBE,0xDF, 0x1F,0xC0,0x10,0x40,0x1F,0xC0,0x10,0x40,0x1F,0xC0,0x10,0x40,0x1F,0xC0,0x10,0x40,// 具 //
           0xFF,0xF0,0x10,0x80,0x20,0x60,0xC0,0x20,

0xCE,0xA2, 0x24,0x40,0x55,0x40,0x95,0x40,0x1F,0xF0,0x20,0xA0,0x5E,0xA0,0xC0,0xA0,0x4E,0x40,// 微 //
           0x4A,0x40,0x4A,0xA0,0x51,0x20,0x46,0x10,

0xD7,0xD3, 0x3F,0xC0,0x00,0x80,0x01,0x00,0x02,0x00,0x02,0x20,0x7F,0xF0,0x02,0x00,0x02,0x00,// 子 //
           0x02,0x00,0x02,0x00,0x12,0x00,0x0E,0x00,

0xCF,0xDF, 0x21,0x80,0x21,0x40,0x51,0x00,0x51,0xE0,0xEF,0x00,0x21,0xF0,0x4F,0x00,0xF1,0x40,// 线 //
           0x00,0x80,0x39,0x90,0xC2,0x50,0x0C,0x30,

/* 最后一行必须用0xFF,0xFF结束，这是字库数组结束标志 */
0xFF,0xFF

};

#else
	unsigned char const g_Hz12[] = {0xFF, 0xFF};
#endif
