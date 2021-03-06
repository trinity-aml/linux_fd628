#ifndef __GLYPHS__
#define __GLYPHS__

typedef unsigned char	u_int8;
typedef unsigned short	u_int16;
typedef unsigned long	u_int32;

/** Character conversion of digital tube display code*/
typedef struct _led_bitmap {
	u_int8 character;
	u_int8 bitmap;
}led_bitmap;

/** Character conversion of digital tube display code array*/

#define a1 0x01
#define b1 0x02
#define c1 0x04
#define d1 0x08
#define e1 0x10
#define f1 0x20
#define g1 0x40

static const led_bitmap LED_decode_tab1[] = {
/*
 * Most displays have 5 sections, 1 - 4 are the digits,
 * the 5th is mapped to indicators (5A-5G).
 * The 7 segment sequences are shown below.
 *
 *  dp
 *       +--d/08--+
 *       |        |
 *  c/04 |        | e/10
 *       +--g/40--+
 *       |        |
 *  b/02 |        | f/20
 *       +--a/01--+
 *
 */

	{0,   a1|b1|c1|d1|e1|f1   },	{1,   e1|f1               },
	{2,   a1|b1|d1|e1|g1      },	{3,   a1|d1|e1|f1|g1      },
	{4,   c1|e1|f1|g1         },	{5,   a1|c1|d1|f1|g1      },
	{6,   a1|b1|c1|d1|f1|g1   },	{7,   d1|e1|f1            },
	{8,   a1|b1|c1|d1|e1|f1|g1},	{9,   a1|c1|d1|e1|f1|g1   },

	{'0', a1|b1|c1|d1|e1|f1   },	{'1', e1|f1               },
	{'2', a1|b1|d1|e1|g1      },	{'3', a1|d1|e1|f1|g1      },
	{'4', c1|e1|f1|g1         },	{'5', a1|c1|d1|f1|g1      },
	{'6', a1|b1|c1|d1|f1|g1   },	{'7', d1|e1|f1            },
	{'8', a1|b1|c1|d1|e1|f1|g1},	{'9', a1|c1|d1|e1|f1|g1   },

	{'a', b1|c1|d1|e1|f1|g1   },	{'A', b1|c1|d1|e1|f1|g1   },
	{'b', a1|b1|c1|f1|g1      },	{'B', a1|b1|c1|f1|g1      },
	{'c', a1|b1|c1|d1         },	{'C', a1|b1|c1|d1         },
	{'d', a1|b1|e1|f1|g1      },	{'D', a1|b1|e1|f1|g1      },
	{'e', a1|b1|c1|d1|g1      },	{'E', a1|b1|c1|d1|g1      },
	{'f', b1|c1|d1|g1         },	{'F', b1|c1|d1|g1         },
	{'g', a1|b1|c1|d1|f1      },	{'G', a1|b1|c1|d1|f1      },
	{'h', b1|c1|f1|g1         },	{'H', b1|c1|f1|g1         },
	{'i', b1|c1               },	{'I', b1|c1               },
	{'j', a1|b1|e1|f1         },	{'J', a1|b1|e1|f1         },
	{'k', b1|c1|d1|f1|g1      },	{'K', b1|c1|d1|f1|g1      },
	{'l', a1|b1|c1            },	{'L', a1|b1|c1            },
	{'m', b1|d1|f1            },	{'M', b1|d1|f1            },
	{'n', b1|c1|d1|e1|f1      },	{'N', b1|c1|d1|e1|f1      },
	{'o', a1|b1|f1|g1         },	{'O', a1|b1|f1|g1         },
	{'p', b1|c1|d1|e1|g1      },	{'P', b1|c1|d1|e1|g1      },
	{'q', c1|d1|e1|f1|g1      },	{'Q', c1|d1|e1|f1|g1      },
	{'r', b1|g1               },	{'R', b1|g1               },
	{'s', a1|c1|d1|f1|g1      },	{'S', a1|c1|d1|f1|g1      },
	{'t', a1|b1|c1|g1         },	{'T', a1|b1|c1|g1         },
	{'u', a1|b1|f1            },	{'U', a1|b1|f1            },
	{'v', a1|b1|c1|e1|f1      },	{'V', a1|b1|c1|e1|f1      },
	{'w', a1|c1|e1            },	{'W', a1|c1|e1            },
	{'x', b1|c1|e1|f1|g1      },	{'X', b1|c1|e1|f1|g1      },
	{'y', a1|c1|e1|f1|g1      },	{'Y', a1|c1|e1|f1|g1      },
	{'z', a1|b1|d1|e1|g1      },	{'Z', a1|b1|d1|e1|g1      },
	{'_', a1}, {'-', g1}, {' ', 0}, { 0xB0, c1|d1|e1|g1 }
};

