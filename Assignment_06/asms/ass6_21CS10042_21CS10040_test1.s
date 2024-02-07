	.file	"ass6_21CS10042_21CS10040_test1.c"

#	Allocation of function variables and temporaries on the stack:

#	main
#	f1: -8
#	f10: -16
#	f2: -24
#	f3: -32
#	f4: -40
#	f5: -48
#	f6: -56
#	f7: -64
#	f8: -72
#	f9: -80
#	n1: -84
#	n10: -88
#	n11: -92
#	n2: -96
#	n3: -100
#	n4: -104
#	n5: -108
#	n6: -112
#	n7: -116
#	n8: -120
#	n9: -124
#	t10: -132
#	t100: -140
#	t101: -144
#	t102: -152
#	t103: -160
#	t104: -168
#	t105: -176
#	t106: -184
#	t107: -188
#	t108: -196
#	t109: -204
#	t11: -208
#	t110: -216
#	t111: -220
#	t112: -224
#	t113: -232
#	t114: -236
#	t115: -240
#	t116: -248
#	t117: -252
#	t118: -256
#	t119: -264
#	t12: -268
#	t120: -272
#	t121: -276
#	t122: -284
#	t123: -288
#	t124: -292
#	t125: -296
#	t126: -304
#	t127: -308
#	t128: -316
#	t129: -320
#	t13: -328
#	t130: -336
#	t131: -340
#	t133: -348
#	t134: -352
#	t135: -356
#	t136: -364
#	t137: -368
#	t138: -372
#	t14: -376
#	t140: -384
#	t141: -388
#	t142: -392
#	t143: -400
#	t144: -404
#	t146: -412
#	t147: -416
#	t148: -420
#	t149: -428
#	t15: -432
#	t150: -436
#	t151: -440
#	t153: -448
#	t154: -452
#	t155: -456
#	t156: -464
#	t157: -468
#	t158: -472
#	t16: -480
#	t17: -484
#	t18: -488
#	t19: -496
#	t20: -500
#	t21: -504
#	t22: -512
#	t23: -520
#	t24: -528
#	t25: -536
#	t26: -544
#	t27: -552
#	t28: -556
#	t29: -560
#	t3: -568
#	t30: -576
#	t31: -580
#	t32: -584
#	t33: -592
#	t34: -596
#	t35: -600
#	t36: -608
#	t37: -612
#	t38: -616
#	t39: -620
#	t4: -624
#	t40: -628
#	t41: -632
#	t42: -636
#	t43: -640
#	t44: -648
#	t45: -652
#	t46: -656
#	t47: -664
#	t48: -668
#	t49: -672
#	t5: -676
#	t50: -684
#	t51: -688
#	t52: -692
#	t53: -700
#	t54: -704
#	t55: -708
#	t56: -716
#	t57: -720
#	t58: -724
#	t59: -732
#	t6: -736
#	t60: -744
#	t61: -752
#	t62: -760
#	t63: -768
#	t64: -772
#	t65: -776
#	t66: -784
#	t67: -788
#	t68: -792
#	t69: -800
#	t7: -804
#	t70: -808
#	t71: -812
#	t72: -820
#	t73: -824
#	t74: -828
#	t75: -832
#	t76: -840
#	t77: -848
#	t78: -856
#	t79: -864
#	t8: -868
#	t80: -876
#	t81: -880
#	t82: -888
#	t83: -896
#	t84: -904
#	t85: -912
#	t86: -920
#	t87: -928
#	t88: -936
#	t89: -940
#	t9: -944
#	t90: -952
#	t91: -960
#	t92: -968
#	t93: -976
#	t94: -984
#	t95: -992
#	t96: -1000
#	t97: -1008
#	t98: -1012
#	t99: -1020
#	printFlt
#	f: -8
#	printInt
#	n: -4
#	printStr
#	s: -8
#	readFlt
#	eP: -8
#	readInt
#	eP: -8
#	testIncDec
#	n: -4
#	t0: -12
#	t1: -16
#	t2: -20

	.section	.rodata
.LCFltConst0:
	.long	1120402145
	.align 4
.LCFltConst1:
	.long	1102284063
	.align 4
.LCFltConst2:
	.long	1063675494
	.align 4
.LCFltConst3:
	.long	1087673205
	.align 4
.LC0:
	.string	"Value passed to function = "
