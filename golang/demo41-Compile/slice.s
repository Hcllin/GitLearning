"".main STEXT nosplit size=2 args=0x0 locals=0x0
	0x0000 00000 (slice.go:11)	TEXT	"".main(SB), NOSPLIT|ABIInternal, $0-0
	0x0000 00000 (slice.go:11)	FUNCDATA	$0, gclocals·33cdeccccebe80329f1fdbee7f5874cb(SB)
	0x0000 00000 (slice.go:11)	FUNCDATA	$1, gclocals·33cdeccccebe80329f1fdbee7f5874cb(SB)
	0x0000 00000 (slice.go:11)	FUNCDATA	$3, gclocals·33cdeccccebe80329f1fdbee7f5874cb(SB)
	0x0000 00000 (slice.go:13)	PCDATA	$2, $0
	0x0000 00000 (slice.go:13)	PCDATA	$0, $0
	0x0000 00000 (slice.go:13)	XCHGL	AX, AX
	0x0001 00001 (slice.go:14)	RET
	0x0000 90 c3                                            ..
"".f STEXT nosplit size=53 args=0x20 locals=0x8
	0x0000 00000 (slice.go:16)	TEXT	"".f(SB), NOSPLIT|ABIInternal, $8-32
	0x0000 00000 (slice.go:16)	SUBQ	$8, SP
	0x0004 00004 (slice.go:16)	MOVQ	BP, (SP)
	0x0008 00008 (slice.go:16)	LEAQ	(SP), BP
	0x000c 00012 (slice.go:16)	FUNCDATA	$0, gclocals·1a65e721a2ccc325b382662e7ffee780(SB)
	0x000c 00012 (slice.go:16)	FUNCDATA	$1, gclocals·69c1753bd5f81501d95132d08af04464(SB)
	0x000c 00012 (slice.go:16)	FUNCDATA	$3, gclocals·9fb7f0986f647f17cb53dda1484e0f7a(SB)
	0x000c 00012 (slice.go:17)	PCDATA	$2, $0
	0x000c 00012 (slice.go:17)	PCDATA	$0, $0
	0x000c 00012 (slice.go:17)	MOVQ	"".s+24(SP), AX
	0x0011 00017 (slice.go:17)	CMPQ	AX, $1
	0x0015 00021 (slice.go:17)	JLS	46
	0x0017 00023 (slice.go:17)	PCDATA	$2, $1
	0x0017 00023 (slice.go:17)	PCDATA	$0, $1
	0x0017 00023 (slice.go:17)	MOVQ	"".s+16(SP), AX
	0x001c 00028 (slice.go:17)	PCDATA	$2, $0
	0x001c 00028 (slice.go:17)	MOVQ	8(AX), AX
	0x0020 00032 (slice.go:17)	MOVQ	AX, "".~r1+40(SP)
	0x0025 00037 (slice.go:17)	MOVQ	(SP), BP
	0x0029 00041 (slice.go:17)	ADDQ	$8, SP
	0x002d 00045 (slice.go:17)	RET
	0x002e 00046 (slice.go:17)	CALL	runtime.panicindex(SB)
	0x0033 00051 (slice.go:17)	UNDEF
	0x0000 48 83 ec 08 48 89 2c 24 48 8d 2c 24 48 8b 44 24  H...H.,$H.,$H.D$
	0x0010 18 48 83 f8 01 76 17 48 8b 44 24 10 48 8b 40 08  .H...v.H.D$.H.@.
	0x0020 48 89 44 24 28 48 8b 2c 24 48 83 c4 08 c3 e8 00  H.D$(H.,$H......
	0x0030 00 00 00 0f 0b                                   .....
	rel 47+4 t=8 runtime.panicindex+0
"".init STEXT size=80 args=0x0 locals=0x8
	0x0000 00000 (<autogenerated>:1)	TEXT	"".init(SB), ABIInternal, $8-0
	0x0000 00000 (<autogenerated>:1)	MOVQ	(TLS), CX
	0x0009 00009 (<autogenerated>:1)	CMPQ	SP, 16(CX)
	0x000d 00013 (<autogenerated>:1)	JLS	73
	0x000f 00015 (<autogenerated>:1)	SUBQ	$8, SP
	0x0013 00019 (<autogenerated>:1)	MOVQ	BP, (SP)
	0x0017 00023 (<autogenerated>:1)	LEAQ	(SP), BP
	0x001b 00027 (<autogenerated>:1)	FUNCDATA	$0, gclocals·33cdeccccebe80329f1fdbee7f5874cb(SB)
	0x001b 00027 (<autogenerated>:1)	FUNCDATA	$1, gclocals·33cdeccccebe80329f1fdbee7f5874cb(SB)
	0x001b 00027 (<autogenerated>:1)	FUNCDATA	$3, gclocals·33cdeccccebe80329f1fdbee7f5874cb(SB)
	0x001b 00027 (<autogenerated>:1)	PCDATA	$2, $0
	0x001b 00027 (<autogenerated>:1)	PCDATA	$0, $0
	0x001b 00027 (<autogenerated>:1)	MOVBLZX	"".initdone·(SB), AX
	0x0022 00034 (<autogenerated>:1)	CMPB	AL, $1
	0x0025 00037 (<autogenerated>:1)	JLS	48
	0x0027 00039 (<autogenerated>:1)	PCDATA	$2, $-2
	0x0027 00039 (<autogenerated>:1)	PCDATA	$0, $-2
	0x0027 00039 (<autogenerated>:1)	MOVQ	(SP), BP
	0x002b 00043 (<autogenerated>:1)	ADDQ	$8, SP
	0x002f 00047 (<autogenerated>:1)	RET
	0x0030 00048 (<autogenerated>:1)	JNE	57
	0x0032 00050 (<autogenerated>:1)	PCDATA	$2, $0
	0x0032 00050 (<autogenerated>:1)	PCDATA	$0, $0
	0x0032 00050 (<autogenerated>:1)	CALL	runtime.throwinit(SB)
	0x0037 00055 (<autogenerated>:1)	UNDEF
	0x0039 00057 (<autogenerated>:1)	MOVB	$2, "".initdone·(SB)
	0x0040 00064 (<autogenerated>:1)	MOVQ	(SP), BP
	0x0044 00068 (<autogenerated>:1)	ADDQ	$8, SP
	0x0048 00072 (<autogenerated>:1)	RET
	0x0049 00073 (<autogenerated>:1)	NOP
	0x0049 00073 (<autogenerated>:1)	PCDATA	$0, $-1
	0x0049 00073 (<autogenerated>:1)	PCDATA	$2, $-1
	0x0049 00073 (<autogenerated>:1)	CALL	runtime.morestack_noctxt(SB)
	0x004e 00078 (<autogenerated>:1)	JMP	0
	0x0000 64 48 8b 0c 25 00 00 00 00 48 3b 61 10 76 3a 48  dH..%....H;a.v:H
	0x0010 83 ec 08 48 89 2c 24 48 8d 2c 24 0f b6 05 00 00  ...H.,$H.,$.....
	0x0020 00 00 80 f8 01 76 09 48 8b 2c 24 48 83 c4 08 c3  .....v.H.,$H....
	0x0030 75 07 e8 00 00 00 00 0f 0b c6 05 00 00 00 00 02  u...............
	0x0040 48 8b 2c 24 48 83 c4 08 c3 e8 00 00 00 00 eb b0  H.,$H...........
	rel 5+4 t=16 TLS+0
	rel 30+4 t=15 "".initdone·+0
	rel 51+4 t=8 runtime.throwinit+0
	rel 59+4 t=15 "".initdone·+-1
	rel 74+4 t=8 runtime.morestack_noctxt+0
go.info."".f$abstract SDWARFINFO dupok size=15
	0x0000 04 2e 66 00 01 01 11 73 00 00 00 00 00 00 00     ..f....s.......
	rel 10+4 t=28 go.info.[]int+0
go.loc."".main SDWARFLOC size=0
go.info."".main SDWARFINFO size=33
	0x0000 03 22 22 2e 6d 61 69 6e 00 00 00 00 00 00 00 00  ."".main........
	0x0010 00 00 00 00 00 00 00 00 00 01 9c 00 00 00 00 01  ................
	0x0020 00                                               .
	rel 9+8 t=1 "".main+0
	rel 17+8 t=1 "".main+2
	rel 27+4 t=29 gofile../home/ahaoozhang/GoCode/demo41-Compile/slice.go+0
go.range."".main SDWARFRANGE size=0
go.isstmt."".main SDWARFMISC size=0
	0x0000 02 01 02 01 00                                   .....
go.loc."".f SDWARFLOC size=57
	0x0000 ff ff ff ff ff ff ff ff 00 00 00 00 00 00 00 00  ................
	0x0010 00 00 00 00 00 00 00 00 35 00 00 00 00 00 00 00  ........5.......
	0x0020 07 00 9c 93 08 91 08 93 08 00 00 00 00 00 00 00  ................
	0x0030 00 00 00 00 00 00 00 00 00                       .........
	rel 8+8 t=1 "".f+0
go.info."".f SDWARFINFO size=45
	0x0000 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0010 00 00 00 00 00 01 9c 13 00 00 00 00 00 00 00 00  ................
	0x0020 0f 7e 72 31 00 01 10 00 00 00 00 00 00           .~r1.........
	rel 1+4 t=28 go.info."".f$abstract+0
	rel 5+8 t=1 "".f+0
	rel 13+8 t=1 "".f+53
	rel 24+4 t=28 go.info."".f$abstract+6
	rel 28+4 t=28 go.loc."".f+0
	rel 39+4 t=28 go.info.int+0
go.range."".f SDWARFRANGE size=0
go.isstmt."".f SDWARFMISC size=0
	0x0000 08 0c 03 05 01 06 02 05 01 12 02 07 00           .............
go.loc."".init SDWARFLOC size=0
go.info."".init SDWARFINFO size=33
	0x0000 03 22 22 2e 69 6e 69 74 00 00 00 00 00 00 00 00  ."".init........
	0x0010 00 00 00 00 00 00 00 00 00 01 9c 00 00 00 00 01  ................
	0x0020 00                                               .
	rel 9+8 t=1 "".init+0
	rel 17+8 t=1 "".init+80
	rel 27+4 t=29 gofile..<autogenerated>+0
go.range."".init SDWARFRANGE size=0
go.isstmt."".init SDWARFMISC size=0
	0x0000 04 0f 04 0c 03 07 01 05 02 09 01 02 02 0e 01 09  ................
	0x0010 02 07 00                                         ...
"".initdone· SNOPTRBSS size=1
runtime.gcbits.01 SRODATA dupok size=1
	0x0000 01                                               .
type..namedata.*[]int- SRODATA dupok size=9
	0x0000 00 00 06 2a 5b 5d 69 6e 74                       ...*[]int
type.*[]int SRODATA dupok size=56
	0x0000 08 00 00 00 00 00 00 00 08 00 00 00 00 00 00 00  ................
	0x0010 1b 31 52 88 00 08 08 36 00 00 00 00 00 00 00 00  .1R....6........
	0x0020 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0030 00 00 00 00 00 00 00 00                          ........
	rel 24+8 t=1 runtime.algarray+80
	rel 32+8 t=1 runtime.gcbits.01+0
	rel 40+4 t=5 type..namedata.*[]int-+0
	rel 48+8 t=1 type.[]int+0
type.[]int SRODATA dupok size=56
	0x0000 18 00 00 00 00 00 00 00 08 00 00 00 00 00 00 00  ................
	0x0010 8e 66 f9 1b 02 08 08 17 00 00 00 00 00 00 00 00  .f..............
	0x0020 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ................
	0x0030 00 00 00 00 00 00 00 00                          ........
	rel 24+8 t=1 runtime.algarray+0
	rel 32+8 t=1 runtime.gcbits.01+0
	rel 40+4 t=5 type..namedata.*[]int-+0
	rel 44+4 t=6 type.*[]int+0
	rel 48+8 t=1 type.int+0
gclocals·33cdeccccebe80329f1fdbee7f5874cb SRODATA dupok size=8
	0x0000 01 00 00 00 00 00 00 00                          ........
gclocals·1a65e721a2ccc325b382662e7ffee780 SRODATA dupok size=10
	0x0000 02 00 00 00 01 00 00 00 01 00                    ..........
gclocals·69c1753bd5f81501d95132d08af04464 SRODATA dupok size=8
	0x0000 02 00 00 00 00 00 00 00                          ........
gclocals·9fb7f0986f647f17cb53dda1484e0f7a SRODATA dupok size=10
	0x0000 02 00 00 00 01 00 00 00 00 01                    ..........