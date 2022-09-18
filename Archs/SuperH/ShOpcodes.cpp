#include "Archs/SuperH/ShOpcodes.h"

const tShOpcode shOpcodes[] = {
	// MOVE IMMEDIATE
    { "mov",	"#i8,t",		0b1110000000000000, SHFMT_NI,	SH_ALL, 0 },
	{ "mov",	"i8,t",			0b1110000000000000, SHFMT_NI,	SH_ALL, 0 },
	{ "mov.w",	"i8,t",			0b1001000000000000, SHFMT_ND8,	SH_ALL, SH_IMM16|SH_IMMREL },
	{ "mov.l",	"i8,t",			0b1101000000000000, SHFMT_ND8,	SH_ALL, SH_IMM32|SH_IMMREL },
	//{ "mov.w",	"@(i8,pc),t",	0b1001000000000000, SHFMT_ND8,	SH_ALL, SH_IMM16 },
	//{ "mov.l",	"@(i8,pc),t",	0b1101000000000000, SHFMT_ND8,	SH_ALL, SH_IMM32 },

	// MOVE Data
	{ "mov",	"s,t",			0b0110000000000011, SHFMT_NM,	SH_ALL, 0 },

	{ "mov.b",	"s,@t",			0b0010000000000000, SHFMT_NM,	SH_ALL, 0 },
	{ "mov.w",	"s,@t",			0b0010000000000001, SHFMT_NM,	SH_ALL, 0 },
	{ "mov.l",	"s,@t",			0b0010000000000010, SHFMT_NM,	SH_ALL, 0 },

	{ "mov.b",	"@s,t",			0b0110000000000000, SHFMT_NM,	SH_ALL, 0 },
	{ "mov.w",	"@s,t",			0b0110000000000001, SHFMT_NM,	SH_ALL, 0 },
	{ "mov.l",	"@s,t",			0b0110000000000010, SHFMT_NM,	SH_ALL, 0 },

	{ "mov.b",	"s,@-t",		0b0010000000000100, SHFMT_NM,	SH_ALL, 0 },
	{ "mov.w",	"s,@-t",		0b0010000000000101, SHFMT_NM,	SH_ALL, 0 },
	{ "mov.l",	"s,@-t",		0b0010000000000110, SHFMT_NM,	SH_ALL, 0 },

	{ "mov.b",	"@s+,t",		0b0110000000000100, SHFMT_NM,	SH_ALL, 0 },
	{ "mov.w",	"@s+,t",		0b0110000000000101, SHFMT_NM,	SH_ALL, 0 },
	{ "mov.l",	"@s+,t",		0b0110000000000110, SHFMT_NM,	SH_ALL, 0 },

	{ "mov.b",	"r0,@(i4,t)",	0b1000000000000000, SHFMT_ND4,	SH_ALL, SH_FREG },
	{ "mov.w",	"r0,@(i4,t)",	0b1000000100000000, SHFMT_ND4,	SH_ALL, SH_IMM16|SH_FREG },
	{ "mov.l",	"s,@(i4,t)",	0b0001000000000000, SHFMT_NMD,	SH_ALL, SH_IMM32|SH_FREG },

	{ "mov.b",	"@(i4,s),r0",	0b1000010000000000, SHFMT_ND4,	SH_ALL, SH_FREG },
	{ "mov.w",	"@(i4,s),r0",	0b1000010100000000, SHFMT_ND4,	SH_ALL, SH_IMM16|SH_FREG },
	{ "mov.l",	"@(i4,s),t",	0b0101000000000000, SHFMT_NMD,	SH_ALL, SH_IMM32|SH_FREG },

	{ "mov.b",	"s,@(r0,t)",	0b0000000000000100, SHFMT_NM,	SH_ALL, SH_FREG },
	{ "mov.w",	"s,@(r0,t)",	0b0000000000000101, SHFMT_NM,	SH_ALL, SH_FREG },
	{ "mov.l",	"s,@(r0,t)",	0b0000000000000110, SHFMT_NM,	SH_ALL, SH_FREG },

	{ "mov.b",	"@(r0,s),t",	0b0000000000001100, SHFMT_NM,	SH_ALL, SH_FREG },
	{ "mov.w",	"@(r0,s),t",	0b0000000000001101, SHFMT_NM,	SH_ALL, SH_FREG },
	{ "mov.l",	"@(r0,s),t",	0b0000000000001110, SHFMT_NM,	SH_ALL, SH_FREG },

	{ "mov.b",	"r0,@(i8,gbr)",	0b1100000000000000, SHFMT_D,	SH_ALL, SH_FREG },
	{ "mov.w",	"r0,@(i8,gbr)",	0b1100000100000000, SHFMT_D,	SH_ALL, SH_IMM16|SH_FREG },
	{ "mov.l",	"r0,@(i8,gbr)",	0b1100001000000000, SHFMT_D,	SH_ALL, SH_IMM32|SH_FREG },

	{ "mov.b",	"@(i8,gbr),r0",	0b1100010000000000, SHFMT_D,	SH_ALL, SH_FREG },
	{ "mov.w",	"@(i8,gbr),r0",	0b1100010100000000, SHFMT_D,	SH_ALL, SH_IMM16|SH_FREG },
	{ "mov.l",	"@(i8,gbr),r0",	0b1100011000000000, SHFMT_D,	SH_ALL, SH_IMM32|SH_FREG },

	{ "mova",	"i8,r0",		0b1100011000000000, SHFMT_D,	SH_ALL, SH_IMM32|SH_FREG|SH_IMMREL },
	{ "movt",	"t",			0b0000000000101001, SHFMT_N,	SH_ALL, 0 },
	{ "swap.b",	"s,t",			0b0110000000001000, SHFMT_NM,	SH_ALL, 0 },
	{ "swap.w",	"s,t",			0b0110000000001001, SHFMT_NM,	SH_ALL, 0 },
	{ "xtrct",	"s,t",			0b0110000000001101, SHFMT_NM,	SH_ALL, 0 },

	{ "add",	"s,t",			0b0011000000001100, SHFMT_NM,	SH_ALL, 0 },
	{ "add",	"#i8,t",		0b0111000000000000, SHFMT_NI,	SH_ALL, 0 },
	{ "addc",	"s,t",			0b0011000000001110, SHFMT_NM,	SH_ALL, 0 },
	{ "addv",	"s,t",			0b0011000000001111, SHFMT_NM,	SH_ALL, 0 },

	{ "cmp/eq",	"#i8,r0",		0b1000100000000000, SHFMT_I,	SH_ALL, SH_FREG },
	{ "cmp/eq",	"s,t",			0b0011000000000000, SHFMT_NM,	SH_ALL, 0 },
	{ "cmp/hs",	"s,t",			0b0011000000000010, SHFMT_NM,	SH_ALL, 0 },
	{ "cmp/ge",	"s,t",			0b0011000000000011, SHFMT_NM,	SH_ALL, 0 },
	{ "cmp/hi",	"s,t",			0b0011000000000110, SHFMT_NM,	SH_ALL, 0 },
	{ "cmp/gt",	"s,t",			0b0011000000000111, SHFMT_NM,	SH_ALL, 0 },
	{ "cmp/pl",	"t",			0b0100000000010101, SHFMT_N,	SH_ALL, 0 },
	{ "cmp/pz",	"t",			0b0100000000010001, SHFMT_N,	SH_ALL, 0 },
	{ "cmp/str","s,t",			0b0010000000001100, SHFMT_NM,	SH_ALL, 0 },
	{ "div1",	"s,t",			0b0011000000000100, SHFMT_NM,	SH_ALL, 0 },
	{ "div0s",	"s,t",			0b0011000000000111, SHFMT_NM,	SH_ALL, 0 },
	{ "div0u",	"",				0b0000000000011001, SHFMT_0,	SH_ALL, 0 },

	{ "dmuls.l","s,t",			0b0011000000001101, SHFMT_NM,	SH_SUPERH2, 0 },
	{ "dmulu.l","s,t",			0b0011000000000101, SHFMT_NM,	SH_SUPERH2, 0 },
	{ "dt",		"t",			0b0100000000010000, SHFMT_N,	SH_SUPERH2, 0 },
	{ "exts.b",	"s,t",			0b0110000000001110, SHFMT_NM,	SH_ALL, 0 },
	{ "exts.w",	"s,t",			0b0110000000001111, SHFMT_NM,	SH_ALL, 0 },
	{ "extu.b",	"s,t",			0b0110000000001100, SHFMT_NM,	SH_ALL, 0 },
	{ "extu.w",	"s,t",			0b0110000000001101, SHFMT_NM,	SH_ALL, 0 },
	{ "mac.l",	"@s+,@t+",		0b0000000000001111, SHFMT_NM,	SH_SUPERH2, 0 },
	{ "mac.w",	"@s+,@t+",		0b0100000000001111, SHFMT_NM,	SH_ALL, 0 },
	{ "mul.l",	"s,t",			0b0000000000000111, SHFMT_NM,	SH_SUPERH2, 0 },
	{ "muls.w",	"s,t",			0b0010000000001111, SHFMT_NM,	SH_ALL, 0 },
	{ "mulu.w",	"s,t",			0b0010000000001110, SHFMT_NM,	SH_ALL, 0 },
	{ "neg",	"s,t",			0b0110000000001011, SHFMT_NM,	SH_ALL, 0 },
	{ "negc",	"s,t",			0b0110000000001010, SHFMT_NM,	SH_ALL, 0 },
	{ "sub",	"s,t",			0b0011000000001000, SHFMT_NM,	SH_ALL, 0 },
	{ "subc",	"s,t",			0b0011000000001010, SHFMT_NM,	SH_ALL, 0 },
	{ "subv",	"s,t",			0b0011000000001011, SHFMT_NM,	SH_ALL, 0 },

	{ "and",	"s,t",			0b0010000000001001, SHFMT_NM,	SH_ALL, 0 },
	{ "and",	"#i8,r0",		0b1100100100000000, SHFMT_I,	SH_ALL, SH_FREG },
	{ "and.b",	"#i8,@(r0,gbr)",0b1100110100000000, SHFMT_I,	SH_ALL, SH_FREG },
	{ "not",	"s,t",			0b0110000000000111, SHFMT_NM,	SH_ALL, 0 },
	{ "or",		"s,t",			0b0010000000001011, SHFMT_NM,	SH_ALL, 0 },
	{ "or",		"#i8,r0",		0b1100101100000000, SHFMT_I,	SH_ALL, SH_FREG },
	{ "or.b",	"#i8,@(r0,gbr)",0b1100111100000000, SHFMT_I,	SH_ALL, SH_FREG },
	{ "tas.b",	"@t",			0b0100000000011011, SHFMT_N,	SH_ALL, 0 },
	{ "tst",	"s,t",			0b0010000000001000, SHFMT_NM,	SH_ALL, 0 },
	{ "tst",	"#i8,r0",		0b1100100000000000, SHFMT_I,	SH_ALL, SH_FREG },
	{ "tst.b",	"#i8,@(r0,gbr)",0b1100110000000000, SHFMT_I,	SH_ALL, SH_FREG },
	{ "xor",	"s,t",			0b0010000000001010, SHFMT_NM,	SH_ALL, 0 },
	{ "xor",	"#i8,r0",		0b1100101000000000, SHFMT_I,	SH_ALL, SH_FREG },
	{ "xor.b",	"#i8,@(r0,gbr)",0b1100111000000000, SHFMT_I,	SH_ALL, SH_FREG },

	{ "rotl",	"t",			0b0100000000000100, SHFMT_N,	SH_ALL, 0 },
	{ "rotr",	"t",			0b0100000000000101, SHFMT_N,	SH_ALL, 0 },
	{ "rotcl",	"t",			0b0100000000100100, SHFMT_N,	SH_ALL, 0 },
	{ "rotcr",	"t",			0b0100000000100101, SHFMT_N,	SH_ALL, 0 },
	{ "shal",	"t",			0b0100000000100000, SHFMT_N,	SH_ALL, 0 },
	{ "shar",	"t",			0b0100000000100001, SHFMT_N,	SH_ALL, 0 },
	{ "shll",	"t",			0b0100000000000000, SHFMT_N,	SH_ALL, 0 },
	{ "shlr",	"t",			0b0100000000000001, SHFMT_N,	SH_ALL, 0 },
	{ "shll2",	"t",			0b0100000000001000, SHFMT_N,	SH_ALL, 0 },
	{ "shlr2",	"t",			0b0100000000001001, SHFMT_N,	SH_ALL, 0 },
	{ "shll8",	"t",			0b0100000000011000, SHFMT_N,	SH_ALL, 0 },
	{ "shlr8",	"t",			0b0100000000011001, SHFMT_N,	SH_ALL, 0 },
	{ "shll16",	"t",			0b0100000000101000, SHFMT_N,	SH_ALL, 0 },
	{ "shlr16",	"t",			0b0100000000101001, SHFMT_N,	SH_ALL, 0 },

	{ "bf",		"i8",			0b1000101100000000, SHFMT_D,	SH_ALL, 	SH_IMM16|SH_IMMREL|SH_IMMSIGNED },
	{ "bf/s",	"i8",			0b1000111100000000, SHFMT_D,	SH_SUPERH2, SH_IMM16|SH_IMMREL|SH_IMMSIGNED },
	{ "bt",		"i8",			0b1000100100000000, SHFMT_D,	SH_ALL, 	SH_IMM16|SH_IMMREL|SH_IMMSIGNED },
	{ "bt/s",	"i8",			0b1000110100000000, SHFMT_D,	SH_SUPERH2, SH_IMM16|SH_IMMREL|SH_IMMSIGNED },
	{ "bra",	"i12",			0b1010000000000000, SHFMT_D12,	SH_ALL, 	SH_IMM16|SH_IMMREL|SH_IMMSIGNED },
	{ "braf",	"s",			0b0000000000100011, SHFMT_M,	SH_SUPERH2,	0 },
	{ "bsr",	"i12",			0b1011000000000000, SHFMT_D12,	SH_ALL, 	SH_IMM16|SH_IMMREL|SH_IMMSIGNED },
	{ "bsrf",	"s",			0b0000000000000011, SHFMT_M,	SH_SUPERH2,	0 },
	{ "jmp",	"s",			0b0100000000101011, SHFMT_M,	SH_ALL, 0 },
	{ "jsr",	"s",			0b0100000000001011, SHFMT_M,	SH_ALL, 0 },
	{ "rts",	"",				0b0000000000001011, SHFMT_0,	SH_ALL, 0 },

	{ "clrt",	"",				0b0000000000001000, SHFMT_0,	SH_ALL, 0 },
	{ "clrmac",	"",				0b0000000000101000, SHFMT_0,	SH_ALL, 0 },

	{ "ldc",	"s,sr",			0b0100000000001110, SHFMT_M,	SH_ALL, SH_FREG },
	{ "ldc",	"s,gbr",		0b0100000000011110, SHFMT_M,	SH_ALL, SH_FREG },
	{ "ldc",	"s,vbr"	,		0b0100000000101110, SHFMT_M,	SH_ALL, SH_FREG },
	{ "ldc.l",	"@s+,sr",		0b0100000000000111, SHFMT_M,	SH_ALL, SH_FREG },
	{ "ldc.l",	"@s+,gbr",		0b0100000000010111, SHFMT_M,	SH_ALL, SH_FREG },
	{ "ldc.l",	"@s+,vbr",		0b0100000000100111, SHFMT_M,	SH_ALL, SH_FREG },
	{ "lds",	"s,mach",		0b0100000000001010, SHFMT_M,	SH_ALL, SH_FREG },
	{ "lds",	"s,macl",		0b0100000000011010, SHFMT_M,	SH_ALL, SH_FREG },
	{ "lds",	"s,pr",			0b0100000000101010, SHFMT_M,	SH_ALL, SH_FREG },
	{ "lds.l",	"@s+,mach",		0b0100000000000110, SHFMT_M,	SH_ALL, SH_FREG },
	{ "lds.l",	"@s+,macl",		0b0100000000010110, SHFMT_M,	SH_ALL, SH_FREG },
	{ "lds.l",	"@s+,pr",		0b0100000000100110, SHFMT_M,	SH_ALL, SH_FREG },

	{ "nop",	"",				0b0000000000001001, SHFMT_0,	SH_ALL, 0 },
	{ "rte",	"",				0b0000000000101011, SHFMT_0,	SH_ALL, 0 },
	{ "sett",	"",				0b0000000000011000, SHFMT_0,	SH_ALL, 0 },
	{ "sleep",	"",				0b0000000000011011, SHFMT_0,	SH_ALL, 0 },

	{ "stc",	"sr,t",			0b0000000000000010, SHFMT_N,	SH_ALL, SH_FREG },
	{ "stc",	"gbr,t",		0b0000000000010010, SHFMT_N,	SH_ALL, SH_FREG },
	{ "stc",	"vbr,t",		0b0000000000100010, SHFMT_N,	SH_ALL, SH_FREG },
	{ "stc.l",	"sr,@-t",		0b0100000000000011, SHFMT_N,	SH_ALL, SH_FREG },
	{ "stc.l",	"gbr,@-t",		0b0100000000010011, SHFMT_N,	SH_ALL, SH_FREG },
	{ "stc.l",	"vbr,@-t",		0b0100000000100011, SHFMT_N,	SH_ALL, SH_FREG },
	{ "sts",	"mach,t",		0b0000000000001010, SHFMT_N,	SH_ALL, SH_FREG },
	{ "sts",	"macl,t",		0b0000000000011010, SHFMT_N,	SH_ALL, SH_FREG },
	{ "sts",	"pr,t",			0b0000000000101010, SHFMT_N,	SH_ALL, SH_FREG },
	{ "sts.l",	"mach,@-t",		0b0100000000000010, SHFMT_N,	SH_ALL, SH_FREG },
	{ "sts.l",	"macl,@-t",		0b0100000000010010, SHFMT_N,	SH_ALL, SH_FREG },
	{ "sts.l",	"pr,@-t",		0b0100000000100010, SHFMT_N,	SH_ALL, SH_FREG },

	{ "trapa",	"#i8",			0b1100001100000000, SHFMT_I,	SH_ALL, SH_IMM32 },
	// END
    { nullptr, nullptr, 0, 0, 0, 0 },
};

const ShArchDefinition shArchs[] = {
	// SHARCH_SATURN
	{ "SATURN",		SH_SUPERH2|SH_SUPERH1, 0, 0 },
	// SHARCH_INVALID
	{ "Invalid",	0, 0 },
};