#define a2 0x08
#define b2 0x10
#define c2 0x20
#define d2 0x01
#define e2 0x02
#define f2 0x04
#define g2 0x40

static const led_bitmap LED_decode_tab2[] = {
/*
 *
 *  dp
 *       +--d/01--+
 *       |        |
 *  c/20 |        | e/02
 *       +--g/40--+
 *       |        |
 *  b/10 |        | f/04
 *       +--a/08--+
 *
 */

	{0,   a2|b2|c2|d2|e2|f2   },	{1,   e2|f2               },
	{2,   a2|b2|d2|e2|g2      },	{3,   a2|d2|e2|f2|g2      },
	{4,   c2|e2|f2|g2         },	{5,   a2|c2|d2|f2|g2      },
	{6,   a2|b2|c2|d2|f2|g2   },	{7,   d2|e2|f2            },
	{8,   a2|b2|c2|d2|e2|f2|g2},	{9,   a2|c2|d2|e2|f2|g2   },

	{'0', a2|b2|c2|d2|e2|f2   },	{'1', e2|f2               },
	{'2', a2|b2|d2|e2|g2      },	{'3', a2|d2|e2|f2|g2      },
	{'4', c2|e2|f2|g2         },	{'5', a2|c2|d2|f2|g2      },
	{'6', a2|b2|c2|d2|f2|g2   },	{'7', d2|e2|f2            },
	{'8', a2|b2|c2|d2|e2|f2|g2},	{'9', a2|c2|d2|e2|f2|g2   },

	{'a', b2|c2|d2|e2|f2|g2   },	{'A', b2|c2|d2|e2|f2|g2   },
	{'b', a2|b2|c2|f2|g2      },	{'B', a2|b2|c2|f2|g2      },
	{'c', a2|b2|c2|d2         },	{'C', a2|b2|c2|d2         },
	{'d', a2|b2|e2|f2|g2      },	{'D', a2|b2|e2|f2|g2      },
	{'e', a2|b2|c2|d2|g2      },	{'E', a2|b2|c2|d2|g2      },
	{'f', b2|c2|d2|g2         },	{'F', b2|c2|d2|g2         },
	{'g', a2|b2|c2|d2|f2      },	{'G', a2|b2|c2|d2|f2      },
	{'h', b2|c2|f2|g2         },	{'H', b2|c2|f2|g2         },
	{'i', b2|c2               },	{'I', b2|c2               },
	{'j', a2|b2|e2|f2         },	{'J', a2|b2|e2|f2         },
	{'k', b2|c2|d2|f2|g2      },	{'K', b2|c2|d2|f2|g2      },
	{'l', a2|b2|c2            },	{'L', a2|b2|c2            },
	{'m', b2|d2|f2            },	{'M', b2|d2|f2            },
	{'n', b2|c2|d2|e2|f2      },	{'N', b2|c2|d2|e2|f2      },
	{'o', a2|b2|f2|g2         },	{'O', a2|b2|f2|g2         },
	{'p', b2|c2|d2|e2|g2      },	{'P', b2|c2|d2|e2|g2      },
	{'q', c2|d2|e2|f2|g2      },	{'Q', c2|d2|e2|f2|g2      },
	{'r', b2|g2               },	{'R', b2|g2               },
	{'s', a2|c2|d2|f2|g2      },	{'S', a2|c2|d2|f2|g2      },
	{'t', a2|b2|c2|g2         },	{'T', a2|b2|c2|g2         },
	{'u', a2|b2|f2            },	{'U', a2|b2|f2            },
	{'v', a2|b2|c2|e2|f2      },	{'V', a2|b2|c2|e2|f2      },
	{'w', a2|c2|e2            },	{'W', a2|c2|e2            },
	{'x', b2|c2|e2|f2|g2      },	{'X', b2|c2|e2|f2|g2      },
	{'y', a2|c2|e2|f2|g2      },	{'Y', a2|c2|e2|f2|g2      },
	{'z', a2|b2|d2|e2|g2      },	{'Z', a2|b2|d2|e2|g2      },
	{'_', a2}, {'-', g2}, {' ', 0}, { 0xB0, c2|d2|e2|g2 }
};