.LC1:
	.string	"\n#### TEST 1 (Arithmetic operators) ####"
.LC2:
	.string	"\nn1 = "
.LC3:
	.string	"\nn2 = "
.LC4:
	.string	"\nn3 = "
.LC5:
	.string	"\nn4 = "
.LC6:
	.string	"\nf1 = "
.LC7:
	.string	"\nf2 = "
.LC8:
	.string	"\nf3 = "
.LC9:
	.string	"\nf4 = "
.LC10:
	.string	"\nn1 + n2 = "
.LC11:
	.string	"\nn1 - n2 = "
.LC12:
	.string	"\nn1 * n2 = "
.LC13:
	.string	"\nn1 / n2 = "
.LC14:
	.string	"\nn1 % n2 = "
.LC15:
	.string	"\nf1 + f2 = "
.LC16:
	.string	"\nf1 - f3 = "
.LC17:
	.string	"\nf1 * f2 = "
.LC18:
	.string	"\nf1 / f3 = "
.LC19:
	.string	"\n-n1 + f2 - n3 + f4 + 10 = "
.LC20:
	.string	"\nf1 * n2 / f3 + n4 - 10 = "
.LC21:
	.string	"\nn1 + f2 * n3 / n4 - 0 = "
.LC22:
	.string	"\n(n1 + n2) * (-f3 / n4) - 15 = "
.LC23:
	.string	"\n-n3 = "
.LC24:
	.string	"\n-f2 = "
.LC25:
	.string	"\nTest pre increment: "
.LC26:
	.string	", Value after call = "
.LC27:
	.string	"\nTest post increment: "
.LC28:
	.string	", Value after call = "
.LC29:
	.string	"\nTest pre decrement: "
.LC30:
	.string	", Value after call = "
.LC31:
	.string	"\nTest post decrement: "
.LC32:
	.string	", Value after call = "
.LC33:
	.string	"\n\n"
	.text
	.globl  testIncDec
	.type   testIncDec, @function
testIncDec:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $20, %rsp
								#n 'int' 2
	movl    %edi, -4(%rbp)
	movq    $.LC0, -12(%rbp)
								#t0 'fltptr' 4
	movq    -12(%rbp), %rdi
	call    printStr
	movl    %eax, -16(%rbp)
								#n 'int' 2
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -20(%rbp)
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testIncDec, .-testIncDec
	.text
	.globl  main
	.type   main, @function
