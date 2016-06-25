#ifndef _core12b_font_
#define _core12b_font_

#include "gui/font.h"

//  
const char core12b_data_32[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_32 = {5, core12b_data_32};
// !
const char core12b_data_33[] = {0x00, 0x00, 0x00, 0xF0, 0xDF, 0x00, 0xF0, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_33 = {5, core12b_data_33};
// "
const char core12b_data_34[] = {0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_34 = {7, core12b_data_34};
// #
const char core12b_data_35[] = {0x00, 0x18, 0x00, 0x80, 0xD9, 0x00, 0x80, 0x3D, 0x00, 0xC0, 0x1B, 0x00, 0xB0, 0x19, 0x00, 0x80, 0x19, 0x00, 0x80, 0x19, 0x00, 0x80, 0xD9, 0x00, 0x80, 0x3D, 0x00, 0xC0, 0x1B, 0x00, 0xB0, 0x19, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_35 = {13, core12b_data_35};
// $
const char core12b_data_36[] = {0x80, 0x63, 0x00, 0xC0, 0xE7, 0x00, 0x60, 0x84, 0x00, 0x20, 0x84, 0x00, 0xF8, 0xFF, 0x03, 0x20, 0x84, 0x00, 0x20, 0xC4, 0x00, 0xE0, 0x7C, 0x00, 0xC0, 0x38, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_36 = {10, core12b_data_36};
// %
const char core12b_data_37[] = {0xE0, 0x07, 0x00, 0xF0, 0x0F, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0xF0, 0x8F, 0x00, 0xE0, 0x67, 0x00, 0x00, 0x10, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x03, 0x00, 0x80, 0x00, 0x00, 0x60, 0x7E, 0x00, 0x10, 0xFF, 0x00, 0x00, 0x81, 0x00, 0x00, 0x81, 0x00, 0x00, 0x81, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_37 = {19, core12b_data_37};
// &
const char core12b_data_38[] = {0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xE0, 0x7C, 0x00, 0xF0, 0xC7, 0x00, 0x10, 0x83, 0x00, 0x10, 0x86, 0x00, 0x10, 0x8F, 0x00, 0xF0, 0xD9, 0x00, 0xE0, 0x70, 0x00, 0x00, 0x7E, 0x00, 0x00, 0xCE, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_38 = {13, core12b_data_38};
// '
const char core12b_data_39[] = {0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_39 = {4, core12b_data_39};
// (
const char core12b_data_40[] = {0x00, 0x00, 0x00, 0x80, 0x7F, 0x00, 0xE0, 0xFF, 0x01, 0x70, 0x80, 0x03, 0x18, 0x00, 0x06, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00};
const Letter core12b_letter_40 = {7, core12b_data_40};
// )
const char core12b_data_41[] = {0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x18, 0x00, 0x06, 0x70, 0x80, 0x03, 0xE0, 0xFF, 0x01, 0x80, 0x7F, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_41 = {7, core12b_data_41};
// *
const char core12b_data_42[] = {0x00, 0x00, 0x00, 0x10, 0x02, 0x00, 0x20, 0x01, 0x00, 0xC0, 0x00, 0x00, 0xF8, 0x07, 0x00, 0xF8, 0x07, 0x00, 0xC0, 0x00, 0x00, 0x20, 0x01, 0x00, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_42 = {10, core12b_data_42};
// +
const char core12b_data_43[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0xC0, 0x7F, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_43 = {13, core12b_data_43};
// ,
const char core12b_data_44[] = {0x00, 0x00, 0x06, 0x00, 0xE0, 0x07, 0x00, 0xE0, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_44 = {5, core12b_data_44};
// -
const char core12b_data_45[] = {0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_45 = {7, core12b_data_45};
// .
const char core12b_data_46[] = {0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_46 = {5, core12b_data_46};
// /
const char core12b_data_47[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x80, 0x01, 0x00, 0x70, 0x00, 0x00, 0x0C, 0x00, 0x80, 0x03, 0x00, 0x60, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_47 = {9, core12b_data_47};
// 0
const char core12b_data_48[] = {0xC0, 0x3F, 0x00, 0xE0, 0x7F, 0x00, 0x30, 0xC0, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x30, 0xC0, 0x00, 0xE0, 0x7F, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_48 = {10, core12b_data_48};
// 1
const char core12b_data_49[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0x00, 0x40, 0x80, 0x00, 0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_49 = {10, core12b_data_49};
// 2
const char core12b_data_50[] = {0x60, 0x80, 0x00, 0x70, 0xC0, 0x00, 0x10, 0xE0, 0x00, 0x10, 0xB0, 0x00, 0x10, 0x98, 0x00, 0x10, 0x8C, 0x00, 0x30, 0x86, 0x00, 0xE0, 0x83, 0x00, 0xC0, 0x81, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_50 = {10, core12b_data_50};
// 3
const char core12b_data_51[] = {0x60, 0x60, 0x00, 0x70, 0xE0, 0x00, 0x10, 0x80, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x30, 0xC7, 0x00, 0xE0, 0x7D, 0x00, 0xC0, 0x38, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_51 = {10, core12b_data_51};
// 4
const char core12b_data_52[] = {0x00, 0x0C, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x09, 0x00, 0x80, 0x08, 0x00, 0x40, 0x08, 0x00, 0x20, 0x08, 0x00, 0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x08, 0x00, 0x00, 0x08, 0x00};
const Letter core12b_letter_52 = {10, core12b_data_52};
// 5
const char core12b_data_53[] = {0x00, 0x60, 0x00, 0xF0, 0xE1, 0x00, 0xF0, 0x81, 0x00, 0x10, 0x81, 0x00, 0x10, 0x81, 0x00, 0x10, 0x81, 0x00, 0x10, 0xC3, 0x00, 0x10, 0x7E, 0x00, 0x10, 0x3C, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_53 = {10, core12b_data_53};
// 6
const char core12b_data_54[] = {0x80, 0x3F, 0x00, 0xC0, 0x7F, 0x00, 0x60, 0xC1, 0x00, 0x30, 0x81, 0x00, 0x10, 0x81, 0x00, 0x10, 0x81, 0x00, 0x10, 0xC3, 0x00, 0x10, 0x7E, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_54 = {10, core12b_data_54};
// 7
const char core12b_data_55[] = {0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0xC0, 0x00, 0x10, 0xF0, 0x00, 0x10, 0x3C, 0x00, 0x10, 0x0F, 0x00, 0xD0, 0x03, 0x00, 0xF0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_55 = {10, core12b_data_55};
// 8
const char core12b_data_56[] = {0xC0, 0x38, 0x00, 0xE0, 0x7D, 0x00, 0x30, 0xC7, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x30, 0xC7, 0x00, 0xE0, 0x7D, 0x00, 0xC0, 0x38, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_56 = {10, core12b_data_56};
// 9
const char core12b_data_57[] = {0xC0, 0x03, 0x00, 0xE0, 0x87, 0x00, 0x30, 0x8C, 0x00, 0x10, 0x88, 0x00, 0x10, 0x88, 0x00, 0x10, 0xC8, 0x00, 0x30, 0x68, 0x00, 0xE0, 0x3F, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_57 = {10, core12b_data_57};
// :
const char core12b_data_58[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE3, 0x00, 0x80, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_58 = {6, core12b_data_58};
// ;
const char core12b_data_59[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0xE3, 0x07, 0x80, 0xE3, 0x01, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_59 = {6, core12b_data_59};
// <
const char core12b_data_60[] = {0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x12, 0x00, 0x00, 0x12, 0x00, 0x00, 0x21, 0x00, 0x00, 0x21, 0x00, 0x80, 0x40, 0x00, 0x80, 0x40, 0x00, 0x40, 0x80, 0x00, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_60 = {13, core12b_data_60};
// =
const char core12b_data_61[] = {0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_61 = {13, core12b_data_61};
// >
const char core12b_data_62[] = {0x00, 0x00, 0x00, 0x40, 0x80, 0x00, 0x40, 0x80, 0x00, 0x80, 0x40, 0x00, 0x80, 0x40, 0x00, 0x00, 0x21, 0x00, 0x00, 0x21, 0x00, 0x00, 0x12, 0x00, 0x00, 0x12, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_62 = {13, core12b_data_62};
// ?
const char core12b_data_63[] = {0x60, 0x00, 0x00, 0x70, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0xD8, 0x00, 0x10, 0xDC, 0x00, 0x30, 0x06, 0x00, 0xE0, 0x03, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_63 = {9, core12b_data_63};
// @
const char core12b_data_64[] = {0x00, 0x3F, 0x00, 0x80, 0x40, 0x00, 0x40, 0x80, 0x00, 0x20, 0x1E, 0x01, 0x10, 0x3F, 0x02, 0x90, 0x61, 0x02, 0x90, 0x40, 0x02, 0x90, 0x40, 0x02, 0x90, 0x3F, 0x02, 0x90, 0x7F, 0x02, 0x20, 0x40, 0x00, 0x40, 0x40, 0x00, 0x80, 0x20, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_64 = {15, core12b_data_64};
// A
const char core12b_data_65[] = {0x00, 0xE0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x1F, 0x00, 0xC0, 0x0F, 0x00, 0xF0, 0x08, 0x00, 0x30, 0x08, 0x00, 0xF0, 0x08, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x1F, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_65 = {12, core12b_data_65};
// B
const char core12b_data_66[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x30, 0x83, 0x00, 0xE0, 0xC7, 0x00, 0xC0, 0x7C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_66 = {11, core12b_data_66};
// C
const char core12b_data_67[] = {0x80, 0x1F, 0x00, 0xE0, 0x7F, 0x00, 0x60, 0x60, 0x00, 0x30, 0xC0, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x70, 0xE0, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_67 = {11, core12b_data_67};
// D
const char core12b_data_68[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x30, 0xC0, 0x00, 0x20, 0x40, 0x00, 0xE0, 0x70, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_68 = {12, core12b_data_68};
// E
const char core12b_data_69[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x10, 0x82, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_69 = {10, core12b_data_69};
// F
const char core12b_data_70[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x10, 0x02, 0x00, 0x10, 0x02, 0x00, 0x10, 0x02, 0x00, 0x10, 0x02, 0x00, 0x10, 0x02, 0x00, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_70 = {9, core12b_data_70};
// G
const char core12b_data_71[] = {0x80, 0x1F, 0x00, 0xE0, 0x7F, 0x00, 0x60, 0x60, 0x00, 0x30, 0xC0, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x84, 0x00, 0x10, 0x84, 0x00, 0x10, 0x84, 0x00, 0x70, 0xFC, 0x00, 0x60, 0x7C, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_71 = {12, core12b_data_71};
// H
const char core12b_data_72[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_72 = {12, core12b_data_72};
// I
const char core12b_data_73[] = {0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_73 = {7, core12b_data_73};
// J
const char core12b_data_74[] = {0x00, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0xC0, 0x00, 0xF0, 0x7F, 0x00, 0xF0, 0x3F, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_74 = {8, core12b_data_74};
// K
const char core12b_data_75[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x00, 0x80, 0x0D, 0x00, 0xC0, 0x18, 0x00, 0x60, 0x30, 0x00, 0x30, 0x60, 0x00, 0x10, 0xC0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_75 = {11, core12b_data_75};
// L
const char core12b_data_76[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_76 = {9, core12b_data_76};
// M
const char core12b_data_77[] = {0xF0, 0xFF, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x80, 0x07, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x00, 0x08, 0x00, 0x00, 0x06, 0x00, 0x80, 0x01, 0x00, 0x60, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_77 = {14, core12b_data_77};
// N
const char core12b_data_78[] = {0xF0, 0xFF, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x80, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x70, 0x00, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_78 = {12, core12b_data_78};
// O
const char core12b_data_79[] = {0x80, 0x1F, 0x00, 0xE0, 0x7F, 0x00, 0x60, 0x60, 0x00, 0x30, 0xC0, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x00, 0x30, 0xC0, 0x00, 0x60, 0x60, 0x00, 0xE0, 0x7F, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_79 = {12, core12b_data_79};
// P
const char core12b_data_80[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0x30, 0x0C, 0x00, 0xE0, 0x07, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_80 = {11, core12b_data_80};
// Q
const char core12b_data_81[] = {0x80, 0x1F, 0x00, 0xE0, 0x7F, 0x00, 0x60, 0x60, 0x00, 0x30, 0xC0, 0x00, 0x10, 0x80, 0x00, 0x10, 0x80, 0x01, 0x10, 0x80, 0x03, 0x30, 0xC0, 0x06, 0x60, 0x60, 0x04, 0xE0, 0x7F, 0x04, 0x80, 0x1F, 0x04, 0x00, 0x00, 0x00};
const Letter core12b_letter_81 = {12, core12b_data_81};
// R
const char core12b_data_82[] = {0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0x10, 0x08, 0x00, 0x30, 0x1C, 0x00, 0xE0, 0x37, 0x00, 0xC0, 0x63, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_82 = {12, core12b_data_82};
// S
const char core12b_data_83[] = {0xC0, 0x61, 0x00, 0xE0, 0xE3, 0x00, 0x30, 0x87, 0x00, 0x10, 0x86, 0x00, 0x10, 0x86, 0x00, 0x10, 0x86, 0x00, 0x10, 0xCE, 0x00, 0x70, 0x7C, 0x00, 0x60, 0x38, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_83 = {10, core12b_data_83};
// T
const char core12b_data_84[] = {0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0xF0, 0xFF, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_84 = {11, core12b_data_84};
// U
const char core12b_data_85[] = {0xF0, 0x3F, 0x00, 0xF0, 0x7F, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0xC0, 0x00, 0xF0, 0x7F, 0x00, 0xF0, 0x3F, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_85 = {12, core12b_data_85};
// V
const char core12b_data_86[] = {0x70, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x80, 0x1F, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xFC, 0x00, 0x80, 0x1F, 0x00, 0xF0, 0x03, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_86 = {11, core12b_data_86};
// W
const char core12b_data_87[] = {0xF0, 0x00, 0x00, 0xF0, 0x1F, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x3F, 0x00, 0xE0, 0x07, 0x00, 0xF0, 0x01, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xFF, 0x00, 0xF0, 0x1F, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_87 = {16, core12b_data_87};
// X
const char core12b_data_88[] = {0x30, 0xC0, 0x00, 0x70, 0xE0, 0x00, 0xC0, 0x30, 0x00, 0x80, 0x19, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x80, 0x19, 0x00, 0xC0, 0x30, 0x00, 0x70, 0xE0, 0x00, 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_88 = {11, core12b_data_88};
// Y
const char core12b_data_89[] = {0x30, 0x00, 0x00, 0xF0, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x07, 0x00, 0xC0, 0x01, 0x00, 0xF0, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_89 = {11, core12b_data_89};
// Z
const char core12b_data_90[] = {0x10, 0xC0, 0x00, 0x10, 0xE0, 0x00, 0x10, 0xB8, 0x00, 0x10, 0x9C, 0x00, 0x10, 0x86, 0x00, 0x90, 0x83, 0x00, 0xD0, 0x81, 0x00, 0x70, 0x80, 0x00, 0x30, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_90 = {10, core12b_data_90};
// [
const char core12b_data_91[] = {0x00, 0x00, 0x00, 0xF8, 0xFF, 0x07, 0xF8, 0xFF, 0x07, 0x08, 0x00, 0x04, 0x08, 0x00, 0x04, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00};
const Letter core12b_letter_91 = {7, core12b_data_91};
// (antislash)
const char core12b_data_92[] = {0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x60, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x70, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00};
const Letter core12b_letter_92 = {9, core12b_data_92};
// ]
const char core12b_data_93[] = {0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x08, 0x00, 0x04, 0x08, 0x00, 0x04, 0xF8, 0xFF, 0x07, 0xF8, 0xFF, 0x07, 0x00, 0x00, 0x00};
const Letter core12b_letter_93 = {7, core12b_data_93};
// ^
const char core12b_data_94[] = {0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0xC0, 0x00, 0x00, 0x20, 0x00, 0x00, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x20, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_94 = {13, core12b_data_94};
// _
const char core12b_data_95[] = {0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02};
const Letter core12b_letter_95 = {10, core12b_data_95};
// `
const char core12b_data_96[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x30, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_96 = {9, core12b_data_96};
// a
const char core12b_data_97[] = {0x00, 0x70, 0x00, 0x00, 0xF9, 0x00, 0x80, 0x89, 0x00, 0x80, 0x84, 0x00, 0x80, 0x84, 0x00, 0x80, 0x84, 0x00, 0x80, 0x45, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_97 = {10, core12b_data_97};
// b
const char core12b_data_98[] = {0xF8, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0x00, 0x41, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0xC1, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_98 = {10, core12b_data_98};
// c
const char core12b_data_99[] = {0x00, 0x3E, 0x00, 0x00, 0x7F, 0x00, 0x80, 0xC1, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_99 = {8, core12b_data_99};
// d
const char core12b_data_100[] = {0x00, 0x3E, 0x00, 0x00, 0x7F, 0x00, 0x80, 0xC1, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x41, 0x00, 0xF8, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_100 = {10, core12b_data_100};
// e
const char core12b_data_101[] = {0x00, 0x3E, 0x00, 0x00, 0x7F, 0x00, 0x80, 0xC9, 0x00, 0x80, 0x88, 0x00, 0x80, 0x88, 0x00, 0x80, 0x88, 0x00, 0x80, 0x89, 0x00, 0x00, 0xCF, 0x00, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_101 = {10, core12b_data_101};
// f
const char core12b_data_102[] = {0x80, 0x00, 0x00, 0xF0, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0x88, 0x00, 0x00, 0x88, 0x00, 0x00, 0x08, 0x00, 0x00};
const Letter core12b_letter_102 = {6, core12b_data_102};
// g
const char core12b_data_103[] = {0x00, 0x3E, 0x00, 0x00, 0x7F, 0x02, 0x80, 0xC1, 0x06, 0x80, 0x80, 0x04, 0x80, 0x80, 0x04, 0x80, 0x80, 0x04, 0x00, 0x41, 0x06, 0x80, 0xFF, 0x03, 0x80, 0xFF, 0x01, 0x00, 0x00, 0x00};
const Letter core12b_letter_103 = {10, core12b_data_103};
// h
const char core12b_data_104[] = {0xF8, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_104 = {10, core12b_data_104};
// i
const char core12b_data_105[] = {0x00, 0x00, 0x00, 0xB0, 0xFF, 0x00, 0xB0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_105 = {5, core12b_data_105};
// j
const char core12b_data_106[] = {0x00, 0x00, 0x04, 0x80, 0x00, 0x04, 0x80, 0x00, 0x04, 0xB0, 0xFF, 0x07, 0xB0, 0xFF, 0x03, 0x00, 0x00, 0x00};
const Letter core12b_letter_106 = {6, core12b_data_106};
// k
const char core12b_data_107[] = {0xF8, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0x00, 0x08, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x33, 0x00, 0x80, 0x61, 0x00, 0x80, 0xC0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_107 = {10, core12b_data_107};
// l
const char core12b_data_108[] = {0x00, 0x00, 0x00, 0xF8, 0xFF, 0x00, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_108 = {5, core12b_data_108};
// m
const char core12b_data_109[] = {0x80, 0xFF, 0x00, 0x80, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_109 = {15, core12b_data_109};
// n
const char core12b_data_110[] = {0x80, 0xFF, 0x00, 0x80, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0xFF, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_110 = {10, core12b_data_110};
// o
const char core12b_data_111[] = {0x00, 0x3E, 0x00, 0x00, 0x7F, 0x00, 0x80, 0xC1, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0xC1, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_111 = {10, core12b_data_111};
// p
const char core12b_data_112[] = {0x80, 0xFF, 0x07, 0x80, 0xFF, 0x07, 0x00, 0x41, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0xC1, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_112 = {10, core12b_data_112};
// q
const char core12b_data_113[] = {0x00, 0x3E, 0x00, 0x00, 0x7F, 0x00, 0x80, 0xC1, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x41, 0x00, 0x80, 0xFF, 0x07, 0x80, 0xFF, 0x07, 0x00, 0x00, 0x00};
const Letter core12b_letter_113 = {10, core12b_data_113};
// r
const char core12b_data_114[] = {0x80, 0xFF, 0x00, 0x80, 0xFF, 0x00, 0x00, 0x01, 0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_114 = {7, core12b_data_114};
// s
const char core12b_data_115[] = {0x00, 0x47, 0x00, 0x80, 0x8F, 0x00, 0x80, 0x8C, 0x00, 0x80, 0x9C, 0x00, 0x80, 0x98, 0x00, 0x80, 0xF8, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_115 = {8, core12b_data_115};
// t
const char core12b_data_116[] = {0x80, 0x00, 0x00, 0xF0, 0x7F, 0x00, 0xF0, 0xFF, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_116 = {7, core12b_data_116};
// u
const char core12b_data_117[] = {0x80, 0x3F, 0x00, 0x80, 0x7F, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0x00, 0x00, 0x40, 0x00, 0x80, 0xFF, 0x00, 0x80, 0xFF, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_117 = {10, core12b_data_117};
// v
const char core12b_data_118[] = {0x80, 0x03, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x7C, 0x00, 0x80, 0x1F, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_118 = {9, core12b_data_118};
// w
const char core12b_data_119[] = {0x80, 0x01, 0x00, 0x80, 0x1F, 0x00, 0x00, 0xFE, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x1F, 0x00, 0x80, 0x03, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xFE, 0x00, 0x80, 0x1F, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_119 = {14, core12b_data_119};
// x
const char core12b_data_120[] = {0x80, 0x80, 0x00, 0x80, 0xC1, 0x00, 0x00, 0x63, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x63, 0x00, 0x80, 0xC1, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_120 = {10, core12b_data_120};
// y
const char core12b_data_121[] = {0x80, 0x03, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x7C, 0x04, 0x00, 0xE0, 0x07, 0x00, 0xE0, 0x03, 0x00, 0x7C, 0x00, 0x80, 0x1F, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_121 = {9, core12b_data_121};
// z
const char core12b_data_122[] = {0x80, 0xC0, 0x00, 0x80, 0xE0, 0x00, 0x80, 0xB0, 0x00, 0x80, 0x98, 0x00, 0x80, 0x8C, 0x00, 0x80, 0x86, 0x00, 0x80, 0x83, 0x00, 0x80, 0x81, 0x00, 0x00, 0x00, 0x00};
const Letter core12b_letter_122 = {9, core12b_data_122};

// Table of letter struct
const Letter* core12b_letters[] = {
                                   &core12b_letter_32, 
                                   &core12b_letter_33, 
                                   &core12b_letter_34, 
                                   &core12b_letter_35, 
                                   &core12b_letter_36, 
                                   &core12b_letter_37, 
                                   &core12b_letter_38, 
                                   &core12b_letter_39, 
                                   &core12b_letter_40, 
                                   &core12b_letter_41, 
                                   &core12b_letter_42, 
                                   &core12b_letter_43, 
                                   &core12b_letter_44, 
                                   &core12b_letter_45, 
                                   &core12b_letter_46, 
                                   &core12b_letter_47, 
                                   &core12b_letter_48, 
                                   &core12b_letter_49, 
                                   &core12b_letter_50, 
                                   &core12b_letter_51, 
                                   &core12b_letter_52, 
                                   &core12b_letter_53, 
                                   &core12b_letter_54, 
                                   &core12b_letter_55, 
                                   &core12b_letter_56, 
                                   &core12b_letter_57, 
                                   &core12b_letter_58, 
                                   &core12b_letter_59, 
                                   &core12b_letter_60, 
                                   &core12b_letter_61, 
                                   &core12b_letter_62, 
                                   &core12b_letter_63, 
                                   &core12b_letter_64, 
                                   &core12b_letter_65, 
                                   &core12b_letter_66, 
                                   &core12b_letter_67, 
                                   &core12b_letter_68, 
                                   &core12b_letter_69, 
                                   &core12b_letter_70, 
                                   &core12b_letter_71, 
                                   &core12b_letter_72, 
                                   &core12b_letter_73, 
                                   &core12b_letter_74, 
                                   &core12b_letter_75, 
                                   &core12b_letter_76, 
                                   &core12b_letter_77, 
                                   &core12b_letter_78, 
                                   &core12b_letter_79, 
                                   &core12b_letter_80, 
                                   &core12b_letter_81, 
                                   &core12b_letter_82, 
                                   &core12b_letter_83, 
                                   &core12b_letter_84, 
                                   &core12b_letter_85, 
                                   &core12b_letter_86, 
                                   &core12b_letter_87, 
                                   &core12b_letter_88, 
                                   &core12b_letter_89, 
                                   &core12b_letter_90, 
                                   &core12b_letter_91, 
                                   &core12b_letter_92, 
                                   &core12b_letter_93, 
                                   &core12b_letter_94, 
                                   &core12b_letter_95, 
                                   &core12b_letter_96, 
                                   &core12b_letter_97, 
                                   &core12b_letter_98, 
                                   &core12b_letter_99, 
                                   &core12b_letter_100, 
                                   &core12b_letter_101, 
                                   &core12b_letter_102, 
                                   &core12b_letter_103, 
                                   &core12b_letter_104, 
                                   &core12b_letter_105, 
                                   &core12b_letter_106, 
                                   &core12b_letter_107, 
                                   &core12b_letter_108, 
                                   &core12b_letter_109, 
                                   &core12b_letter_110, 
                                   &core12b_letter_111, 
                                   &core12b_letter_112, 
                                   &core12b_letter_113, 
                                   &core12b_letter_114, 
                                   &core12b_letter_115, 
                                   &core12b_letter_116, 
                                   &core12b_letter_117, 
                                   &core12b_letter_118, 
                                   &core12b_letter_119, 
                                   &core12b_letter_120, 
                                   &core12b_letter_121, 
                                   &core12b_letter_122, 
                                  };

// Font structure
const Font core12b = {19, 32, 122, core12b_letters};
#endif