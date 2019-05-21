
#include "lvgl/lvgl.h"

/***********************************************************************************
 * fontawesome.ttf 16 px Font in U+f000 () .. U+f2ee ()  range with 1 bpp
 * Sparse font with only these characters: 
***********************************************************************************/

/*Store the image of the letters (glyph)*/
static const uint8_t dejavu_sans_bold_16_glyph_bitmap[] = 
{
  /*Unicode: U+f001 () , Width: 13 */
  0x00, 0x00,  //............. 
  0x00, 0x18,  //...........%% 
  0x00, 0xf8,  //........%%%%% 
  0x07, 0xf8,  //.....%%%%%%%% 
  0x0f, 0xf8,  //....%%%%%%%%% 
  0x0f, 0xf8,  //....%%%%%%%%% 
  0x0f, 0x88,  //....%%%%%...% 
  0x08, 0x08,  //....%.......% 
  0x08, 0x08,  //....%.......% 
  0x08, 0x08,  //....%.......% 
  0x08, 0xf8,  //....%...%%%%% 
  0x08, 0xf8,  //....%...%%%%% 
  0xf8, 0xf0,  //%%%%%...%%%%. 
  0xf8, 0x00,  //%%%%%........ 
  0xf0, 0x00,  //%%%%......... 
  0x00, 0x00,  //............. 


  /*Unicode: U+f008 () , Width: 17 */
  0x00, 0x00, 0x00,  //................. 
  0xff, 0xff, 0x00,  //%%%%%%%%%%%%%%%%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0xf0, 0x0f, 0x00,  //%%%%........%%%%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0xff, 0xff, 0x00,  //%%%%%%%%%%%%%%%%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0xf0, 0x0f, 0x00,  //%%%%........%%%%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0x90, 0x09, 0x00,  //%..%........%..%. 
  0xff, 0xff, 0x00,  //%%%%%%%%%%%%%%%%. 
  0x00, 0x00, 0x00,  //................. 


  /*Unicode: U+f00b () , Width: 15 */
  0x00, 0x00,  //............... 
  0xf3, 0xfe,  //%%%%..%%%%%%%%% 
  0xf7, 0xfe,  //%%%%.%%%%%%%%%% 
  0xf7, 0xfe,  //%%%%.%%%%%%%%%% 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 
  0xf7, 0xfe,  //%%%%.%%%%%%%%%% 
  0xf7, 0xfe,  //%%%%.%%%%%%%%%% 
  0xf3, 0xfe,  //%%%%..%%%%%%%%% 
  0x00, 0x00,  //............... 
  0xf7, 0xfe,  //%%%%.%%%%%%%%%% 
  0xf7, 0xfe,  //%%%%.%%%%%%%%%% 
  0xf3, 0xfe,  //%%%%..%%%%%%%%% 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 


  /*Unicode: U+f00c () , Width: 13 */
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x30,  //..........%%. 
  0x00, 0x78,  //.........%%%% 
  0x00, 0xf8,  //........%%%%% 
  0x61, 0xf0,  //.%%....%%%%%. 
  0xf3, 0xe0,  //%%%%..%%%%%.. 
  0xff, 0xc0,  //%%%%%%%%%%... 
  0x7f, 0x80,  //.%%%%%%%%.... 
  0x3f, 0x00,  //..%%%%%%..... 
  0x1e, 0x00,  //...%%%%...... 
  0x0c, 0x00,  //....%%....... 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f00d () , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x61, 0x80,  //.%%....%%. 
  0xf3, 0xc0,  //%%%%..%%%% 
  0xff, 0xc0,  //%%%%%%%%%% 
  0x7f, 0x80,  //.%%%%%%%%. 
  0x3f, 0x00,  //..%%%%%%.. 
  0x3f, 0x00,  //..%%%%%%.. 
  0x7f, 0x80,  //.%%%%%%%%. 
  0xff, 0xc0,  //%%%%%%%%%% 
  0xf3, 0xc0,  //%%%%..%%%% 
  0x61, 0x80,  //.%%....%%. 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+f011 () , Width: 13 */
  0x06, 0x00,  //.....%%...... 
  0x06, 0x00,  //.....%%...... 
  0x16, 0x80,  //...%.%%.%.... 
  0x36, 0xe0,  //..%%.%%.%%%.. 
  0x76, 0x60,  //.%%%.%%..%%.. 
  0xe6, 0x70,  //%%%..%%..%%%. 
  0xc6, 0x30,  //%%...%%...%%. 
  0xc0, 0x30,  //%%........%%. 
  0xc0, 0x30,  //%%........%%. 
  0xe0, 0x30,  //%%%.......%%. 
  0x60, 0x60,  //.%%......%%.. 
  0x70, 0xe0,  //.%%%....%%%.. 
  0x3f, 0xc0,  //..%%%%%%%%... 
  0x0f, 0x00,  //....%%%%..... 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f013 () , Width: 13 */
  0x00, 0x00,  //............. 
  0x07, 0x00,  //.....%%%..... 
  0x27, 0x20,  //..%..%%%..%.. 
  0x7f, 0xf0,  //.%%%%%%%%%%%. 
  0x3f, 0xe0,  //..%%%%%%%%%.. 
  0x3d, 0xe0,  //..%%%%.%%%%.. 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf0, 0x78,  //%%%%.....%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0x3d, 0xe0,  //..%%%%.%%%%.. 
  0x3f, 0xe0,  //..%%%%%%%%%.. 
  0x7f, 0xf0,  //.%%%%%%%%%%%. 
  0x37, 0x20,  //..%%.%%%..%.. 
  0x07, 0x00,  //.....%%%..... 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f014 () , Width: 12 */
  0x00, 0x00,  //............ 
  0x0f, 0x00,  //....%%%%.... 
  0x10, 0x80,  //...%....%... 
  0xff, 0xf0,  //%%%%%%%%%%%% 
  0x40, 0x20,  //.%........%. 
  0x40, 0x20,  //.%........%. 
  0x54, 0xa0,  //.%.%.%..%.%. 
  0x54, 0xa0,  //.%.%.%..%.%. 
  0x54, 0xa0,  //.%.%.%..%.%. 
  0x54, 0xa0,  //.%.%.%..%.%. 
  0x54, 0xa0,  //.%.%.%..%.%. 
  0x40, 0x20,  //.%........%. 
  0x40, 0x20,  //.%........%. 
  0x3f, 0xc0,  //..%%%%%%%%.. 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 


  /*Unicode: U+f015 () , Width: 14 */
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x01, 0x30,  //.......%..%%.. 
  0x07, 0xb0,  //.....%%%%.%%.. 
  0x0c, 0xf0,  //....%%..%%%%.. 
  0x1b, 0x70,  //...%%.%%.%%%.. 
  0x37, 0xf8,  //..%%.%%%%%%%%. 
  0x7f, 0xec,  //.%%%%%%%%%%.%% 
  0x3f, 0xf0,  //..%%%%%%%%%%.. 
  0x3f, 0xf0,  //..%%%%%%%%%%.. 
  0x3c, 0xf0,  //..%%%%..%%%%.. 
  0x3c, 0xf0,  //..%%%%..%%%%.. 
  0x3c, 0xf0,  //..%%%%..%%%%.. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 


  /*Unicode: U+f019 () , Width: 15 */
  0x03, 0x00,  //......%%....... 
  0x07, 0x80,  //.....%%%%...... 
  0x07, 0x80,  //.....%%%%...... 
  0x07, 0x80,  //.....%%%%...... 
  0x07, 0x80,  //.....%%%%...... 
  0x1f, 0xe0,  //...%%%%%%%%.... 
  0x0f, 0xc0,  //....%%%%%%..... 
  0x07, 0x80,  //.....%%%%...... 
  0x03, 0x00,  //......%%....... 
  0xf8, 0x7c,  //%%%%%....%%%%%. 
  0xff, 0xfc,  //%%%%%%%%%%%%%%. 
  0xff, 0xd4,  //%%%%%%%%%%.%.%. 
  0xff, 0xfc,  //%%%%%%%%%%%%%%. 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 


  /*Unicode: U+f01c () , Width: 13 */
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x1f, 0xc0,  //...%%%%%%%... 
  0x3f, 0xe0,  //..%%%%%%%%%.. 
  0x20, 0x20,  //..%.......%.. 
  0x60, 0x30,  //.%%.......%%. 
  0x40, 0x30,  //.%........%%. 
  0xc0, 0x18,  //%%.........%% 
  0xf0, 0xf8,  //%%%%....%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f021 () , Width: 13 */
  0x00, 0x00,  //............. 
  0x02, 0x00,  //......%...... 
  0x1f, 0xc8,  //...%%%%%%%..% 
  0x3f, 0xf8,  //..%%%%%%%%%%% 
  0x70, 0x78,  //.%%%.....%%%% 
  0xe0, 0x78,  //%%%......%%%% 
  0xc0, 0xf8,  //%%......%%%%% 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0xf8, 0x38,  //%%%%%.....%%% 
  0xf0, 0x30,  //%%%%......%%. 
  0xf8, 0xf0,  //%%%%%...%%%%. 
  0xff, 0xe0,  //%%%%%%%%%%%.. 
  0x0f, 0x80,  //....%%%%%.... 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f026 () , Width: 7 */
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 
  0x04,  //.....%. 
  0x0c,  //....%%. 
  0x1c,  //...%%%. 
  0xfc,  //%%%%%%. 
  0xfc,  //%%%%%%. 
  0xfc,  //%%%%%%. 
  0xfc,  //%%%%%%. 
  0x1c,  //...%%%. 
  0x0c,  //....%%. 
  0x04,  //.....%. 
  0x00,  //....... 
  0x00,  //....... 
  0x00,  //....... 


  /*Unicode: U+f027 () , Width: 10 */
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x04, 0x00,  //.....%.... 
  0x0c, 0x00,  //....%%.... 
  0x1c, 0x00,  //...%%%.... 
  0xfc, 0x80,  //%%%%%%..%. 
  0xfc, 0x40,  //%%%%%%...% 
  0xfc, 0x40,  //%%%%%%...% 
  0xfc, 0x80,  //%%%%%%..%. 
  0x1c, 0x00,  //...%%%.... 
  0x0c, 0x00,  //....%%.... 
  0x04, 0x00,  //.....%.... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+f028 () , Width: 14 */
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x20,  //..........%... 
  0x04, 0x10,  //.....%.....%.. 
  0x0c, 0x48,  //....%%...%..%. 
  0x1c, 0x28,  //...%%%....%.%. 
  0xfc, 0x94,  //%%%%%%..%..%.% 
  0xfc, 0x54,  //%%%%%%...%.%.% 
  0xfc, 0x54,  //%%%%%%...%.%.% 
  0xfc, 0x94,  //%%%%%%..%..%.% 
  0x1c, 0x28,  //...%%%....%.%. 
  0x0c, 0x48,  //....%%...%..%. 
  0x04, 0x10,  //.....%.....%.. 
  0x00, 0x20,  //..........%... 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 


  /*Unicode: U+f03e () , Width: 17 */
  0x00, 0x00, 0x00,  //................. 
  0xff, 0xff, 0x00,  //%%%%%%%%%%%%%%%%. 
  0x80, 0x01, 0x00,  //%..............%. 
  0x98, 0x01, 0x00,  //%..%%..........%. 
  0xb8, 0x01, 0x00,  //%.%%%..........%. 
  0xb8, 0x71, 0x00,  //%.%%%....%%%...%. 
  0x80, 0xf9, 0x00,  //%.......%%%%%..%. 
  0x81, 0xfd, 0x00,  //%......%%%%%%%.%. 
  0x9f, 0xfd, 0x00,  //%..%%%%%%%%%%%.%. 
  0xbf, 0xfd, 0x00,  //%.%%%%%%%%%%%%.%. 
  0xbf, 0xfd, 0x00,  //%.%%%%%%%%%%%%.%. 
  0xbf, 0xfd, 0x00,  //%.%%%%%%%%%%%%.%. 
  0x80, 0x01, 0x00,  //%..............%. 
  0xff, 0xff, 0x00,  //%%%%%%%%%%%%%%%%. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 


  /*Unicode: U+f040 () , Width: 13 */
  0x00, 0x00,  //............. 
  0x00, 0x40,  //.........%... 
  0x00, 0xe0,  //........%%%.. 
  0x00, 0xf0,  //........%%%%. 
  0x03, 0x78,  //......%%.%%%% 
  0x07, 0xb0,  //.....%%%%.%%. 
  0x0f, 0xc0,  //....%%%%%%... 
  0x1f, 0xc0,  //...%%%%%%%... 
  0x3f, 0x80,  //..%%%%%%%.... 
  0x7f, 0x00,  //.%%%%%%%..... 
  0xfe, 0x00,  //%%%%%%%...... 
  0x9c, 0x00,  //%..%%%....... 
  0xd8, 0x00,  //%%.%%........ 
  0xf0, 0x00,  //%%%%......... 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f048 () , Width: 9 */
  0x00, 0x00,  //......... 
  0xc0, 0x00,  //%%....... 
  0xc1, 0x80,  //%%.....%% 
  0xc3, 0x80,  //%%....%%% 
  0xc7, 0x80,  //%%...%%%% 
  0xcf, 0x80,  //%%..%%%%% 
  0xdf, 0x80,  //%%.%%%%%% 
  0xff, 0x80,  //%%%%%%%%% 
  0xdf, 0x80,  //%%.%%%%%% 
  0xcf, 0x80,  //%%..%%%%% 
  0xc7, 0x80,  //%%...%%%% 
  0xc3, 0x80,  //%%....%%% 
  0xc1, 0x80,  //%%.....%% 
  0xc0, 0x80,  //%%......% 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+f04b () , Width: 12 */
  0x00, 0x00,  //............ 
  0x80, 0x00,  //%........... 
  0xe0, 0x00,  //%%%......... 
  0xf8, 0x00,  //%%%%%....... 
  0xfc, 0x00,  //%%%%%%...... 
  0xff, 0x00,  //%%%%%%%%.... 
  0xff, 0xc0,  //%%%%%%%%%%.. 
  0xff, 0xe0,  //%%%%%%%%%%%. 
  0xff, 0xe0,  //%%%%%%%%%%%. 
  0xff, 0x80,  //%%%%%%%%%... 
  0xfe, 0x00,  //%%%%%%%..... 
  0xf8, 0x00,  //%%%%%....... 
  0xe0, 0x00,  //%%%......... 
  0xc0, 0x00,  //%%.......... 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 


  /*Unicode: U+f04c () , Width: 13 */
  0x00, 0x00,  //............. 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0xf8, 0xf8,  //%%%%%...%%%%% 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f04d () , Width: 13 */
  0x00, 0x00,  //............. 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f051 () , Width: 9 */
  0x00, 0x00,  //......... 
  0x03, 0x00,  //......%%. 
  0x83, 0x00,  //%.....%%. 
  0xc3, 0x00,  //%%....%%. 
  0xe3, 0x00,  //%%%...%%. 
  0xf3, 0x00,  //%%%%..%%. 
  0xfb, 0x00,  //%%%%%.%%. 
  0xff, 0x00,  //%%%%%%%%. 
  0xfb, 0x00,  //%%%%%.%%. 
  0xf3, 0x00,  //%%%%..%%. 
  0xe3, 0x00,  //%%%...%%. 
  0xc3, 0x00,  //%%....%%. 
  0x83, 0x00,  //%.....%%. 
  0x03, 0x00,  //......%%. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+f052 () , Width: 13 */
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x02, 0x00,  //......%...... 
  0x07, 0x00,  //.....%%%..... 
  0x0f, 0x80,  //....%%%%%.... 
  0x1f, 0xc0,  //...%%%%%%%... 
  0x3f, 0xe0,  //..%%%%%%%%%.. 
  0x7f, 0xf0,  //.%%%%%%%%%%%. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f053 () , Width: 9 */
  0x00, 0x00,  //......... 
  0x03, 0x00,  //......%%. 
  0x07, 0x80,  //.....%%%% 
  0x0f, 0x00,  //....%%%%. 
  0x1e, 0x00,  //...%%%%.. 
  0x3c, 0x00,  //..%%%%... 
  0x78, 0x00,  //.%%%%.... 
  0xf8, 0x00,  //%%%%%.... 
  0x7c, 0x00,  //.%%%%%... 
  0x3e, 0x00,  //..%%%%%.. 
  0x1f, 0x00,  //...%%%%%. 
  0x0f, 0x80,  //....%%%%% 
  0x07, 0x80,  //.....%%%% 
  0x03, 0x00,  //......%%. 
  0x00, 0x00,  //......... 
  0x00, 0x00,  //......... 


  /*Unicode: U+f054 () , Width: 10 */
  0x00, 0x00,  //.......... 
  0x70, 0x00,  //.%%%...... 
  0x78, 0x00,  //.%%%%..... 
  0x3c, 0x00,  //..%%%%.... 
  0x1e, 0x00,  //...%%%%... 
  0x0f, 0x00,  //....%%%%.. 
  0x07, 0x80,  //.....%%%%. 
  0x07, 0x80,  //.....%%%%. 
  0x0f, 0x00,  //....%%%%.. 
  0x1e, 0x00,  //...%%%%... 
  0x3c, 0x00,  //..%%%%.... 
  0x78, 0x00,  //.%%%%..... 
  0x70, 0x00,  //.%%%...... 
  0x20, 0x00,  //..%....... 
  0x00, 0x00,  //.......... 
  0x00, 0x00,  //.......... 


  /*Unicode: U+f067 () , Width: 12 */
  0x00, 0x00,  //............ 
  0x06, 0x00,  //.....%%..... 
  0x0e, 0x00,  //....%%%..... 
  0x0e, 0x00,  //....%%%..... 
  0x0e, 0x00,  //....%%%..... 
  0x0f, 0x00,  //....%%%%.... 
  0xff, 0xf0,  //%%%%%%%%%%%% 
  0xff, 0xf0,  //%%%%%%%%%%%% 
  0xff, 0xe0,  //%%%%%%%%%%%. 
  0x0e, 0x00,  //....%%%..... 
  0x0e, 0x00,  //....%%%..... 
  0x0e, 0x00,  //....%%%..... 
  0x0e, 0x00,  //....%%%..... 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 


  /*Unicode: U+f068 () , Width: 12 */
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0xff, 0xf0,  //%%%%%%%%%%%% 
  0xff, 0xf0,  //%%%%%%%%%%%% 
  0xff, 0xf0,  //%%%%%%%%%%%% 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 


  /*Unicode: U+f071 () , Width: 15 */
  0x01, 0x00,  //.......%....... 
  0x03, 0x80,  //......%%%...... 
  0x03, 0x80,  //......%%%...... 
  0x07, 0xc0,  //.....%%%%%..... 
  0x0e, 0xe0,  //....%%%.%%%.... 
  0x0c, 0x60,  //....%%...%%.... 
  0x1c, 0x70,  //...%%%...%%%... 
  0x1c, 0x70,  //...%%%...%%%... 
  0x3c, 0x78,  //..%%%%...%%%%.. 
  0x3f, 0xf8,  //..%%%%%%%%%%%.. 
  0x7c, 0x7c,  //.%%%%%...%%%%%. 
  0x7c, 0x7c,  //.%%%%%...%%%%%. 
  0xff, 0xfe,  //%%%%%%%%%%%%%%% 
  0xff, 0xfe,  //%%%%%%%%%%%%%%% 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 


  /*Unicode: U+f074 () , Width: 15 */
  0x00, 0x08,  //............%.. 
  0x00, 0x0c,  //............%%. 
  0xf0, 0xfe,  //%%%%....%%%%%%% 
  0xf9, 0xfe,  //%%%%%..%%%%%%%% 
  0x1b, 0x8c,  //...%%.%%%...%%. 
  0x0f, 0x08,  //....%%%%....%.. 
  0x06, 0x00,  //.....%%........ 
  0x06, 0x00,  //.....%%........ 
  0x0d, 0x08,  //....%%.%....%.. 
  0x1d, 0x8c,  //...%%%.%%...%%. 
  0xf9, 0xfe,  //%%%%%..%%%%%%%% 
  0xf0, 0xfe,  //%%%%....%%%%%%% 
  0x00, 0x0c,  //............%%. 
  0x00, 0x08,  //............%.. 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 


  /*Unicode: U+f077 () , Width: 14 */
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x02, 0x00,  //......%....... 
  0x07, 0x00,  //.....%%%...... 
  0x0f, 0x80,  //....%%%%%..... 
  0x1f, 0xc0,  //...%%%%%%%.... 
  0x3f, 0xe0,  //..%%%%%%%%%... 
  0x78, 0xf0,  //.%%%%...%%%%.. 
  0xf0, 0x78,  //%%%%.....%%%%. 
  0xe0, 0x38,  //%%%.......%%%. 
  0x40, 0x10,  //.%.........%.. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 


  /*Unicode: U+f078 () , Width: 14 */
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x60, 0x38,  //.%%.......%%%. 
  0xf0, 0x78,  //%%%%.....%%%%. 
  0x78, 0xf8,  //.%%%%...%%%%%. 
  0x3d, 0xf0,  //..%%%%.%%%%%.. 
  0x1f, 0xe0,  //...%%%%%%%%... 
  0x0f, 0xc0,  //....%%%%%%.... 
  0x07, 0x80,  //.....%%%%..... 
  0x03, 0x00,  //......%%...... 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 


  /*Unicode: U+f079 () , Width: 17 */
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x37, 0xfc, 0x00,  //..%%.%%%%%%%%%... 
  0x3b, 0xfc, 0x00,  //..%%%.%%%%%%%%... 
  0x78, 0x0c, 0x00,  //.%%%%.......%%... 
  0xfc, 0x0c, 0x00,  //%%%%%%......%%... 
  0x30, 0x0c, 0x00,  //..%%........%%... 
  0x30, 0x0c, 0x00,  //..%%........%%... 
  0x30, 0x3f, 0x00,  //..%%......%%%%%%. 
  0x30, 0x1e, 0x00,  //..%%.......%%%%.. 
  0x3f, 0xdc, 0x00,  //..%%%%%%%%.%%%... 
  0x3f, 0xec, 0x00,  //..%%%%%%%%%.%%... 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 


  /*Unicode: U+f07b () , Width: 14 */
  0x00, 0x00,  //.............. 
  0x78, 0x00,  //.%%%%......... 
  0xfc, 0x00,  //%%%%%%........ 
  0xff, 0xf8,  //%%%%%%%%%%%%%. 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0x7f, 0xf8,  //.%%%%%%%%%%%%. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 
  0x00, 0x00,  //.............. 


  /*Unicode: U+f093 () , Width: 15 */
  0x00, 0x00,  //............... 
  0x03, 0x00,  //......%%....... 
  0x07, 0x80,  //.....%%%%...... 
  0x0f, 0xc0,  //....%%%%%%..... 
  0x1f, 0xe0,  //...%%%%%%%%.... 
  0x1f, 0xe0,  //...%%%%%%%%.... 
  0x07, 0x80,  //.....%%%%...... 
  0x07, 0x80,  //.....%%%%...... 
  0x07, 0x80,  //.....%%%%...... 
  0x03, 0x00,  //......%%....... 
  0xf8, 0x7c,  //%%%%%....%%%%%. 
  0xff, 0xfc,  //%%%%%%%%%%%%%%. 
  0xff, 0xd4,  //%%%%%%%%%%.%.%. 
  0xff, 0xfc,  //%%%%%%%%%%%%%%. 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 


  /*Unicode: U+f095 () , Width: 12 */
  0x00, 0x00,  //............ 
  0x60, 0x00,  //.%%......... 
  0xe0, 0x00,  //%%%......... 
  0xf0, 0x00,  //%%%%........ 
  0xf0, 0x00,  //%%%%........ 
  0xe0, 0x00,  //%%%......... 
  0x60, 0x00,  //.%%......... 
  0x70, 0x00,  //.%%%........ 
  0x38, 0x00,  //..%%%....... 
  0x1c, 0xc0,  //...%%%..%%.. 
  0x0f, 0xf0,  //....%%%%%%%% 
  0x07, 0xf0,  //.....%%%%%%% 
  0x01, 0xe0,  //.......%%%%. 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 


  /*Unicode: U+f0c4 () , Width: 15 */
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 
  0x70, 0x00,  //.%%%........... 
  0xdc, 0x04,  //%%.%%%.......%. 
  0x84, 0x12,  //%....%.....%..% 
  0xc4, 0x44,  //%%...%...%...%. 
  0x7f, 0x00,  //.%%%%%%%....... 
  0x02, 0x00,  //......%........ 
  0x02, 0x60,  //......%..%%.... 
  0x3d, 0x90,  //..%%%%.%%..%... 
  0xc4, 0x44,  //%%...%...%...%. 
  0x84, 0x12,  //%....%.....%..% 
  0xcc, 0x0c,  //%%..%%......%%. 
  0x70, 0x00,  //.%%%........... 
  0x00, 0x00,  //............... 
  0x00, 0x00,  //............... 


  /*Unicode: U+f0c5 () , Width: 15 */
  0x0f, 0xc0,  //....%%%%%%..... 
  0x18, 0x40,  //...%%....%..... 
  0x28, 0x40,  //..%.%....%..... 
  0x48, 0x7e,  //.%..%....%%%%%% 
  0xf8, 0x62,  //%%%%%....%%...% 
  0x80, 0xa2,  //%.......%.%...% 
  0x83, 0x22,  //%.....%%..%...% 
  0x83, 0x22,  //%.....%%..%...% 
  0x87, 0xe2,  //%....%%%%%%...% 
  0x84, 0x02,  //%....%........% 
  0x84, 0x02,  //%....%........% 
  0xfc, 0x02,  //%%%%%%........% 
  0x04, 0x02,  //.....%........% 
  0x04, 0x02,  //.....%........% 
  0x07, 0xfe,  //.....%%%%%%%%%% 
  0x00, 0x00,  //............... 


  /*Unicode: U+f0c7 () , Width: 13 */
  0x00, 0x00,  //............. 
  0xff, 0xc0,  //%%%%%%%%%%... 
  0xb8, 0xa0,  //%.%%%...%.%.. 
  0xb8, 0x90,  //%.%%%...%..%. 
  0xb8, 0x98,  //%.%%%...%..%% 
  0xb8, 0x88,  //%.%%%...%...% 
  0xbf, 0x88,  //%.%%%%%%%...% 
  0x80, 0x08,  //%...........% 
  0x80, 0x08,  //%...........% 
  0xbf, 0xe8,  //%.%%%%%%%%%.% 
  0xa0, 0x28,  //%.%.......%.% 
  0xa0, 0x28,  //%.%.......%.% 
  0xa0, 0x28,  //%.%.......%.% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0x00, 0x00,  //............. 
  0x00, 0x00,  //............. 


  /*Unicode: U+f0e7 () , Width: 8 */
  0x00,  //........ 
  0x38,  //..%%%... 
  0x78,  //.%%%%... 
  0x70,  //.%%%.... 
  0x70,  //.%%%.... 
  0x7e,  //.%%%%%%. 
  0xfe,  //%%%%%%%. 
  0xfc,  //%%%%%%.. 
  0x8c,  //%...%%.. 
  0x18,  //...%%... 
  0x18,  //...%%... 
  0x10,  //...%.... 
  0x10,  //...%.... 
  0x30,  //..%%.... 
  0x20,  //..%..... 
  0x00,  //........ 


  /*Unicode: U+f0f3 () , Width: 14 */
  0x03, 0x00,  //......%%...... 
  0x07, 0x80,  //.....%%%%..... 
  0x0f, 0xc0,  //....%%%%%%.... 
  0x1f, 0xe0,  //...%%%%%%%%... 
  0x1f, 0xe0,  //...%%%%%%%%... 
  0x1f, 0xe0,  //...%%%%%%%%... 
  0x1f, 0xe0,  //...%%%%%%%%... 
  0x3f, 0xf0,  //..%%%%%%%%%%.. 
  0x3f, 0xf0,  //..%%%%%%%%%%.. 
  0x3f, 0xf0,  //..%%%%%%%%%%.. 
  0x7f, 0xf8,  //.%%%%%%%%%%%%. 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0xff, 0xfc,  //%%%%%%%%%%%%%% 
  0x07, 0x80,  //.....%%%%..... 
  0x03, 0x00,  //......%%...... 
  0x00, 0x00,  //.............. 


  /*Unicode: U+f11c () , Width: 17 */
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0xff, 0xff, 0x00,  //%%%%%%%%%%%%%%%%. 
  0x80, 0x01, 0x00,  //%..............%. 
  0x80, 0x01, 0x00,  //%..............%. 
  0xab, 0x55, 0x00,  //%.%.%.%%.%.%.%.%. 
  0x80, 0x05, 0x00,  //%............%.%. 
  0xb4, 0xad, 0x00,  //%.%%.%..%.%.%%.%. 
  0x80, 0x01, 0x00,  //%..............%. 
  0xaf, 0xf5, 0x00,  //%.%.%%%%%%%%.%.%. 
  0x80, 0x01, 0x00,  //%..............%. 
  0xff, 0xff, 0x00,  //%%%%%%%%%%%%%%%%. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 


  /*Unicode: U+f124 () , Width: 12 */
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 
  0x00, 0x70,  //.........%%% 
  0x01, 0xe0,  //.......%%%%. 
  0x07, 0xe0,  //.....%%%%%%. 
  0x1f, 0xc0,  //...%%%%%%%.. 
  0x7f, 0xc0,  //.%%%%%%%%%.. 
  0xff, 0x80,  //%%%%%%%%%... 
  0x07, 0x80,  //.....%%%%... 
  0x07, 0x00,  //.....%%%.... 
  0x07, 0x00,  //.....%%%.... 
  0x06, 0x00,  //.....%%..... 
  0x06, 0x00,  //.....%%..... 
  0x00, 0x00,  //............ 
  0x00, 0x00,  //............ 


  /*Unicode: U+f15b () , Width: 13 */
  0xfe, 0x00,  //%%%%%%%...... 
  0xfe, 0x40,  //%%%%%%%..%... 
  0xfe, 0x60,  //%%%%%%%..%%.. 
  0xfe, 0x70,  //%%%%%%%..%%%. 
  0xff, 0x00,  //%%%%%%%%..... 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0xff, 0xf8,  //%%%%%%%%%%%%% 
  0x00, 0x00,  //............. 


  /*Unicode: U+f1eb () , Width: 17 */
  0x00, 0x00, 0x00,  //................. 
  0x03, 0xf0, 0x00,  //......%%%%%%..... 
  0x1f, 0xfc, 0x00,  //...%%%%%%%%%%%... 
  0x3e, 0x1f, 0x00,  //..%%%%%....%%%%%. 
  0x70, 0x07, 0x80,  //.%%%.........%%%% 
  0x63, 0xf3, 0x80,  //.%%...%%%%%%..%%% 
  0x0f, 0xfc, 0x00,  //....%%%%%%%%%%... 
  0x1c, 0x1c, 0x00,  //...%%%.....%%%... 
  0x03, 0xe0, 0x00,  //......%%%%%...... 
  0x07, 0xf0, 0x00,  //.....%%%%%%%..... 
  0x02, 0x00, 0x00,  //......%.......... 
  0x00, 0xc0, 0x00,  //........%%....... 
  0x00, 0x80, 0x00,  //........%........ 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 
  0x00, 0x00, 0x00,  //................. 


  /*Unicode: U+f240 () , Width: 20 */
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xbf, 0xff, 0x60,  //%.%%%%%%%%%%%%%%.%%. 
  0xbf, 0xff, 0x20,  //%.%%%%%%%%%%%%%%..%. 
  0xbf, 0xff, 0x20,  //%.%%%%%%%%%%%%%%..%. 
  0xbf, 0xff, 0x20,  //%.%%%%%%%%%%%%%%..%. 
  0xbf, 0xff, 0x60,  //%.%%%%%%%%%%%%%%.%%. 
  0xbf, 0xff, 0x40,  //%.%%%%%%%%%%%%%%.%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 


  /*Unicode: U+f241 () , Width: 20 */
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xbf, 0xf8, 0x60,  //%.%%%%%%%%%%%....%%. 
  0xbf, 0xf8, 0x20,  //%.%%%%%%%%%%%.....%. 
  0xbf, 0xf8, 0x20,  //%.%%%%%%%%%%%.....%. 
  0xbf, 0xf8, 0x20,  //%.%%%%%%%%%%%.....%. 
  0xbf, 0xf8, 0x60,  //%.%%%%%%%%%%%....%%. 
  0xbf, 0xf8, 0x40,  //%.%%%%%%%%%%%....%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 


  /*Unicode: U+f242 () , Width: 20 */
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xbf, 0x80, 0x60,  //%.%%%%%%%........%%. 
  0xbf, 0x80, 0x20,  //%.%%%%%%%.........%. 
  0xbf, 0x80, 0x20,  //%.%%%%%%%.........%. 
  0xbf, 0x80, 0x20,  //%.%%%%%%%.........%. 
  0xbf, 0x80, 0x60,  //%.%%%%%%%........%%. 
  0xbf, 0x80, 0x40,  //%.%%%%%%%........%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 


  /*Unicode: U+f243 () , Width: 20 */
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xbc, 0x00, 0x60,  //%.%%%%...........%%. 
  0xbc, 0x00, 0x20,  //%.%%%%............%. 
  0xbc, 0x00, 0x20,  //%.%%%%............%. 
  0xbc, 0x00, 0x20,  //%.%%%%............%. 
  0xbc, 0x00, 0x60,  //%.%%%%...........%%. 
  0xbc, 0x00, 0x40,  //%.%%%%...........%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 


  /*Unicode: U+f244 () , Width: 20 */
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0x80, 0x00, 0x60,  //%................%%. 
  0x80, 0x00, 0x20,  //%.................%. 
  0x80, 0x00, 0x20,  //%.................%. 
  0x80, 0x00, 0x20,  //%.................%. 
  0x80, 0x00, 0x60,  //%................%%. 
  0x80, 0x00, 0x40,  //%................%.. 
  0x80, 0x00, 0x40,  //%................%.. 
  0xff, 0xff, 0xc0,  //%%%%%%%%%%%%%%%%%%.. 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 
  0x00, 0x00, 0x00,  //.................... 


  /*Unicode: U+f293 () , Width: 12 */
  0x0f, 0x80,  //....%%%%%... 
  0x1f, 0xc0,  //...%%%%%%%.. 
  0x3d, 0xe0,  //..%%%%.%%%%. 
  0x7c, 0xe0,  //.%%%%%..%%%. 
  0x6d, 0x70,  //.%%.%%.%.%%% 
  0x75, 0x70,  //.%%%.%.%.%%% 
  0x78, 0xf0,  //.%%%%...%%%% 
  0x7c, 0xf0,  //.%%%%%..%%%% 
  0x78, 0xf0,  //.%%%%...%%%% 
  0x75, 0x70,  //.%%%.%.%.%%% 
  0x6d, 0x70,  //.%%.%%.%.%%% 
  0x7c, 0xe0,  //.%%%%%..%%%. 
  0x3d, 0xe0,  //..%%%%.%%%%. 
  0x1f, 0xc0,  //...%%%%%%%.. 
  0x0f, 0x80,  //....%%%%%... 
  0x00, 0x00,  //............ 


};


