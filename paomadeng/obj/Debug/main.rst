                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.9.0 #11195 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _delay
                                     13 	.globl _CY
                                     14 	.globl _AC
                                     15 	.globl _F0
                                     16 	.globl _RS1
                                     17 	.globl _RS0
                                     18 	.globl _OV
                                     19 	.globl _F1
                                     20 	.globl _P
                                     21 	.globl _PS
                                     22 	.globl _PT1
                                     23 	.globl _PX1
                                     24 	.globl _PT0
                                     25 	.globl _PX0
                                     26 	.globl _RD
                                     27 	.globl _WR
                                     28 	.globl _T1
                                     29 	.globl _T0
                                     30 	.globl _INT1
                                     31 	.globl _INT0
                                     32 	.globl _TXD
                                     33 	.globl _RXD
                                     34 	.globl _P3_7
                                     35 	.globl _P3_6
                                     36 	.globl _P3_5
                                     37 	.globl _P3_4
                                     38 	.globl _P3_3
                                     39 	.globl _P3_2
                                     40 	.globl _P3_1
                                     41 	.globl _P3_0
                                     42 	.globl _EA
                                     43 	.globl _ES
                                     44 	.globl _ET1
                                     45 	.globl _EX1
                                     46 	.globl _ET0
                                     47 	.globl _EX0
                                     48 	.globl _P2_7
                                     49 	.globl _P2_6
                                     50 	.globl _P2_5
                                     51 	.globl _P2_4
                                     52 	.globl _P2_3
                                     53 	.globl _P2_2
                                     54 	.globl _P2_1
                                     55 	.globl _P2_0
                                     56 	.globl _SM0
                                     57 	.globl _SM1
                                     58 	.globl _SM2
                                     59 	.globl _REN
                                     60 	.globl _TB8
                                     61 	.globl _RB8
                                     62 	.globl _TI
                                     63 	.globl _RI
                                     64 	.globl _P1_7
                                     65 	.globl _P1_6
                                     66 	.globl _P1_5
                                     67 	.globl _P1_4
                                     68 	.globl _P1_3
                                     69 	.globl _P1_2
                                     70 	.globl _P1_1
                                     71 	.globl _P1_0
                                     72 	.globl _TF1
                                     73 	.globl _TR1
                                     74 	.globl _TF0
                                     75 	.globl _TR0
                                     76 	.globl _IE1
                                     77 	.globl _IT1
                                     78 	.globl _IE0
                                     79 	.globl _IT0
                                     80 	.globl _P0_7
                                     81 	.globl _P0_6
                                     82 	.globl _P0_5
                                     83 	.globl _P0_4
                                     84 	.globl _P0_3
                                     85 	.globl _P0_2
                                     86 	.globl _P0_1
                                     87 	.globl _P0_0
                                     88 	.globl _B
                                     89 	.globl _ACC
                                     90 	.globl _PSW
                                     91 	.globl _IP
                                     92 	.globl _P3
                                     93 	.globl _IE
                                     94 	.globl _P2
                                     95 	.globl _SBUF
                                     96 	.globl _SCON
                                     97 	.globl _P1
                                     98 	.globl _TH1
                                     99 	.globl _TH0
                                    100 	.globl _TL1
                                    101 	.globl _TL0
                                    102 	.globl _TMOD
                                    103 	.globl _TCON
                                    104 	.globl _PCON
                                    105 	.globl _DPH
                                    106 	.globl _DPL
                                    107 	.globl _SP
                                    108 	.globl _P0
                                    109 ;--------------------------------------------------------
                                    110 ; special function registers
                                    111 ;--------------------------------------------------------
                                    112 	.area RSEG    (ABS,DATA)
      000000                        113 	.org 0x0000
                           000080   114 G$P0$0_0$0 == 0x0080
                           000080   115 _P0	=	0x0080
                           000081   116 G$SP$0_0$0 == 0x0081
                           000081   117 _SP	=	0x0081
                           000082   118 G$DPL$0_0$0 == 0x0082
                           000082   119 _DPL	=	0x0082
                           000083   120 G$DPH$0_0$0 == 0x0083
                           000083   121 _DPH	=	0x0083
                           000087   122 G$PCON$0_0$0 == 0x0087
                           000087   123 _PCON	=	0x0087
                           000088   124 G$TCON$0_0$0 == 0x0088
                           000088   125 _TCON	=	0x0088
                           000089   126 G$TMOD$0_0$0 == 0x0089
                           000089   127 _TMOD	=	0x0089
                           00008A   128 G$TL0$0_0$0 == 0x008a
                           00008A   129 _TL0	=	0x008a
                           00008B   130 G$TL1$0_0$0 == 0x008b
                           00008B   131 _TL1	=	0x008b
                           00008C   132 G$TH0$0_0$0 == 0x008c
                           00008C   133 _TH0	=	0x008c
                           00008D   134 G$TH1$0_0$0 == 0x008d
                           00008D   135 _TH1	=	0x008d
                           000090   136 G$P1$0_0$0 == 0x0090
                           000090   137 _P1	=	0x0090
                           000098   138 G$SCON$0_0$0 == 0x0098
                           000098   139 _SCON	=	0x0098
                           000099   140 G$SBUF$0_0$0 == 0x0099
                           000099   141 _SBUF	=	0x0099
                           0000A0   142 G$P2$0_0$0 == 0x00a0
                           0000A0   143 _P2	=	0x00a0
                           0000A8   144 G$IE$0_0$0 == 0x00a8
                           0000A8   145 _IE	=	0x00a8
                           0000B0   146 G$P3$0_0$0 == 0x00b0
                           0000B0   147 _P3	=	0x00b0
                           0000B8   148 G$IP$0_0$0 == 0x00b8
                           0000B8   149 _IP	=	0x00b8
                           0000D0   150 G$PSW$0_0$0 == 0x00d0
                           0000D0   151 _PSW	=	0x00d0
                           0000E0   152 G$ACC$0_0$0 == 0x00e0
                           0000E0   153 _ACC	=	0x00e0
                           0000F0   154 G$B$0_0$0 == 0x00f0
                           0000F0   155 _B	=	0x00f0
                                    156 ;--------------------------------------------------------
                                    157 ; special function bits
                                    158 ;--------------------------------------------------------
                                    159 	.area RSEG    (ABS,DATA)
      000000                        160 	.org 0x0000
                           000080   161 G$P0_0$0_0$0 == 0x0080
                           000080   162 _P0_0	=	0x0080
                           000081   163 G$P0_1$0_0$0 == 0x0081
                           000081   164 _P0_1	=	0x0081
                           000082   165 G$P0_2$0_0$0 == 0x0082
                           000082   166 _P0_2	=	0x0082
                           000083   167 G$P0_3$0_0$0 == 0x0083
                           000083   168 _P0_3	=	0x0083
                           000084   169 G$P0_4$0_0$0 == 0x0084
                           000084   170 _P0_4	=	0x0084
                           000085   171 G$P0_5$0_0$0 == 0x0085
                           000085   172 _P0_5	=	0x0085
                           000086   173 G$P0_6$0_0$0 == 0x0086
                           000086   174 _P0_6	=	0x0086
                           000087   175 G$P0_7$0_0$0 == 0x0087
                           000087   176 _P0_7	=	0x0087
                           000088   177 G$IT0$0_0$0 == 0x0088
                           000088   178 _IT0	=	0x0088
                           000089   179 G$IE0$0_0$0 == 0x0089
                           000089   180 _IE0	=	0x0089
                           00008A   181 G$IT1$0_0$0 == 0x008a
                           00008A   182 _IT1	=	0x008a
                           00008B   183 G$IE1$0_0$0 == 0x008b
                           00008B   184 _IE1	=	0x008b
                           00008C   185 G$TR0$0_0$0 == 0x008c
                           00008C   186 _TR0	=	0x008c
                           00008D   187 G$TF0$0_0$0 == 0x008d
                           00008D   188 _TF0	=	0x008d
                           00008E   189 G$TR1$0_0$0 == 0x008e
                           00008E   190 _TR1	=	0x008e
                           00008F   191 G$TF1$0_0$0 == 0x008f
                           00008F   192 _TF1	=	0x008f
                           000090   193 G$P1_0$0_0$0 == 0x0090
                           000090   194 _P1_0	=	0x0090
                           000091   195 G$P1_1$0_0$0 == 0x0091
                           000091   196 _P1_1	=	0x0091
                           000092   197 G$P1_2$0_0$0 == 0x0092
                           000092   198 _P1_2	=	0x0092
                           000093   199 G$P1_3$0_0$0 == 0x0093
                           000093   200 _P1_3	=	0x0093
                           000094   201 G$P1_4$0_0$0 == 0x0094
                           000094   202 _P1_4	=	0x0094
                           000095   203 G$P1_5$0_0$0 == 0x0095
                           000095   204 _P1_5	=	0x0095
                           000096   205 G$P1_6$0_0$0 == 0x0096
                           000096   206 _P1_6	=	0x0096
                           000097   207 G$P1_7$0_0$0 == 0x0097
                           000097   208 _P1_7	=	0x0097
                           000098   209 G$RI$0_0$0 == 0x0098
                           000098   210 _RI	=	0x0098
                           000099   211 G$TI$0_0$0 == 0x0099
                           000099   212 _TI	=	0x0099
                           00009A   213 G$RB8$0_0$0 == 0x009a
                           00009A   214 _RB8	=	0x009a
                           00009B   215 G$TB8$0_0$0 == 0x009b
                           00009B   216 _TB8	=	0x009b
                           00009C   217 G$REN$0_0$0 == 0x009c
                           00009C   218 _REN	=	0x009c
                           00009D   219 G$SM2$0_0$0 == 0x009d
                           00009D   220 _SM2	=	0x009d
                           00009E   221 G$SM1$0_0$0 == 0x009e
                           00009E   222 _SM1	=	0x009e
                           00009F   223 G$SM0$0_0$0 == 0x009f
                           00009F   224 _SM0	=	0x009f
                           0000A0   225 G$P2_0$0_0$0 == 0x00a0
                           0000A0   226 _P2_0	=	0x00a0
                           0000A1   227 G$P2_1$0_0$0 == 0x00a1
                           0000A1   228 _P2_1	=	0x00a1
                           0000A2   229 G$P2_2$0_0$0 == 0x00a2
                           0000A2   230 _P2_2	=	0x00a2
                           0000A3   231 G$P2_3$0_0$0 == 0x00a3
                           0000A3   232 _P2_3	=	0x00a3
                           0000A4   233 G$P2_4$0_0$0 == 0x00a4
                           0000A4   234 _P2_4	=	0x00a4
                           0000A5   235 G$P2_5$0_0$0 == 0x00a5
                           0000A5   236 _P2_5	=	0x00a5
                           0000A6   237 G$P2_6$0_0$0 == 0x00a6
                           0000A6   238 _P2_6	=	0x00a6
                           0000A7   239 G$P2_7$0_0$0 == 0x00a7
                           0000A7   240 _P2_7	=	0x00a7
                           0000A8   241 G$EX0$0_0$0 == 0x00a8
                           0000A8   242 _EX0	=	0x00a8
                           0000A9   243 G$ET0$0_0$0 == 0x00a9
                           0000A9   244 _ET0	=	0x00a9
                           0000AA   245 G$EX1$0_0$0 == 0x00aa
                           0000AA   246 _EX1	=	0x00aa
                           0000AB   247 G$ET1$0_0$0 == 0x00ab
                           0000AB   248 _ET1	=	0x00ab
                           0000AC   249 G$ES$0_0$0 == 0x00ac
                           0000AC   250 _ES	=	0x00ac
                           0000AF   251 G$EA$0_0$0 == 0x00af
                           0000AF   252 _EA	=	0x00af
                           0000B0   253 G$P3_0$0_0$0 == 0x00b0
                           0000B0   254 _P3_0	=	0x00b0
                           0000B1   255 G$P3_1$0_0$0 == 0x00b1
                           0000B1   256 _P3_1	=	0x00b1
                           0000B2   257 G$P3_2$0_0$0 == 0x00b2
                           0000B2   258 _P3_2	=	0x00b2
                           0000B3   259 G$P3_3$0_0$0 == 0x00b3
                           0000B3   260 _P3_3	=	0x00b3
                           0000B4   261 G$P3_4$0_0$0 == 0x00b4
                           0000B4   262 _P3_4	=	0x00b4
                           0000B5   263 G$P3_5$0_0$0 == 0x00b5
                           0000B5   264 _P3_5	=	0x00b5
                           0000B6   265 G$P3_6$0_0$0 == 0x00b6
                           0000B6   266 _P3_6	=	0x00b6
                           0000B7   267 G$P3_7$0_0$0 == 0x00b7
                           0000B7   268 _P3_7	=	0x00b7
                           0000B0   269 G$RXD$0_0$0 == 0x00b0
                           0000B0   270 _RXD	=	0x00b0
                           0000B1   271 G$TXD$0_0$0 == 0x00b1
                           0000B1   272 _TXD	=	0x00b1
                           0000B2   273 G$INT0$0_0$0 == 0x00b2
                           0000B2   274 _INT0	=	0x00b2
                           0000B3   275 G$INT1$0_0$0 == 0x00b3
                           0000B3   276 _INT1	=	0x00b3
                           0000B4   277 G$T0$0_0$0 == 0x00b4
                           0000B4   278 _T0	=	0x00b4
                           0000B5   279 G$T1$0_0$0 == 0x00b5
                           0000B5   280 _T1	=	0x00b5
                           0000B6   281 G$WR$0_0$0 == 0x00b6
                           0000B6   282 _WR	=	0x00b6
                           0000B7   283 G$RD$0_0$0 == 0x00b7
                           0000B7   284 _RD	=	0x00b7
                           0000B8   285 G$PX0$0_0$0 == 0x00b8
                           0000B8   286 _PX0	=	0x00b8
                           0000B9   287 G$PT0$0_0$0 == 0x00b9
                           0000B9   288 _PT0	=	0x00b9
                           0000BA   289 G$PX1$0_0$0 == 0x00ba
                           0000BA   290 _PX1	=	0x00ba
                           0000BB   291 G$PT1$0_0$0 == 0x00bb
                           0000BB   292 _PT1	=	0x00bb
                           0000BC   293 G$PS$0_0$0 == 0x00bc
                           0000BC   294 _PS	=	0x00bc
                           0000D0   295 G$P$0_0$0 == 0x00d0
                           0000D0   296 _P	=	0x00d0
                           0000D1   297 G$F1$0_0$0 == 0x00d1
                           0000D1   298 _F1	=	0x00d1
                           0000D2   299 G$OV$0_0$0 == 0x00d2
                           0000D2   300 _OV	=	0x00d2
                           0000D3   301 G$RS0$0_0$0 == 0x00d3
                           0000D3   302 _RS0	=	0x00d3
                           0000D4   303 G$RS1$0_0$0 == 0x00d4
                           0000D4   304 _RS1	=	0x00d4
                           0000D5   305 G$F0$0_0$0 == 0x00d5
                           0000D5   306 _F0	=	0x00d5
                           0000D6   307 G$AC$0_0$0 == 0x00d6
                           0000D6   308 _AC	=	0x00d6
                           0000D7   309 G$CY$0_0$0 == 0x00d7
                           0000D7   310 _CY	=	0x00d7
                                    311 ;--------------------------------------------------------
                                    312 ; overlayable register banks
                                    313 ;--------------------------------------------------------
                                    314 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        315 	.ds 8
                                    316 ;--------------------------------------------------------
                                    317 ; internal ram data
                                    318 ;--------------------------------------------------------
                                    319 	.area DSEG    (DATA)
                                    320 ;--------------------------------------------------------
                                    321 ; overlayable items in internal ram 
                                    322 ;--------------------------------------------------------
                                    323 	.area	OSEG    (OVR,DATA)
                                    324 ;--------------------------------------------------------
                                    325 ; Stack segment in internal ram 
                                    326 ;--------------------------------------------------------
                                    327 	.area	SSEG
      000008                        328 __start__stack:
      000008                        329 	.ds	1
                                    330 
                                    331 ;--------------------------------------------------------
                                    332 ; indirectly addressable internal ram data
                                    333 ;--------------------------------------------------------
                                    334 	.area ISEG    (DATA)
                                    335 ;--------------------------------------------------------
                                    336 ; absolute internal ram data
                                    337 ;--------------------------------------------------------
                                    338 	.area IABS    (ABS,DATA)
                                    339 	.area IABS    (ABS,DATA)
                                    340 ;--------------------------------------------------------
                                    341 ; bit data
                                    342 ;--------------------------------------------------------
                                    343 	.area BSEG    (BIT)
                                    344 ;--------------------------------------------------------
                                    345 ; paged external ram data
                                    346 ;--------------------------------------------------------
                                    347 	.area PSEG    (PAG,XDATA)
                                    348 ;--------------------------------------------------------
                                    349 ; external ram data
                                    350 ;--------------------------------------------------------
                                    351 	.area XSEG    (XDATA)
                                    352 ;--------------------------------------------------------
                                    353 ; absolute external ram data
                                    354 ;--------------------------------------------------------
                                    355 	.area XABS    (ABS,XDATA)
                                    356 ;--------------------------------------------------------
                                    357 ; external initialized ram data
                                    358 ;--------------------------------------------------------
                                    359 	.area XISEG   (XDATA)
                                    360 	.area HOME    (CODE)
                                    361 	.area GSINIT0 (CODE)
                                    362 	.area GSINIT1 (CODE)
                                    363 	.area GSINIT2 (CODE)
                                    364 	.area GSINIT3 (CODE)
                                    365 	.area GSINIT4 (CODE)
                                    366 	.area GSINIT5 (CODE)
                                    367 	.area GSINIT  (CODE)
                                    368 	.area GSFINAL (CODE)
                                    369 	.area CSEG    (CODE)
                                    370 ;--------------------------------------------------------
                                    371 ; interrupt vector 
                                    372 ;--------------------------------------------------------
                                    373 	.area HOME    (CODE)
      000000                        374 __interrupt_vect:
      000000 02 00 06         [24]  375 	ljmp	__sdcc_gsinit_startup
                                    376 ;--------------------------------------------------------
                                    377 ; global & static initialisations
                                    378 ;--------------------------------------------------------
                                    379 	.area HOME    (CODE)
                                    380 	.area GSINIT  (CODE)
                                    381 	.area GSFINAL (CODE)
                                    382 	.area GSINIT  (CODE)
                                    383 	.globl __sdcc_gsinit_startup
                                    384 	.globl __sdcc_program_startup
                                    385 	.globl __start__stack
                                    386 	.globl __mcs51_genXINIT
                                    387 	.globl __mcs51_genXRAMCLEAR
                                    388 	.globl __mcs51_genRAMCLEAR
                                    389 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  390 	ljmp	__sdcc_program_startup
                                    391 ;--------------------------------------------------------
                                    392 ; Home
                                    393 ;--------------------------------------------------------
                                    394 	.area HOME    (CODE)
                                    395 	.area HOME    (CODE)
      000003                        396 __sdcc_program_startup:
      000003 02 00 71         [24]  397 	ljmp	_main
                                    398 ;	return from main will return to caller
                                    399 ;--------------------------------------------------------
                                    400 ; code
                                    401 ;--------------------------------------------------------
                                    402 	.area CSEG    (CODE)
                                    403 ;------------------------------------------------------------
                                    404 ;Allocation info for local variables in function 'delay'
                                    405 ;------------------------------------------------------------
                                    406 ;a                         Allocated to registers r7 
                                    407 ;b                         Allocated to registers r6 
                                    408 ;------------------------------------------------------------
                           000000   409 	G$delay$0$0 ==.
                           000000   410 	C$main.c$10$0_0$15 ==.
                                    411 ;	main.c:10: void delay()
                                    412 ;	-----------------------------------------
                                    413 ;	 function delay
                                    414 ;	-----------------------------------------
      000062                        415 _delay:
                           000007   416 	ar7 = 0x07
                           000006   417 	ar6 = 0x06
                           000005   418 	ar5 = 0x05
                           000004   419 	ar4 = 0x04
                           000003   420 	ar3 = 0x03
                           000002   421 	ar2 = 0x02
                           000001   422 	ar1 = 0x01
                           000000   423 	ar0 = 0x00
                           000000   424 	C$main.c$13$2_0$15 ==.
                                    425 ;	main.c:13: for(a=255;a;a--)
      000062 7F FF            [12]  426 	mov	r7,#0xff
      000064                        427 00105$:
                           000002   428 	C$main.c$15$4_0$17 ==.
                                    429 ;	main.c:15: for(b=255;b;b--);
      000064 7E FF            [12]  430 	mov	r6,#0xff
      000066                        431 00104$:
      000066 EE               [12]  432 	mov	a,r6
      000067 14               [12]  433 	dec	a
      000068 FE               [12]  434 	mov	r6,a
      000069 70 FB            [24]  435 	jnz	00104$
                           000009   436 	C$main.c$13$2_0$15 ==.
                                    437 ;	main.c:13: for(a=255;a;a--)
      00006B EF               [12]  438 	mov	a,r7
      00006C 14               [12]  439 	dec	a
      00006D FF               [12]  440 	mov	r7,a
      00006E 70 F4            [24]  441 	jnz	00105$
                           00000E   442 	C$main.c$17$2_0$15 ==.
                                    443 ;	main.c:17: }
                           00000E   444 	C$main.c$17$2_0$15 ==.
                           00000E   445 	XG$delay$0$0 ==.
      000070 22               [24]  446 	ret
                                    447 ;------------------------------------------------------------
                                    448 ;Allocation info for local variables in function 'main'
                                    449 ;------------------------------------------------------------
                                    450 ;tmp                       Allocated to registers r7 
                                    451 ;------------------------------------------------------------
                           00000F   452 	G$main$0$0 ==.
                           00000F   453 	C$main.c$19$2_0$19 ==.
                                    454 ;	main.c:19: void main(void)
                                    455 ;	-----------------------------------------
                                    456 ;	 function main
                                    457 ;	-----------------------------------------
      000071                        458 _main:
                           00000F   459 	C$main.c$22$2_0$19 ==.
                                    460 ;	main.c:22: uchar tmp=1;
      000071 7F 01            [12]  461 	mov	r7,#0x01
                           000011   462 	C$main.c$23$1_0$19 ==.
                                    463 ;	main.c:23: while (1)
      000073                        464 00104$:
                           000011   465 	C$main.c$25$2_0$20 ==.
                                    466 ;	main.c:25: P0=0;
      000073 75 80 00         [24]  467 	mov	_P0,#0x00
                           000014   468 	C$main.c$26$2_0$20 ==.
                                    469 ;	main.c:26: P0=(~tmp);
      000076 EF               [12]  470 	mov	a,r7
      000077 F4               [12]  471 	cpl	a
      000078 F5 80            [12]  472 	mov	_P0,a
                           000018   473 	C$main.c$27$2_0$20 ==.
                                    474 ;	main.c:27: delay();
      00007A C0 07            [24]  475 	push	ar7
      00007C 12 00 62         [24]  476 	lcall	_delay
      00007F D0 07            [24]  477 	pop	ar7
                           00001F   478 	C$main.c$28$2_0$20 ==.
                                    479 ;	main.c:28: tmp<<=1;
      000081 8F 06            [24]  480 	mov	ar6,r7
      000083 EE               [12]  481 	mov	a,r6
      000084 2E               [12]  482 	add	a,r6
                           000023   483 	C$main.c$29$2_0$20 ==.
                                    484 ;	main.c:29: if(tmp==0)
      000085 FF               [12]  485 	mov	r7,a
      000086 70 EB            [24]  486 	jnz	00104$
                           000026   487 	C$main.c$31$3_0$21 ==.
                                    488 ;	main.c:31: tmp=1;
      000088 7F 01            [12]  489 	mov	r7,#0x01
      00008A 80 E7            [24]  490 	sjmp	00104$
                           00002A   491 	C$main.c$34$1_0$19 ==.
                                    492 ;	main.c:34: }
                           00002A   493 	C$main.c$34$1_0$19 ==.
                           00002A   494 	XG$main$0$0 ==.
      00008C 22               [24]  495 	ret
                                    496 	.area CSEG    (CODE)
                                    497 	.area CONST   (CODE)
                                    498 	.area XINIT   (CODE)
                                    499 	.area CABS    (ABS,CODE)