#define a3 0x01
#define b3 0x08
#define c3 0x20
#define d3 0x02
#define e3 0x10
#define f3 0x04
#define g3 0x40

static const led_bitmap LED_decode_tab3[] = {
/*
 *
 *  dp
 *       +--d/02--+
 *       |        |
 *  c/20 |        | e/10
 *       +--g/40--+
 *       |        |
 *  b/08 |        | f/04
 *       +--a/01--+
 *
 */

	{0,   a3|b3|c3|d3|e3|f3   },	{1,   e3|f3               },
	{2,   a3|b3|d3|e3|g3      },	{3,   a3|d3|e3|f3|g3      },
	{4,   c3|e3|f3|g3         },	{5,   a3|c3|d3|f3|g3      },
	{6,   a3|b3|c3|d3|f3|g3   },	{7,   d3|e3|f3            },
	{8,   a3|b3|c3|d3|e3|f3|g3},	{9,   a3|c3|d3|e3|f3|g3   },

	{'0', a3|b3|c3|d3|e3|f3   },	{'1', e3|f3               },
	{'2', a3|b3|d3|e3|g3      },	{'3', a3|d3|e3|f3|g3      },
	{'4', c3|e3|f3|g3         },	{'5', a3|c3|d3|f3|g3      },
	{'6', a3|b3|c3|d3|f3|g3   },	{'7', d3|e3|f3            },
	{'8', a3|b3|c3|d3|e3|f3|g3},	{'9', a3|c3|d3|e3|f3|g3   },

	{'a', b3|c3|d3|e3|f3|g3   },	{'A', b3|c3|d3|e3|f3|g3   },
	{'b', a3|b3|c3|f3|g3      },	{'B', a3|b3|c3|f3|g3      },
	{'c', a3|b3|c3|d3         },	{'C', a3|b3|c3|d3         },
	{'d', a3|b3|e3|f3|g3      },	{'D', a3|b3|e3|f3|g3      },
	{'e', a3|b3|c3|d3|g3      },	{'E', a3|b3|c3|d3|g3      },
	{'f', b3|c3|d3|g3         },	{'F', b3|c3|d3|g3         },
	{'g', a3|b3|c3|d3|f3      },	{'G', a3|b3|c3|d3|f3      },
	{'h', b3|c3|f3|g3         },	{'H', b3|c3|f3|g3         },
	{'i', b3|c3               },	{'I', b3|c3               },
	{'j', a3|b3|e3|f3         },	{'J', a3|b3|e3|f3         },
	{'k', b3|c3|d3|f3|g3      },	{'K', b3|c3|d3|f3|g3      },
	{'l', a3|b3|c3            },	{'L', a3|b3|c3            },
	{'m', b3|d3|f3            },	{'M', b3|d3|f3            },
	{'n', b3|c3|d3|e3|f3      },	{'N', b3|c3|d3|e3|f3      },
	{'o', a3|b3|f3|g3         },	{'O', a3|b3|f3|g3         },
	{'p', b3|c3|d3|e3|g3      },	{'P', b3|c3|d3|e3|g3      },
	{'q', c3|d3|e3|f3|g3      },	{'Q', c3|d3|e3|f3|g3      },
	{'r', b3|g3               },	{'R', b3|g3               },
	{'s', a3|c3|d3|f3|g3      },	{'S', a3|c3|d3|f3|g3      },
	{'t', a3|b3|c3|g3         },	{'T', a3|b3|c3|g3         },
	{'u', a3|b3|f3            },	{'U', a3|b3|f3            },
	{'v', a3|b3|c3|e3|f3      },	{'V', a3|b3|c3|e3|f3      },
	{'w', a3|c3|e3            },	{'W', a3|c3|e3            },
	{'x', b3|c3|e3|f3|g3      },	{'X', b3|c3|e3|f3|g3      },
	{'y', a3|c3|e3|f3|g3      },	{'Y', a3|c3|e3|f3|g3      },
	{'z', a3|b3|d3|e3|g3      },	{'Z', a3|b3|d3|e3|g3      },
	{'_', a3}, {'-', g3}, {' ', 0}, { 0xB0, c3|d3|e3|g3 }
};

#endif