/*Store the glyph descriptions*/
static const lv_font_glyph_dsc_t dejavu_sans_bold_16_glyph_dsc[] = 
{
  {.w_px = 13,	.glyph_index = 0},	/*Unicode: U+f001 ()*/
  {.w_px = 17,	.glyph_index = 32},	/*Unicode: U+f008 ()*/
  {.w_px = 15,	.glyph_index = 80},	/*Unicode: U+f00b ()*/
  {.w_px = 13,	.glyph_index = 112},	/*Unicode: U+f00c ()*/
  {.w_px = 10,	.glyph_index = 144},	/*Unicode: U+f00d ()*/
  {.w_px = 13,	.glyph_index = 176},	/*Unicode: U+f011 ()*/
  {.w_px = 13,	.glyph_index = 208},	/*Unicode: U+f013 ()*/
  {.w_px = 12,	.glyph_index = 240},	/*Unicode: U+f014 ()*/
  {.w_px = 14,	.glyph_index = 272},	/*Unicode: U+f015 ()*/
  {.w_px = 15,	.glyph_index = 304},	/*Unicode: U+f019 ()*/
  {.w_px = 13,	.glyph_index = 336},	/*Unicode: U+f01c ()*/
  {.w_px = 13,	.glyph_index = 368},	/*Unicode: U+f021 ()*/
  {.w_px = 7,	.glyph_index = 400},	/*Unicode: U+f026 ()*/
  {.w_px = 10,	.glyph_index = 416},	/*Unicode: U+f027 ()*/
  {.w_px = 14,	.glyph_index = 448},	/*Unicode: U+f028 ()*/
  {.w_px = 17,	.glyph_index = 480},	/*Unicode: U+f03e ()*/
  {.w_px = 13,	.glyph_index = 528},	/*Unicode: U+f040 ()*/
  {.w_px = 9,	.glyph_index = 560},	/*Unicode: U+f048 ()*/
  {.w_px = 12,	.glyph_index = 592},	/*Unicode: U+f04b ()*/
  {.w_px = 13,	.glyph_index = 624},	/*Unicode: U+f04c ()*/
  {.w_px = 13,	.glyph_index = 656},	/*Unicode: U+f04d ()*/
  {.w_px = 9,	.glyph_index = 688},	/*Unicode: U+f051 ()*/
  {.w_px = 13,	.glyph_index = 720},	/*Unicode: U+f052 ()*/
  {.w_px = 9,	.glyph_index = 752},	/*Unicode: U+f053 ()*/
  {.w_px = 10,	.glyph_index = 784},	/*Unicode: U+f054 ()*/
  {.w_px = 12,	.glyph_index = 816},	/*Unicode: U+f067 ()*/
  {.w_px = 12,	.glyph_index = 848},	/*Unicode: U+f068 ()*/
  {.w_px = 15,	.glyph_index = 880},	/*Unicode: U+f071 ()*/
  {.w_px = 15,	.glyph_index = 912},	/*Unicode: U+f074 ()*/
  {.w_px = 14,	.glyph_index = 944},	/*Unicode: U+f077 ()*/
  {.w_px = 14,	.glyph_index = 976},	/*Unicode: U+f078 ()*/
  {.w_px = 17,	.glyph_index = 1008},	/*Unicode: U+f079 ()*/
  {.w_px = 14,	.glyph_index = 1056},	/*Unicode: U+f07b ()*/
  {.w_px = 15,	.glyph_index = 1088},	/*Unicode: U+f093 ()*/
  {.w_px = 12,	.glyph_index = 1120},	/*Unicode: U+f095 ()*/
  {.w_px = 15,	.glyph_index = 1152},	/*Unicode: U+f0c4 ()*/
  {.w_px = 15,	.glyph_index = 1184},	/*Unicode: U+f0c5 ()*/
  {.w_px = 13,	.glyph_index = 1216},	/*Unicode: U+f0c7 ()*/
  {.w_px = 8,	.glyph_index = 1248},	/*Unicode: U+f0e7 ()*/
  {.w_px = 14,	.glyph_index = 1264},	/*Unicode: U+f0f3 ()*/
  {.w_px = 17,	.glyph_index = 1296},	/*Unicode: U+f11c ()*/
  {.w_px = 12,	.glyph_index = 1344},	/*Unicode: U+f124 ()*/
  {.w_px = 13,	.glyph_index = 1376},	/*Unicode: U+f15b ()*/
  {.w_px = 17,	.glyph_index = 1408},	/*Unicode: U+f1eb ()*/
  {.w_px = 20,	.glyph_index = 1456},	/*Unicode: U+f240 ()*/
  {.w_px = 20,	.glyph_index = 1504},	/*Unicode: U+f241 ()*/
  {.w_px = 20,	.glyph_index = 1552},	/*Unicode: U+f242 ()*/
  {.w_px = 20,	.glyph_index = 1600},	/*Unicode: U+f243 ()*/
  {.w_px = 20,	.glyph_index = 1648},	/*Unicode: U+f244 ()*/
  {.w_px = 12,	.glyph_index = 1696},	/*Unicode: U+f293 ()*/
};

lv_font_t dejavu_sans_bold_16 = 
{
    .unicode_first = LV_SYMBOL_GLYPH_FIRST,	/*First Unicode letter in this font*/
    .unicode_last = LV_SYMBOL_GLYPH_LAST,	/*Last Unicode letter in this font*/
    .h_px = 16,				/*Font height in pixels*/
    .glyph_bitmap = dejavu_sans_bold_16_glyph_bitmap,	/*Bitmap of glyphs*/
    .glyph_dsc = dejavu_sans_bold_16_glyph_dsc,		/*Description of glyphs*/
    .glyph_cnt = 50,			/*Number of glyphs in the font*/
    .unicode_list = NULL,	/*Every character in the font from 'unicode_first' to 'unicode_last'*/
    .get_bitmap = lv_font_get_bitmap_continuous,	/*Function pointer to get glyph's bitmap*/
    .get_width = lv_font_get_width_continuous,	/*Function pointer to get glyph's width*/
    .bpp = 1,				/*Bit per pixel*/
    .monospace = 0,				/*Fix width (0: if not used)*/
    .next_page = NULL,		/*Pointer to a font extension*/
};