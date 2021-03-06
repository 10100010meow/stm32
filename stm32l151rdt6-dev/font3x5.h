#ifndef __FONT3x5_H
#define __FONT3x5_H

#define fnt3x5 &Font3x5

static const Font_TypeDef Font3x5 = {
		3,           // Font width
		5,           // Font height
		3,           // Bytes per character
		font_V,      // Vertical font scan lines
		45,          // First character: '-'
		70,          // Last character: 'F'
		48,          // Unknown character: '0'
		{
				// 'Empty' characters inserted here for compatibility with character drawing procedure
				0x04,0x04,0x04, // '-'
				0x00,0x10,0x00, // '.'
				0x00,0x00,0x00, // '/'
				0x1F,0x11,0x1F, // '0'
				0x00,0x02,0x1F, // '1'
				0x1D,0x15,0x17, // '2'
				0x11,0x15,0x1F, // '3'
				0x0F,0x08,0x1F, // '4'
				0x17,0x15,0x1D, // '5'
				0x1E,0x15,0x1C, // '6'
				0x01,0x19,0x07, // '7'
				0x1F,0x15,0x1F, // '8'
				0x07,0x15,0x0F, // '9'
				0x00,0x00,0x00, // ':'
				0x00,0x00,0x00, // ';'
				0x00,0x00,0x00, // '<'
				0x00,0x00,0x00, // '='
				0x00,0x00,0x00, // '>'
				0x00,0x00,0x00, // '?'
				0x00,0x00,0x00, // '@'
				0x1E,0x09,0x1E, // 'A'
				0x1F,0x15,0x0A, // 'B'
				0x1F,0x11,0x11, // 'C'
				0x1F,0x11,0x0E, // 'D'
				0x1F,0x15,0x11, // 'E'
				0x1F,0x05,0x01, // 'F'
		}
};

#endif // __FONT3x5_H