main:
.LFB1:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $1020, %rsp
	movq    $.LC1, -568(%rbp)
								#t3 'fltptr' 4
	movq    -568(%rbp), %rdi
	call    printStr
	movl    %eax, -624(%rbp)
	movl    $30, -676(%rbp)
	movl    -676(%rbp), %eax
	movl    %eax, -84(%rbp)
	movl    $16, -736(%rbp)
	movl    -736(%rbp), %eax
	movl    %eax, -96(%rbp)
	movl    $7, -804(%rbp)
	movl    -804(%rbp), %eax
	movl    %eax, -100(%rbp)
	movl    $22, -868(%rbp)
	movl    -868(%rbp), %eax
	negl    %eax
	movl    %eax, -944(%rbp)
	movl    -944(%rbp), %eax
	movl    %eax, -104(%rbp)
	movq    $.LC2, -132(%rbp)
								#t10 'fltptr' 4
	movq    -132(%rbp), %rdi
	call    printStr
	movl    %eax, -208(%rbp)
								#n1 'int' 2
	movl    -84(%rbp), %edi
	call    printInt
	movl    %eax, -268(%rbp)
	movq    $.LC3, -328(%rbp)
								#t13 'fltptr' 4
	movq    -328(%rbp), %rdi
	call    printStr
	movl    %eax, -376(%rbp)
								#n2 'int' 2
	movl    -96(%rbp), %edi
	call    printInt
	movl    %eax, -432(%rbp)
	movq    $.LC4, -480(%rbp)
								#t16 'fltptr' 4
	movq    -480(%rbp), %rdi
	call    printStr
	movl    %eax, -484(%rbp)
								#n3 'int' 2
	movl    -100(%rbp), %edi
	call    printInt
	movl    %eax, -488(%rbp)
	movq    $.LC5, -496(%rbp)
								#t19 'fltptr' 4
	movq    -496(%rbp), %rdi
	call    printStr
	movl    %eax, -500(%rbp)
								#n4 'int' 2
	movl    -104(%rbp), %edi
	call    printInt
	movl    %eax, -504(%rbp)
	movss   .LCFltConst0(%rip), %xmm0
	movss   %xmm0, -512(%rbp)
	movq    -512(%rbp), %rax
	movq    %rax, -40(%rbp)
	movss   .LCFltConst1(%rip), %xmm0
	movss   %xmm0, -520(%rbp)
	movq    -520(%rbp), %rax
	movq    %rax, -8(%rbp)
	movss   .LCFltConst2(%rip), %xmm0
	movss   %xmm0, -528(%rbp)
	movss   -528(%rbp), %xmm0
	xorps   %xmm1, %xmm1
	subss   %xmm0, %xmm1
	movss   %xmm1, -536(%rbp)
	movq    -536(%rbp), %rax
	movq    %rax, -24(%rbp)
	movss   .LCFltConst3(%rip), %xmm0
	movss   %xmm0, -544(%rbp)
	movq    -544(%rbp), %rax
	movq    %rax, -32(%rbp)
	movq    $.LC6, -552(%rbp)
								#t27 'fltptr' 4
	movq    -552(%rbp), %rdi
	call    printStr
	movl    %eax, -556(%rbp)
								#f1 'fltptr' 3
	movq    -8(%rbp), %rdi
	movss   -8(%rbp), %xmm0
	call    printFlt
	movl    %eax, -560(%rbp)
	movq    $.LC7, -576(%rbp)
								#t30 'fltptr' 4
	movq    -576(%rbp), %rdi
	call    printStr
	movl    %eax, -580(%rbp)
								#f2 'fltptr' 3
	movq    -24(%rbp), %rdi
	movss   -24(%rbp), %xmm0
	call    printFlt
	movl    %eax, -584(%rbp)
	movq    $.LC8, -592(%rbp)
								#t33 'fltptr' 4
	movq    -592(%rbp), %rdi
	call    printStr
	movl    %eax, -596(%rbp)
								#f3 'fltptr' 3
	movq    -32(%rbp), %rdi
	movss   -32(%rbp), %xmm0
	call    printFlt
	movl    %eax, -600(%rbp)
	movq    $.LC9, -608(%rbp)
								#t36 'fltptr' 4
	movq    -608(%rbp), %rdi
	call    printStr
	movl    %eax, -612(%rbp)
								#f4 'fltptr' 3
	movq    -40(%rbp), %rdi
	movss   -40(%rbp), %xmm0
	call    printFlt
	movl    %eax, -616(%rbp)
	movl    -84(%rbp), %eax
	addl    -96(%rbp), %eax
	movl    %eax, -620(%rbp)
	movl    -620(%rbp), %eax
	movl    %eax, -108(%rbp)
	movl    -84(%rbp), %eax
	subl    -96(%rbp), %eax
	movl    %eax, -628(%rbp)
	movl    -628(%rbp), %eax
	movl    %eax, -112(%rbp)
	movl    -84(%rbp), %eax
	imull   -96(%rbp), %eax
	movl    %eax, -632(%rbp)
	movl    -632(%rbp), %eax
	movl    %eax, -116(%rbp)
	movl    -84(%rbp), %eax
	cdq     
	idivl   -96(%rbp)
	movl    %eax, -636(%rbp)
	movl    -636(%rbp), %eax
	movl    %eax, -120(%rbp)
	movl    -84(%rbp), %eax
	cdq     
	idivl   -96(%rbp)
	movl    %edx, -640(%rbp)
	movl    -640(%rbp), %eax
	movl    %eax, -124(%rbp)
	movq    $.LC10, -648(%rbp)
								#t44 'fltptr' 4
	movq    -648(%rbp), %rdi
	call    printStr
	movl    %eax, -652(%rbp)
								#n5 'int' 2
	movl    -108(%rbp), %edi
	call    printInt
	movl    %eax, -656(%rbp)
	movq    $.LC11, -664(%rbp)
								#t47 'fltptr' 4
	movq    -664(%rbp), %rdi
	call    printStr
	movl    %eax, -668(%rbp)
								#n6 'int' 2
	movl    -112(%rbp), %edi
	call    printInt
	movl    %eax, -672(%rbp)
	movq    $.LC12, -684(%rbp)
								#t50 'fltptr' 4
	movq    -684(%rbp), %rdi
	call    printStr
	movl    %eax, -688(%rbp)
								#n7 'int' 2
	movl    -116(%rbp), %edi
	call    printInt
	movl    %eax, -692(%rbp)
	movq    $.LC13, -700(%rbp)
								#t53 'fltptr' 4
	movq    -700(%rbp), %rdi
	call    printStr
	movl    %eax, -704(%rbp)
								#n8 'int' 2
	movl    -120(%rbp), %edi
	call    printInt
	movl    %eax, -708(%rbp)
	movq    $.LC14, -716(%rbp)
								#t56 'fltptr' 4
	movq    -716(%rbp), %rdi
	call    printStr
	movl    %eax, -720(%rbp)
								#n9 'int' 2
	movl    -124(%rbp), %edi
	call    printInt
	movl    %eax, -724(%rbp)
	movss   -8(%rbp), %xmm0
	addss   -24(%rbp), %xmm0
	movss   %xmm0, -732(%rbp)
	movq    -732(%rbp), %rax
	movq    %rax, -48(%rbp)
	movss   -8(%rbp), %xmm0
	subss   -32(%rbp), %xmm0
	movss   %xmm0, -744(%rbp)
	movq    -744(%rbp), %rax
	movq    %rax, -56(%rbp)
	movss   -8(%rbp), %xmm0
	mulss   -24(%rbp), %xmm0
	movss   %xmm0, -752(%rbp)
	movq    -752(%rbp), %rax
	movq    %rax, -64(%rbp)
	movss   -8(%rbp), %xmm0
	divss   -32(%rbp), %xmm0
	movss   %xmm0, -760(%rbp)
	movq    -760(%rbp), %rax
	movq    %rax, -72(%rbp)
	movq    $.LC15, -768(%rbp)
								#t63 'fltptr' 4
	movq    -768(%rbp), %rdi
	call    printStr
	movl    %eax, -772(%rbp)
								#f5 'fltptr' 3
	movq    -48(%rbp), %rdi
	movss   -48(%rbp), %xmm0
	call    printFlt
	movl    %eax, -776(%rbp)
	movq    $.LC16, -784(%rbp)
								#t66 'fltptr' 4
	movq    -784(%rbp), %rdi
	call    printStr
	movl    %eax, -788(%rbp)
								#f6 'fltptr' 3
	movq    -56(%rbp), %rdi
	movss   -56(%rbp), %xmm0
	call    printFlt
	movl    %eax, -792(%rbp)
	movq    $.LC17, -800(%rbp)
								#t69 'fltptr' 4
	movq    -800(%rbp), %rdi
	call    printStr
	movl    %eax, -808(%rbp)
								#f7 'fltptr' 3
	movq    -64(%rbp), %rdi
	movss   -64(%rbp), %xmm0
	call    printFlt
	movl    %eax, -812(%rbp)
	movq    $.LC18, -820(%rbp)
								#t72 'fltptr' 4
	movq    -820(%rbp), %rdi
	call    printStr
	movl    %eax, -824(%rbp)
								#f8 'fltptr' 3
	movq    -72(%rbp), %rdi
	movss   -72(%rbp), %xmm0
	call    printFlt
	movl    %eax, -828(%rbp)
	movl    -84(%rbp), %eax
	negl    %eax
	movl    %eax, -832(%rbp)
	cvtsi2ssl -832(%rbp), %xmm0
	movss   %xmm0, -840(%rbp)
	movss   -840(%rbp), %xmm0
	addss   -24(%rbp), %xmm0
	movss   %xmm0, -848(%rbp)
	cvtsi2ssl -100(%rbp), %xmm0
	movss   %xmm0, -856(%rbp)
	movss   -848(%rbp), %xmm0
	subss   -856(%rbp), %xmm0
	movss   %xmm0, -864(%rbp)
	movss   -864(%rbp), %xmm0
	addss   -40(%rbp), %xmm0
	movss   %xmm0, -876(%rbp)
	movl    $10, -880(%rbp)
	cvtsi2ssl -880(%rbp), %xmm0
	movss   %xmm0, -888(%rbp)
	movss   -876(%rbp), %xmm0
	addss   -888(%rbp), %xmm0
	movss   %xmm0, -896(%rbp)
	movss   -896(%rbp), %xmm0
	cvtss2sil %xmm0, %eax
	movl    %eax, -88(%rbp)
	cvtsi2ssl -96(%rbp), %xmm0
	movss   %xmm0, -904(%rbp)
	movss   -8(%rbp), %xmm0
	mulss   -904(%rbp), %xmm0
	movss   %xmm0, -912(%rbp)
	movss   -912(%rbp), %xmm0
	divss   -32(%rbp), %xmm0
	movss   %xmm0, -920(%rbp)
	cvtsi2ssl -104(%rbp), %xmm0
	movss   %xmm0, -928(%rbp)
	movss   -920(%rbp), %xmm0
	addss   -928(%rbp), %xmm0
	movss   %xmm0, -936(%rbp)
	movl    $10, -940(%rbp)
	cvtsi2ssl -940(%rbp), %xmm0
	movss   %xmm0, -952(%rbp)
	movss   -936(%rbp), %xmm0
	subss   -952(%rbp), %xmm0
	movss   %xmm0, -960(%rbp)
	movss   -960(%rbp), %xmm0
	cvtss2sil %xmm0, %eax
	movl    %eax, -92(%rbp)
	cvtsi2ssl -100(%rbp), %xmm0
	movss   %xmm0, -968(%rbp)
	movss   -24(%rbp), %xmm0
	mulss   -968(%rbp), %xmm0
	movss   %xmm0, -976(%rbp)
	cvtsi2ssl -104(%rbp), %xmm0
	movss   %xmm0, -984(%rbp)
	movss   -976(%rbp), %xmm0
	divss   -984(%rbp), %xmm0
	movss   %xmm0, -992(%rbp)
	cvtsi2ssl -84(%rbp), %xmm0
	movss   %xmm0, -1000(%rbp)
	movss   -1000(%rbp), %xmm0
	addss   -992(%rbp), %xmm0
	movss   %xmm0, -1008(%rbp)
	movl    $0, -1012(%rbp)
	cvtsi2ssl -1012(%rbp), %xmm0
	movss   %xmm0, -1020(%rbp)
	movss   -1008(%rbp), %xmm0
	subss   -1020(%rbp), %xmm0
	movss   %xmm0, -140(%rbp)
	movq    -140(%rbp), %rax
	movq    %rax, -80(%rbp)
	movl    -84(%rbp), %eax
	addl    -96(%rbp), %eax
	movl    %eax, -144(%rbp)
	movss   -32(%rbp), %xmm0
	xorps   %xmm1, %xmm1
	subss   %xmm0, %xmm1
	movss   %xmm1, -152(%rbp)
	cvtsi2ssl -104(%rbp), %xmm0
	movss   %xmm0, -160(%rbp)
	movss   -152(%rbp), %xmm0
	divss   -160(%rbp), %xmm0
	movss   %xmm0, -168(%rbp)
	cvtsi2ssl -144(%rbp), %xmm0
	movss   %xmm0, -176(%rbp)
	movss   -176(%rbp), %xmm0
	mulss   -168(%rbp), %xmm0
	movss   %xmm0, -184(%rbp)
	movl    $15, -188(%rbp)
	cvtsi2ssl -188(%rbp), %xmm0
	movss   %xmm0, -196(%rbp)
	movss   -184(%rbp), %xmm0
	subss   -196(%rbp), %xmm0
	movss   %xmm0, -204(%rbp)
	movq    -204(%rbp), %rax
	movq    %rax, -16(%rbp)
	movq    $.LC19, -216(%rbp)
								#t110 'fltptr' 4
	movq    -216(%rbp), %rdi
	call    printStr
	movl    %eax, -220(%rbp)
								#n10 'int' 2
	movl    -88(%rbp), %edi
	call    printInt
	movl    %eax, -224(%rbp)
	movq    $.LC20, -232(%rbp)
								#t113 'fltptr' 4
	movq    -232(%rbp), %rdi
	call    printStr
	movl    %eax, -236(%rbp)
								#n11 'int' 2
	movl    -92(%rbp), %edi
	call    printInt
	movl    %eax, -240(%rbp)
	movq    $.LC21, -248(%rbp)
								#t116 'fltptr' 4
	movq    -248(%rbp), %rdi
	call    printStr
	movl    %eax, -252(%rbp)
								#f9 'fltptr' 3
	movq    -80(%rbp), %rdi
	movss   -80(%rbp), %xmm0
	call    printFlt
	movl    %eax, -256(%rbp)
	movq    $.LC22, -264(%rbp)
								#t119 'fltptr' 4
	movq    -264(%rbp), %rdi
	call    printStr
	movl    %eax, -272(%rbp)
								#f10 'fltptr' 3
	movq    -16(%rbp), %rdi
	movss   -16(%rbp), %xmm0
	call    printFlt
	movl    %eax, -276(%rbp)
	movq    $.LC23, -284(%rbp)
								#t122 'fltptr' 4
	movq    -284(%rbp), %rdi
	call    printStr
	movl    %eax, -288(%rbp)
	movl    -100(%rbp), %eax
	negl    %eax
	movl    %eax, -292(%rbp)
								#t124 'int' 2
	movl    -292(%rbp), %edi
	call    printInt
	movl    %eax, -296(%rbp)
	movq    $.LC24, -304(%rbp)
								#t126 'fltptr' 4
	movq    -304(%rbp), %rdi
	call    printStr
	movl    %eax, -308(%rbp)
	movss   -24(%rbp), %xmm0
	xorps   %xmm1, %xmm1
	subss   %xmm0, %xmm1
	movss   %xmm1, -316(%rbp)
								#t128 'fltptr' 3
	movq    -316(%rbp), %rdi
	movss   -316(%rbp), %xmm0
	call    printFlt
	movl    %eax, -320(%rbp)
	movq    $.LC25, -336(%rbp)
								#t130 'fltptr' 4
	movq    -336(%rbp), %rdi
	call    printStr
	movl    %eax, -340(%rbp)
	incl    -84(%rbp)
								#n1 'int' 2
	movl    -84(%rbp), %edi
	call    testIncDec
	movq    $.LC26, -348(%rbp)
								#t133 'fltptr' 4
	movq    -348(%rbp), %rdi
	call    printStr
	movl    %eax, -352(%rbp)
								#n1 'int' 2
	movl    -84(%rbp), %edi
	call    printInt
	movl    %eax, -356(%rbp)
	movq    $.LC27, -364(%rbp)
								#t136 'fltptr' 4
	movq    -364(%rbp), %rdi
	call    printStr
	movl    %eax, -368(%rbp)
	movl    -84(%rbp), %eax
	movl    %eax, -372(%rbp)
	incl    -84(%rbp)
								#t138 'int' 2
	movl    -372(%rbp), %edi
	call    testIncDec
	movq    $.LC28, -384(%rbp)
								#t140 'fltptr' 4
	movq    -384(%rbp), %rdi
	call    printStr
	movl    %eax, -388(%rbp)
								#n1 'int' 2
	movl    -84(%rbp), %edi
	call    printInt
	movl    %eax, -392(%rbp)
	movq    $.LC29, -400(%rbp)
								#t143 'fltptr' 4
	movq    -400(%rbp), %rdi
	call    printStr
	movl    %eax, -404(%rbp)
	decl    -84(%rbp)
								#n1 'int' 2
	movl    -84(%rbp), %edi
	call    testIncDec
	movq    $.LC30, -412(%rbp)
								#t146 'fltptr' 4
	movq    -412(%rbp), %rdi
	call    printStr
	movl    %eax, -416(%rbp)
								#n1 'int' 2
	movl    -84(%rbp), %edi
	call    printInt
	movl    %eax, -420(%rbp)
	movq    $.LC31, -428(%rbp)
								#t149 'fltptr' 4
	movq    -428(%rbp), %rdi
	call    printStr
	movl    %eax, -436(%rbp)
	movl    -84(%rbp), %eax
	movl    %eax, -440(%rbp)
	decl    -84(%rbp)
								#t151 'int' 2
	movl    -440(%rbp), %edi
	call    testIncDec
	movq    $.LC32, -448(%rbp)
								#t153 'fltptr' 4
	movq    -448(%rbp), %rdi
	call    printStr
	movl    %eax, -452(%rbp)
								#n1 'int' 2
	movl    -84(%rbp), %edi
	call    printInt
	movl    %eax, -456(%rbp)
	movq    $.LC33, -464(%rbp)
								#t156 'fltptr' 4
	movq    -464(%rbp), %rdi
	call    printStr
	movl    %eax, -468(%rbp)
	movl    $0, -472(%rbp)
	movl    -472(%rbp), %eax
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
