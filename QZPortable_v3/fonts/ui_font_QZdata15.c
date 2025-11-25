/*******************************************************************************
 * Size: 15 px
 * Bpp: 1
 * Opts: --bpp 1 --size 15 --font C:/Users/juand/Documents/quasizero/CONTROLBOX/assets/MADE TOMMY Thin.otf -o C:/Users/juand/Documents/quasizero/CONTROLBOX/assets\ui_font_QZdata15.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_QZDATA15
#define UI_FONT_QZDATA15 1
#endif

#if UI_FONT_QZDATA15

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x20,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x0, 0x24, 0x24, 0xff, 0x24, 0x44, 0xfe, 0x48,
    0x48, 0x40,

    /* U+0024 "$" */
    0x10, 0x20, 0xe6, 0x28, 0x10, 0x10, 0x18, 0xc,
    0x4, 0xc, 0x27, 0x82, 0x4, 0x0,

    /* U+0025 "%" */
    0x70, 0x48, 0x88, 0x89, 0x9, 0x10, 0x72, 0x0,
    0x40, 0x4, 0xe0, 0x92, 0x11, 0x11, 0x11, 0x20,
    0xe0,

    /* U+0026 "&" */
    0x1c, 0x8, 0x82, 0x20, 0x90, 0x18, 0xc, 0xc,
    0x82, 0x14, 0x83, 0x20, 0xc7, 0xcc,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x92, 0x24,

    /* U+0029 ")" */
    0x89, 0x22, 0x49, 0x29, 0x28,

    /* U+002A "*" */
    0x21, 0x1e, 0xc5, 0x0,

    /* U+002B "+" */
    0x21, 0x9, 0xf2, 0x10,

    /* U+002C "," */
    0x68,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x8, 0x84, 0x22, 0x10, 0x88, 0x42, 0x11, 0x8,
    0x40,

    /* U+0030 "0" */
    0x3c, 0x42, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x82, 0x42, 0x3c,

    /* U+0031 "1" */
    0x17, 0x91, 0x11, 0x11, 0x11, 0x10,

    /* U+0032 "2" */
    0x7a, 0x28, 0x41, 0x8, 0x21, 0x8, 0x41, 0xf,
    0xc0,

    /* U+0033 "3" */
    0x3c, 0x88, 0x8, 0x10, 0x43, 0x80, 0x81, 0x3,
    0x9, 0xe0,

    /* U+0034 "4" */
    0x4, 0x18, 0x50, 0xa2, 0x48, 0x91, 0x42, 0xfe,
    0x8, 0x10,

    /* U+0035 "5" */
    0x7d, 0x2, 0x4, 0xb, 0x88, 0x80, 0x81, 0x3,
    0x8, 0xe0,

    /* U+0036 "6" */
    0x10, 0x20, 0x81, 0x5, 0x88, 0xa0, 0xc1, 0x83,
    0x9, 0xe0,

    /* U+0037 "7" */
    0xfc, 0x10, 0x82, 0x10, 0x41, 0x8, 0x21, 0x4,
    0x0,

    /* U+0038 "8" */
    0x3c, 0x44, 0x42, 0x42, 0x44, 0x3c, 0x62, 0x81,
    0x81, 0x82, 0x7c,

    /* U+0039 "9" */
    0x39, 0x8a, 0xc, 0x18, 0x28, 0x8d, 0x4, 0x10,
    0x20, 0x80,

    /* U+003A ":" */
    0x81,

    /* U+003B ";" */
    0x40, 0x2, 0x80,

    /* U+003C "<" */
    0x8, 0xcc, 0x10, 0x30, 0x30,

    /* U+003D "=" */
    0xfc, 0xf, 0xc0,

    /* U+003E ">" */
    0x81, 0x81, 0xc6, 0x62, 0x0,

    /* U+003F "?" */
    0x74, 0x42, 0x11, 0x8, 0x84, 0x0, 0x8,

    /* U+0040 "@" */
    0xf, 0x81, 0x83, 0x10, 0x5, 0x1d, 0x29, 0x18,
    0xc8, 0x46, 0x42, 0x32, 0x32, 0x8c, 0x62, 0x0,
    0x8, 0x10, 0x2d, 0x0,

    /* U+0041 "A" */
    0x8, 0xa, 0x5, 0x2, 0x82, 0x21, 0x10, 0x88,
    0x7e, 0x41, 0x20, 0xa0, 0x20,

    /* U+0042 "B" */
    0xf9, 0xa, 0xc, 0x18, 0x5f, 0xa0, 0xc1, 0x83,
    0xb, 0xe0,

    /* U+0043 "C" */
    0x1f, 0x8, 0x24, 0x2, 0x0, 0x80, 0x20, 0x8,
    0x2, 0x0, 0x40, 0x8, 0x21, 0xf0,

    /* U+0044 "D" */
    0xfc, 0x41, 0x20, 0x50, 0x28, 0xc, 0x6, 0x3,
    0x2, 0x81, 0x41, 0x3f, 0x0,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xe8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0x8,
    0x0,

    /* U+0047 "G" */
    0x1e, 0x8, 0x64, 0x2, 0x0, 0x80, 0x21, 0xf8,
    0x6, 0x1, 0x40, 0x48, 0x31, 0xf4,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xe0,

    /* U+004A "J" */
    0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81, 0x83,
    0x9, 0xe0,

    /* U+004B "K" */
    0x85, 0x12, 0x45, 0xc, 0x18, 0x30, 0x50, 0x91,
    0x12, 0x10,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+004D "M" */
    0x80, 0x38, 0xf, 0x2, 0xd0, 0x59, 0x13, 0x24,
    0x62, 0x8c, 0x21, 0x80, 0x30, 0x6, 0x0, 0x80,

    /* U+004E "N" */
    0x81, 0xc1, 0xc1, 0xa1, 0x91, 0x91, 0x89, 0x85,
    0x85, 0x83, 0x81,

    /* U+004F "O" */
    0x1f, 0x4, 0x11, 0x1, 0x40, 0x28, 0x3, 0x0,
    0x60, 0xc, 0x2, 0x40, 0x44, 0x10, 0x7c, 0x0,

    /* U+0050 "P" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x40, 0x81,
    0x2, 0x0,

    /* U+0051 "Q" */
    0x1f, 0x4, 0x11, 0x1, 0x40, 0x28, 0x3, 0x0,
    0x60, 0xc, 0x12, 0x41, 0x44, 0x10, 0x7d, 0x0,

    /* U+0052 "R" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x44, 0x85,
    0xa, 0x8,

    /* U+0053 "S" */
    0x39, 0x8a, 0x4, 0x4, 0x6, 0x3, 0x1, 0x3,
    0x9, 0xe0,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20, 0x40,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+0056 "V" */
    0x80, 0xa0, 0x90, 0x48, 0x22, 0x21, 0x10, 0x88,
    0x28, 0x14, 0xc, 0x2, 0x0,

    /* U+0057 "W" */
    0x81, 0x5, 0x4, 0x14, 0x30, 0x90, 0xa2, 0x44,
    0x88, 0x92, 0x42, 0x49, 0x9, 0x14, 0x18, 0x60,
    0x61, 0x80, 0x82, 0x0,

    /* U+0058 "X" */
    0x41, 0x42, 0x22, 0x14, 0x18, 0x8, 0x14, 0x24,
    0x22, 0x42, 0x81,

    /* U+0059 "Y" */
    0x80, 0xa0, 0x90, 0x84, 0x42, 0x40, 0xa0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x0,

    /* U+005A "Z" */
    0xfe, 0x8, 0x20, 0x41, 0x2, 0x8, 0x20, 0x41,
    0x3, 0xf8,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xb0,

    /* U+005C "\\" */
    0x84, 0x20, 0x84, 0x21, 0x4, 0x21, 0x4, 0x21,
    0x4,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0x70,

    /* U+005E "^" */
    0x20, 0xc5, 0x22, 0x88,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x78, 0x20, 0x4f, 0xc6, 0x18, 0x5f,

    /* U+0062 "b" */
    0x80, 0x80, 0x80, 0xbc, 0xc2, 0x82, 0x81, 0x81,
    0x82, 0xc2, 0xbc,

    /* U+0063 "c" */
    0x3c, 0x86, 0x4, 0x8, 0x10, 0x10, 0x9e,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x3d, 0x43, 0x81, 0x81, 0x81,
    0x81, 0x43, 0x3d,

    /* U+0065 "e" */
    0x3c, 0x42, 0x81, 0xff, 0x80, 0x80, 0x40, 0x3e,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44, 0x40,

    /* U+0067 "g" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,
    0x1, 0x2, 0x7c,

    /* U+0068 "h" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x6, 0x8,

    /* U+0069 "i" */
    0x9f, 0xe0,

    /* U+006A "j" */
    0x20, 0x12, 0x49, 0x24, 0x93, 0x80,

    /* U+006B "k" */
    0x82, 0x8, 0x22, 0x92, 0x8c, 0x30, 0xa2, 0x48,
    0x80,

    /* U+006C "l" */
    0xff, 0xe0,

    /* U+006D "m" */
    0xbb, 0xd9, 0x8a, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21,

    /* U+006E "n" */
    0xb9, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1,

    /* U+006F "o" */
    0x3c, 0x42, 0x82, 0x81, 0x81, 0x82, 0x42, 0x3c,

    /* U+0070 "p" */
    0xbc, 0xc2, 0x82, 0x81, 0x81, 0x82, 0xc2, 0xbc,
    0x80, 0x80, 0x80,

    /* U+0071 "q" */
    0x3d, 0x43, 0x81, 0x81, 0x81, 0x81, 0x43, 0x3d,
    0x1, 0x1, 0x1,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x88,

    /* U+0073 "s" */
    0x74, 0x20, 0x83, 0x6, 0x2e,

    /* U+0074 "t" */
    0x44, 0xf4, 0x44, 0x44, 0x43,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x61, 0xbd,

    /* U+0076 "v" */
    0x82, 0x85, 0x12, 0x22, 0x85, 0xa, 0x8,

    /* U+0077 "w" */
    0x84, 0x31, 0x89, 0x29, 0x25, 0x24, 0xa8, 0x65,
    0xc, 0x60, 0x88,

    /* U+0078 "x" */
    0x44, 0x90, 0xa0, 0x83, 0x5, 0x11, 0x42,

    /* U+0079 "y" */
    0x82, 0x85, 0x12, 0x22, 0x85, 0x6, 0x8, 0x10,
    0x40, 0x80,

    /* U+007A "z" */
    0xf8, 0x84, 0x42, 0x22, 0x1f,

    /* U+007B "{" */
    0x14, 0x44, 0x44, 0x84, 0x44, 0x44, 0x43,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0x82, 0x22, 0x22, 0x12, 0x22, 0x22, 0x2c,

    /* U+007E "~" */
    0x62, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 59, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 82, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 5, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 131, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 29, .adv_w = 208, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 168, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 47, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 61, .adv_w = 80, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 66, .adv_w = 80, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 71, .adv_w = 108, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 75, .adv_w = 137, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 79, .adv_w = 45, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 80, .adv_w = 120, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 81, .adv_w = 40, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 107, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 91, .adv_w = 144, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 112, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 129, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 145, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 123, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 137, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 54, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 60, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 191, .adv_w = 129, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 196, .adv_w = 133, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 199, .adv_w = 129, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 204, .adv_w = 101, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 221, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 231, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 170, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 165, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 184, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 52, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 122, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 355, .adv_w = 207, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 167, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 190, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 190, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 129, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 162, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 149, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 233, .box_w = 14, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 141, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 76, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 536, .adv_w = 107, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 545, .adv_w = 76, .box_w = 2, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 549, .adv_w = 120, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 553, .adv_w = 102, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 554, .adv_w = 69, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 555, .adv_w = 126, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 132, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 590, .adv_w = 136, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 78, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 615, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 49, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 49, .box_w = 3, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 633, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 49, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 203, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 138, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 144, .box_w = 8, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 151, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 681, .adv_w = 152, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 692, .adv_w = 83, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 82, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 706, .adv_w = 138, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 120, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 720, .adv_w = 177, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 748, .adv_w = 108, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 100, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 760, .adv_w = 52, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 762, .adv_w = 100, .box_w = 4, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 769, .adv_w = 138, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    3, 21,
    3, 22,
    3, 23,
    3, 24,
    3, 25,
    3, 34,
    3, 36,
    3, 40,
    3, 43,
    3, 48,
    3, 50,
    3, 53,
    3, 66,
    3, 68,
    3, 69,
    3, 70,
    3, 72,
    3, 80,
    3, 82,
    3, 84,
    3, 86,
    5, 5,
    5, 14,
    5, 43,
    5, 52,
    5, 53,
    5, 58,
    5, 66,
    5, 68,
    5, 69,
    5, 70,
    5, 71,
    5, 72,
    5, 80,
    5, 82,
    5, 85,
    5, 87,
    5, 90,
    8, 21,
    8, 22,
    8, 23,
    8, 24,
    8, 25,
    8, 34,
    8, 36,
    8, 40,
    8, 43,
    8, 48,
    8, 50,
    8, 53,
    8, 66,
    8, 68,
    8, 69,
    8, 70,
    8, 72,
    8, 80,
    8, 82,
    8, 84,
    8, 86,
    14, 18,
    14, 19,
    14, 24,
    14, 34,
    14, 36,
    14, 40,
    14, 43,
    14, 48,
    14, 50,
    14, 53,
    14, 55,
    14, 56,
    14, 57,
    14, 58,
    14, 89,
    15, 17,
    15, 18,
    15, 21,
    15, 24,
    15, 26,
    15, 34,
    15, 36,
    15, 40,
    15, 48,
    15, 50,
    15, 53,
    15, 54,
    15, 55,
    15, 56,
    15, 57,
    15, 58,
    15, 59,
    15, 68,
    15, 69,
    15, 70,
    15, 71,
    15, 72,
    15, 80,
    15, 82,
    15, 84,
    15, 85,
    15, 87,
    15, 88,
    15, 90,
    15, 91,
    17, 15,
    17, 21,
    17, 24,
    18, 3,
    18, 8,
    18, 14,
    18, 15,
    18, 17,
    18, 18,
    18, 19,
    18, 20,
    18, 21,
    18, 22,
    18, 23,
    18, 24,
    18, 25,
    18, 26,
    19, 3,
    19, 8,
    19, 17,
    19, 18,
    19, 19,
    19, 20,
    19, 21,
    19, 23,
    19, 24,
    19, 25,
    19, 26,
    20, 3,
    20, 8,
    20, 18,
    20, 19,
    20, 20,
    20, 21,
    20, 24,
    20, 26,
    21, 3,
    21, 8,
    21, 17,
    21, 18,
    21, 19,
    21, 20,
    21, 21,
    21, 24,
    21, 26,
    22, 3,
    22, 8,
    22, 21,
    22, 24,
    22, 26,
    23, 3,
    23, 8,
    23, 18,
    23, 19,
    23, 20,
    23, 21,
    23, 22,
    23, 24,
    23, 26,
    24, 14,
    24, 15,
    24, 17,
    24, 20,
    24, 21,
    24, 22,
    24, 23,
    24, 25,
    24, 26,
    25, 3,
    25, 8,
    25, 18,
    25, 19,
    25, 20,
    25, 21,
    25, 24,
    25, 26,
    26, 14,
    26, 15,
    26, 19,
    26, 20,
    26, 21,
    26, 22,
    26, 23,
    26, 24,
    26, 25,
    34, 3,
    34, 8,
    34, 15,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 71,
    34, 84,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    35, 3,
    35, 5,
    35, 8,
    35, 43,
    35, 52,
    35, 53,
    35, 55,
    35, 56,
    35, 58,
    35, 71,
    36, 3,
    36, 5,
    36, 8,
    36, 15,
    36, 34,
    36, 36,
    36, 40,
    36, 43,
    36, 48,
    36, 50,
    36, 52,
    36, 53,
    36, 55,
    36, 56,
    36, 66,
    37, 3,
    37, 8,
    37, 15,
    37, 34,
    37, 43,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    37, 66,
    38, 36,
    38, 40,
    38, 43,
    38, 48,
    38, 50,
    39, 5,
    39, 15,
    39, 34,
    39, 36,
    39, 40,
    39, 43,
    39, 48,
    39, 50,
    39, 52,
    39, 59,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 78,
    39, 79,
    39, 80,
    39, 81,
    39, 82,
    39, 83,
    39, 84,
    39, 86,
    40, 3,
    40, 8,
    40, 15,
    40, 53,
    40, 55,
    40, 58,
    40, 59,
    40, 91,
    43, 15,
    43, 34,
    43, 43,
    43, 66,
    44, 5,
    44, 14,
    44, 36,
    44, 40,
    44, 43,
    44, 48,
    44, 50,
    44, 52,
    44, 54,
    44, 58,
    44, 66,
    44, 68,
    44, 69,
    44, 70,
    44, 71,
    44, 72,
    44, 80,
    44, 82,
    44, 85,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 14,
    45, 36,
    45, 40,
    45, 43,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 66,
    45, 71,
    45, 84,
    45, 85,
    45, 87,
    45, 88,
    45, 90,
    45, 91,
    48, 3,
    48, 5,
    48, 8,
    48, 15,
    48, 34,
    48, 43,
    48, 52,
    48, 53,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    48, 59,
    48, 66,
    48, 89,
    49, 14,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    49, 87,
    49, 88,
    49, 90,
    49, 91,
    50, 3,
    50, 5,
    50, 8,
    50, 15,
    50, 34,
    50, 43,
    50, 52,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    50, 59,
    50, 66,
    51, 3,
    51, 8,
    51, 14,
    51, 36,
    51, 40,
    51, 43,
    51, 48,
    51, 50,
    51, 53,
    51, 54,
    51, 58,
    51, 66,
    51, 82,
    51, 86,
    52, 5,
    52, 14,
    52, 43,
    52, 52,
    52, 53,
    52, 58,
    52, 66,
    52, 68,
    52, 69,
    52, 70,
    52, 71,
    52, 72,
    52, 80,
    52, 82,
    52, 85,
    52, 87,
    52, 90,
    53, 3,
    53, 5,
    53, 8,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 59,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 71,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 85,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 15,
    54, 34,
    54, 43,
    54, 66,
    55, 5,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 52,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 71,
    55, 72,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 85,
    55, 86,
    55, 87,
    55, 88,
    55, 89,
    55, 90,
    55, 91,
    56, 5,
    56, 15,
    56, 34,
    56, 36,
    56, 40,
    56, 43,
    56, 48,
    56, 50,
    56, 52,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 71,
    56, 72,
    56, 78,
    56, 79,
    56, 80,
    56, 81,
    56, 82,
    56, 83,
    56, 84,
    56, 85,
    56, 86,
    56, 91,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 66,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 85,
    57, 86,
    57, 87,
    57, 90,
    58, 5,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 74,
    58, 75,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 88,
    58, 89,
    58, 90,
    58, 91,
    59, 15,
    59, 36,
    59, 40,
    59, 43,
    59, 48,
    59, 50,
    59, 59,
    59, 66,
    59, 67,
    59, 68,
    59, 69,
    59, 70,
    59, 72,
    59, 73,
    59, 74,
    59, 75,
    59, 76,
    59, 77,
    59, 78,
    59, 79,
    59, 80,
    59, 81,
    59, 82,
    59, 83,
    59, 84,
    59, 85,
    59, 89,
    59, 91,
    66, 3,
    66, 8,
    67, 3,
    67, 8,
    68, 15,
    68, 66,
    71, 15,
    73, 3,
    73, 8,
    73, 87,
    73, 90,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    76, 86,
    78, 3,
    78, 8,
    78, 87,
    78, 90,
    79, 3,
    79, 8,
    79, 87,
    79, 90,
    80, 3,
    80, 8,
    81, 3,
    81, 8,
    83, 3,
    83, 8,
    83, 87,
    83, 88,
    83, 90,
    84, 3,
    84, 8,
    87, 15,
    88, 15,
    89, 66,
    89, 89,
    90, 15
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -17, -2, -10, 2, -2, -12, -2, -5,
    -14, -5, -5, 2, -5, -5, -5, -5,
    -7, -2, -5, -2, -2, -2, 2, 2,
    -2, -10, -7, 2, 2, 2, 2, -2,
    2, 2, 2, -2, -2, -2, -17, -2,
    -10, 2, -2, -12, -2, -5, -14, -5,
    -5, 2, -5, -5, -5, -5, -7, -2,
    -5, -2, -2, -7, -5, -7, -2, 2,
    2, 2, 2, 2, -5, -7, -2, -5,
    -17, -5, -2, -19, -2, -5, -14, 5,
    -10, -10, -10, -10, -17, -5, -17, -17,
    2, -22, 2, -2, -2, -2, -5, -2,
    -2, -2, 5, -12, -10, -5, -12, 2,
    -2, -2, -2, -10, -10, -2, -7, -10,
    2, -5, -5, -5, -2, -2, -2, -7,
    -5, -2, -2, -5, -2, -2, -5, -12,
    -5, -2, -5, -2, -2, -2, -2, -2,
    -2, -2, -2, -2, -7, -7, -2, -2,
    -2, -2, -7, -2, -7, -2, -2, -5,
    -5, -5, -10, -10, -7, -2, -2, -2,
    -2, -2, -5, -7, -19, -5, -2, -17,
    -2, -14, -7, -2, -2, -2, -2, -2,
    -2, -2, -5, -2, -2, -14, -5, -5,
    -12, -2, -7, -2, -5, -12, -12, 5,
    -5, -5, -5, -5, -17, -2, -14, -12,
    -24, -5, 2, -7, -2, -10, -5, -10,
    -2, 2, -2, 2, 2, -2, -2, -2,
    -2, -2, 2, 2, 2, 2, 2, -2,
    -2, 2, -2, -2, 2, -2, 2, 2,
    5, -2, -2, -10, -5, -2, -5, -2,
    -5, -10, -2, -2, -2, -2, 2, -2,
    -2, -5, -14, -17, -2, -2, -12, -2,
    -2, -5, -2, -10, -5, -5, -5, -5,
    -2, -2, -5, -2, -5, -2, -2, -2,
    -5, -5, 2, -10, -2, -7, 2, 2,
    -7, -2, -2, -2, -2, -7, -7, -7,
    -2, -7, -7, -2, -2, -2, 2, -5,
    -5, -5, -7, -5, -5, -5, -10, -5,
    -7, -5, -7, -12, -12, -2, -5, -5,
    2, -5, -5, -17, -2, -17, -10, -29,
    2, -5, 5, -7, -12, -7, -12, 2,
    -5, -2, -5, -10, -5, -2, -2, -10,
    -5, -5, -7, -10, -2, -2, -2, -2,
    -22, -10, -17, -2, -5, -2, -2, -2,
    -2, -2, -2, 5, 5, 5, 2, -5,
    -2, -5, -2, -2, -2, -2, -10, -5,
    -2, -10, -2, -2, -2, -2, -2, -2,
    -2, -5, -2, -2, -2, -2, -5, 2,
    -2, -2, -2, 2, 2, -2, -10, -7,
    2, 2, 2, 2, -2, 2, 2, 2,
    -2, -2, -2, 2, -2, 2, -7, -14,
    -17, -10, -10, -17, -10, -10, -2, -2,
    -2, -17, -14, -14, -14, -2, -14, -5,
    -5, -14, -5, -14, -7, -10, -2, -7,
    -5, -2, -2, -5, -2, -5, -2, -2,
    -2, -2, -5, -17, -14, -5, -5, -17,
    -5, -5, -2, -12, -12, -12, -12, -5,
    -12, -7, -7, -14, -7, -14, -7, -12,
    -2, -7, -2, -2, -5, -2, -5, -2,
    -17, -12, -2, -2, -17, -2, -2, -2,
    -12, -10, -10, -10, -2, -10, -5, -5,
    -10, -5, -10, -5, -7, -2, -5, -5,
    -2, -5, -5, -5, -5, 5, -2, -2,
    -2, -2, -2, -2, -7, -2, -5, -7,
    -10, -14, -19, -24, -10, -10, -26, -10,
    -10, -10, -22, -22, -22, -22, -12, -22,
    -2, -2, -12, -12, -22, -14, -22, -12,
    -22, -10, -14, -5, -5, -5, -5, -10,
    5, -5, -5, 2, -5, -5, 2, 2,
    2, -2, -2, -2, -2, 2, 2, 2,
    2, 2, 2, 2, -2, 2, -2, 2,
    2, -2, 2, 2, -2, -2, -5, -5,
    2, 5, -2, -2, -2, -2, -2, -5,
    -5, -5, -5, -5, -5, -2, -2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -2, -2, 2, 2, 2, 2, 2, -2,
    -2, -2, -2, 2, 2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 614,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_QZdata15 = {
#else
lv_font_t ui_font_QZdata15 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_QZDATA15*/

