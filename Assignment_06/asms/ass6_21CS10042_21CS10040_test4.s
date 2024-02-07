	.file	"ass6_21CS10042_21CS10040_test4.c"

#	Allocation of function variables and temporaries on the stack:

#	main
#	charL1: -1
#	charL2: -2
#	fltL1: -10
#	fltL2: -18
#	fptrL1: -26
#	fptrL2: -34
#	numL1: -38
#	numL2: -42
#	ptrL1: -50
#	ptrL2: -58
#	strL1: -66
#	strL2: -74
#	t10: -82
#	t100: -90
#	t101: -94
#	t102: -98
#	t103: -106
#	t104: -110
#	t105: -114
#	t106: -122
#	t107: -126
#	t108: -134
#	t109: -138
#	t11: -146
#	t110: -154
#	t111: -158
#	t112: -162
#	t12: -166
#	t13: -174
#	t14: -178
#	t15: -182
#	t16: -190
#	t17: -194
#	t18: -198
#	t19: -206
#	t20: -210
#	t21: -214
#	t22: -222
#	t23: -226
#	t24: -230
#	t25: -238
#	t26: -242
#	t27: -246
#	t28: -254
#	t29: -262
#	t30: -270
#	t31: -274
#	t32: -282
#	t33: -286
#	t34: -290
#	t35: -298
#	t36: -302
#	t37: -306
#	t38: -314
#	t39: -318
#	t4: -326
#	t40: -330
#	t41: -338
#	t42: -342
#	t43: -346
#	t44: -354
#	t45: -358
#	t46: -362
#	t47: -370
#	t48: -374
#	t49: -382
#	t5: -386
#	t50: -390
#	t51: -398
#	t52: -402
#	t53: -406
#	t54: -414
#	t55: -418
#	t56: -422
#	t57: -430
#	t58: -434
#	t59: -438
#	t6: -442
#	t60: -450
#	t61: -454
#	t62: -458
#	t63: -466
#	t64: -470
#	t65: -474
#	t66: -482
#	t67: -486
#	t68: -494
#	t69: -498
#	t7: -499
#	t70: -507
#	t71: -511
#	t72: -519
#	t73: -523
#	t74: -531
#	t75: -535
#	t76: -539
#	t77: -547
#	t78: -551
#	t79: -555
#	t8: -563
#	t80: -571
#	t81: -575
#	t82: -579
#	t83: -587
#	t84: -591
#	t85: -595
#	t86: -603
#	t87: -607
#	t88: -615
#	t89: -619
#	t9: -627
#	t90: -635
#	t91: -639
#	t92: -647
#	t93: -651
#	t94: -659
#	t95: -663
#	t96: -667
#	t97: -675
#	t98: -679
#	t99: -683
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

	.section	.rodata
.LCFltConst0:
	.long	1113469747
	.align 4
.LCFltConst1:
	.long	1116076769
	.align 4
.LC0:
	.string	"Hello World, I am a global string."
.LC1:
	.string	"\n#### TEST 4 (Global variables, pointers and addresses) ####"
.LC2:
	.string	"Hello World, I am a local string."
.LC3:
	.string	"\nLocal variables: "
.LC4:
	.string	"\nnumL1 = "
.LC5:
	.string	", charL1 (ascii value) = "
.LC6:
	.string	", fltL1 = "
.LC7:
	.string	", ptrL1 (adress, truncated to first 32 bits only) = "
.LC8:
	.string	", strL1 = "
.LC9:
	.string	"\nGlobal variables: "
.LC10:
	.string	"\nnumG1 = "
.LC11:
	.string	", charG1 (ascii value) = "
.LC12:
	.string	", ptrG1 (adress, truncated to first 32 bits only) = "
.LC13:
	.string	", fptrG1 (adress, truncated to first 32 bits only) = "
.LC14:
	.string	", strG1 = "
.LC15:
	.string	"\n"
.LC16:
	.string	"\nAssigning locals to globals: "
.LC17:
	.string	"\nnumG2 = "
.LC18:
	.string	", charG2 (ascii value) = "
.LC19:
	.string	", fltG2 = "
.LC20:
	.string	", ptrG2 (adress, truncated to first 32 bits only) = "
.LC21:
	.string	", strG2 = "
.LC22:
	.string	"\nSUCCESS: Local variables assigned to global variables."
.LC23:
	.string	"\nFAILURE: Local variables not assigned to global variables."
.LC24:
	.string	"\n"
.LC25:
	.string	"\nAssigning globals to locals: "
.LC26:
	.string	"\nnumL2 = "
.LC27:
	.string	", charL2 (ascii value) = "
.LC28:
	.string	", ptrL2 (adress, truncated to first 32 bits only) = "
.LC29:
	.string	", strL2 = "
.LC30:
	.string	"\nSUCCESS: Global variables assigned to local variables."
.LC31:
	.string	"\nFAILURE: Global variables not assigned to local variables."
.LC32:
	.string	"\n"
.LC33:
	.string	"\nAssigning globals to globals: "
.LC34:
	.string	"\nnumG2 = "
.LC35:
	.string	", charG2 (ascii value) = "
.LC36:
	.string	", ptrG2 (adress, truncated to first 32 bits only) = "
.LC37:
	.string	", strG2 = "
.LC38:
	.string	"\nSUCCESS: Global variables assigned to global variables."
.LC39:
	.string	"\nFAILURE: Global variables not assigned to global variables."
.LC40:
	.string	"\n\n"
	.comm	charG2,1,1
	.comm	fltG2,8,8
	.comm	fptrG1,8,8
	.comm	fptrG2,8,8
	.comm	numG2,4,4
	.comm	ptrG1,8,8
	.comm	ptrG2,8,8
	.comm	strG2,8,8
	.globl  numG1
	.data   
	.align  4
	.type   numG1, @object
	.size   numG1, 4
numG1:
	.long   20
	.globl  charG1
	.data   
	.type   charG1, @object
	.size   charG1, 1
charG1:
	.byte   98
	.globl  fltG1
	.data   
	.align  8
	.type   fltG1, @object
	.size   fltG1, 8
fltG1:
	.quad   
	.section	.data.rel.local
	.align  8
	.type   strG1, @object
	.size   strG1, 8
strG1:
	.quad   .LC0
	.text
	.globl  main
	.type   main, @function
main:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $683, %rsp
	movq    $.LC1, -326(%rbp)
								#t4 'fltptr' 4
	movq    -326(%rbp), %rdi
	call    printStr
	movl    %eax, -386(%rbp)
	movl    $5, -442(%rbp)
	movl    -442(%rbp), %eax
	movl    %eax, -38(%rbp)
	movb    $97, -499(%rbp)
	movb    -499(%rbp), %al
	movb    %al, -1(%rbp)
	movss   .LCFltConst0(%rip), %xmm0
	movss   %xmm0, -563(%rbp)
	movq    -563(%rbp), %rax
	movq    %rax, -10(%rbp)
	leaq    -38(%rbp), %rax
	movq    %rax, -627(%rbp)
	movq    -627(%rbp), %rax
	movq    %rax, -50(%rbp)
	movq    $.LC2, -82(%rbp)
	movq    -82(%rbp), %rax
	movq    %rax, -66(%rbp)
	movq    $.LC3, -146(%rbp)
								#t11 'fltptr' 4
	movq    -146(%rbp), %rdi
	call    printStr
	movl    %eax, -166(%rbp)
	movq    $.LC4, -174(%rbp)
								#t13 'fltptr' 4
	movq    -174(%rbp), %rdi
	call    printStr
	movl    %eax, -178(%rbp)
								#numL1 'int' 2
	movl    -38(%rbp), %edi
	call    printInt
	movl    %eax, -182(%rbp)
	movq    $.LC5, -190(%rbp)
								#t16 'fltptr' 4
	movq    -190(%rbp), %rdi
	call    printStr
	movl    %eax, -194(%rbp)
	movb    -1(%rbp), %dil
	call    printInt
	movl    %eax, -198(%rbp)
	movq    $.LC6, -206(%rbp)
								#t19 'fltptr' 4
	movq    -206(%rbp), %rdi
	call    printStr
	movl    %eax, -210(%rbp)
								#fltL1 'fltptr' 3
	movq    -10(%rbp), %rdi
	movss   -10(%rbp), %xmm0
	call    printFlt
	movl    %eax, -214(%rbp)
	movq    $.LC7, -222(%rbp)
								#t22 'fltptr' 4
	movq    -222(%rbp), %rdi
	call    printStr
	movl    %eax, -226(%rbp)
								#ptrL1 'fltptr' 4
	movq    -50(%rbp), %rdi
	call    printInt
	movl    %eax, -230(%rbp)
	movq    $.LC8, -238(%rbp)
								#t25 'fltptr' 4
	movq    -238(%rbp), %rdi
	call    printStr
	movl    %eax, -242(%rbp)
								#strL1 'fltptr' 4
	movq    -66(%rbp), %rdi
	call    printStr
	movl    %eax, -246(%rbp)
	leaq    numG1, %rax
	movq    %rax, -254(%rbp)
	movq    -254(%rbp), %rax
	movq    %rax, ptrG1
	leaq    fltG1, %rax
	movq    %rax, -262(%rbp)
	movq    -262(%rbp), %rax
	movq    %rax, fptrG1
	movq    $.LC9, -270(%rbp)
								#t30 'fltptr' 4
	movq    -270(%rbp), %rdi
	call    printStr
	movl    %eax, -274(%rbp)
	movq    $.LC10, -282(%rbp)
								#t32 'fltptr' 4
	movq    -282(%rbp), %rdi
	call    printStr
	movl    %eax, -286(%rbp)
								#numG1 'int' 2
	movl    numG1, %edi
	call    printInt
	movl    %eax, -290(%rbp)
	movq    $.LC11, -298(%rbp)
								#t35 'fltptr' 4
	movq    -298(%rbp), %rdi
	call    printStr
	movl    %eax, -302(%rbp)
	movb    charG1, %dil
	call    printInt
	movl    %eax, -306(%rbp)
	movq    $.LC12, -314(%rbp)
								#t38 'fltptr' 4
	movq    -314(%rbp), %rdi
	call    printStr
	movl    %eax, -318(%rbp)
								#ptrG1 'fltptr' 4
	movq    ptrG1, %rdi
	call    printInt
	movl    %eax, -330(%rbp)
	movq    $.LC13, -338(%rbp)
								#t41 'fltptr' 4
	movq    -338(%rbp), %rdi
	call    printStr
	movl    %eax, -342(%rbp)
								#fptrG1 'fltptr' 4
	movq    fptrG1, %rdi
	call    printFlt
	movl    %eax, -346(%rbp)
	movq    $.LC14, -354(%rbp)
								#t44 'fltptr' 4
	movq    -354(%rbp), %rdi
	call    printStr
	movl    %eax, -358(%rbp)
								#strG1 'fltptr' 4
	movq    strG1, %rdi
	call    printStr
	movl    %eax, -362(%rbp)
	movq    $.LC15, -370(%rbp)
								#t47 'fltptr' 4
	movq    -370(%rbp), %rdi
	call    printStr
	movl    %eax, -374(%rbp)
	movq    $.LC16, -382(%rbp)
								#t49 'fltptr' 4
	movq    -382(%rbp), %rdi
	call    printStr
	movl    %eax, -390(%rbp)
	movl    -38(%rbp), %eax
	movl    %eax, numG2
	movb    -1(%rbp), %al
	movb    %al, charG2
	movq    -10(%rbp), %rax
	movq    %rax, fltG2
	movq    -50(%rbp), %rax
	movq    %rax, ptrG2
	movq    -66(%rbp), %rax
	movq    %rax, strG2
	movq    $.LC17, -398(%rbp)
								#t51 'fltptr' 4
	movq    -398(%rbp), %rdi
	call    printStr
	movl    %eax, -402(%rbp)
								#numG2 'int' 2
	movl    numG2, %edi
	call    printInt
	movl    %eax, -406(%rbp)
	movq    $.LC18, -414(%rbp)
								#t54 'fltptr' 4
	movq    -414(%rbp), %rdi
	call    printStr
	movl    %eax, -418(%rbp)
	movb    charG2, %dil
	call    printInt
	movl    %eax, -422(%rbp)
	movq    $.LC19, -430(%rbp)
								#t57 'fltptr' 4
	movq    -430(%rbp), %rdi
	call    printStr
	movl    %eax, -434(%rbp)
								#fltG2 'fltptr' 3
	movq    fltG2, %rdi
	movss   fltG2, %xmm0
	call    printFlt
	movl    %eax, -438(%rbp)
	movq    $.LC20, -450(%rbp)
								#t60 'fltptr' 4
	movq    -450(%rbp), %rdi
	call    printStr
	movl    %eax, -454(%rbp)
								#ptrG2 'fltptr' 4
	movq    ptrG2, %rdi
	call    printInt
	movl    %eax, -458(%rbp)
	movq    $.LC21, -466(%rbp)
								#t63 'fltptr' 4
	movq    -466(%rbp), %rdi
	call    printStr
	movl    %eax, -470(%rbp)
								#strG2 'fltptr' 4
	movq    strG2, %rdi
	call    printStr
	movl    %eax, -474(%rbp)
	movl    -38(%rbp), %eax
	cmpl    %eax, numG2
	je      .L1
	jmp     .L2
.L1:
	movb    -1(%rbp), %al
	cmpb    %al, charG2
	je      .L3
	jmp     .L2
.L3:
	movq    -10(%rbp), %rax
	cmpq    %rax, fltG2
	je      .L4
	jmp     .L2
.L4:
	movq    -50(%rbp), %rax
	cmpq    %rax, ptrG2
	je      .L5
	jmp     .L2
.L5:
	movq    -66(%rbp), %rax
	cmpq    %rax, strG2
	je      .L6
	jmp     .L2
.L6:
	movq    $.LC22, -482(%rbp)
								#t66 'fltptr' 4
	movq    -482(%rbp), %rdi
	call    printStr
	movl    %eax, -486(%rbp)
	jmp     .L7
.L2:
	movq    $.LC23, -494(%rbp)
								#t68 'fltptr' 4
	movq    -494(%rbp), %rdi
	call    printStr
	movl    %eax, -498(%rbp)
.L7:
	movq    $.LC24, -507(%rbp)
								#t70 'fltptr' 4
	movq    -507(%rbp), %rdi
	call    printStr
	movl    %eax, -511(%rbp)
	movq    $.LC25, -519(%rbp)
								#t72 'fltptr' 4
	movq    -519(%rbp), %rdi
	call    printStr
	movl    %eax, -523(%rbp)
	movl    numG1, %eax
	movl    %eax, -42(%rbp)
	movb    charG1, %al
	movb    %al, -2(%rbp)
	movq    fltG1, %rax
	movq    %rax, -18(%rbp)
	movq    ptrG1, %rax
	movq    %rax, -58(%rbp)
	movq    fptrG1, %rax
	movq    %rax, -34(%rbp)
	movq    strG1, %rax
	movq    %rax, -74(%rbp)
	movq    $.LC26, -531(%rbp)
								#t74 'fltptr' 4
	movq    -531(%rbp), %rdi
	call    printStr
	movl    %eax, -535(%rbp)
								#numL2 'int' 2
	movl    -42(%rbp), %edi
	call    printInt
	movl    %eax, -539(%rbp)
	movq    $.LC27, -547(%rbp)
								#t77 'fltptr' 4
	movq    -547(%rbp), %rdi
	call    printStr
	movl    %eax, -551(%rbp)
	movb    -2(%rbp), %dil
	call    printInt
	movl    %eax, -555(%rbp)
	movq    $.LC28, -571(%rbp)
								#t80 'fltptr' 4
	movq    -571(%rbp), %rdi
	call    printStr
	movl    %eax, -575(%rbp)
								#ptrL2 'fltptr' 4
	movq    -58(%rbp), %rdi
	call    printInt
	movl    %eax, -579(%rbp)
	movq    $.LC29, -587(%rbp)
								#t83 'fltptr' 4
	movq    -587(%rbp), %rdi
	call    printStr
	movl    %eax, -591(%rbp)
								#strL2 'fltptr' 4
	movq    -74(%rbp), %rdi
	call    printStr
	movl    %eax, -595(%rbp)
	movl    numG1, %eax
	cmpl    %eax, -42(%rbp)
	je      .L8
	jmp     .L9
.L8:
	movb    charG1, %al
	cmpb    %al, -2(%rbp)
	je      .L10
	jmp     .L9
.L10:
	movq    fltG1, %rax
	cmpq    %rax, -18(%rbp)
	je      .L11
	jmp     .L9
.L11:
	movq    ptrG1, %rax
	cmpq    %rax, -58(%rbp)
	je      .L12
	jmp     .L9
.L12:
	movq    strG1, %rax
	cmpq    %rax, -74(%rbp)
	je      .L13
	jmp     .L9
.L13:
	movq    $.LC30, -603(%rbp)
								#t86 'fltptr' 4
	movq    -603(%rbp), %rdi
	call    printStr
	movl    %eax, -607(%rbp)
	jmp     .L14
.L9:
	movq    $.LC31, -615(%rbp)
								#t88 'fltptr' 4
	movq    -615(%rbp), %rdi
	call    printStr
	movl    %eax, -619(%rbp)
.L14:
	movq    $.LC32, -635(%rbp)
								#t90 'fltptr' 4
	movq    -635(%rbp), %rdi
	call    printStr
	movl    %eax, -639(%rbp)
	movq    $.LC33, -647(%rbp)
								#t92 'fltptr' 4
	movq    -647(%rbp), %rdi
	call    printStr
	movl    %eax, -651(%rbp)
	movl    numG1, %eax
	movl    %eax, numG2
	movb    charG1, %al
	movb    %al, charG2
	movq    fltG1, %rax
	movq    %rax, fltG2
	movq    ptrG1, %rax
	movq    %rax, ptrG2
	movq    strG1, %rax
	movq    %rax, strG2
	movq    $.LC34, -659(%rbp)
								#t94 'fltptr' 4
	movq    -659(%rbp), %rdi
	call    printStr
	movl    %eax, -663(%rbp)
								#numG2 'int' 2
	movl    numG2, %edi
	call    printInt
	movl    %eax, -667(%rbp)
	movq    $.LC35, -675(%rbp)
								#t97 'fltptr' 4
	movq    -675(%rbp), %rdi
	call    printStr
	movl    %eax, -679(%rbp)
	movb    charG2, %dil
	call    printInt
	movl    %eax, -683(%rbp)
	movq    $.LC36, -90(%rbp)
								#t100 'fltptr' 4
	movq    -90(%rbp), %rdi
	call    printStr
	movl    %eax, -94(%rbp)
								#ptrG2 'fltptr' 4
	movq    ptrG2, %rdi
	call    printInt
	movl    %eax, -98(%rbp)
	movq    $.LC37, -106(%rbp)
								#t103 'fltptr' 4
	movq    -106(%rbp), %rdi
	call    printStr
	movl    %eax, -110(%rbp)
								#strG2 'fltptr' 4
	movq    strG2, %rdi
	call    printStr
	movl    %eax, -114(%rbp)
	movl    numG1, %eax
	cmpl    %eax, numG2
	je      .L15
	jmp     .L16
.L15:
	movb    charG1, %al
	cmpb    %al, charG2
	je      .L17
	jmp     .L16
.L17:
	movq    fltG1, %rax
	cmpq    %rax, fltG2
	je      .L18
	jmp     .L16
.L18:
	movq    ptrG1, %rax
	cmpq    %rax, ptrG2
	je      .L19
	jmp     .L16
.L19:
	movq    strG1, %rax
	cmpq    %rax, strG2
	je      .L20
	jmp     .L16
.L20:
	movq    $.LC38, -122(%rbp)
								#t106 'fltptr' 4
	movq    -122(%rbp), %rdi
	call    printStr
	movl    %eax, -126(%rbp)
	jmp     .L21
.L16:
	movq    $.LC39, -134(%rbp)
								#t108 'fltptr' 4
	movq    -134(%rbp), %rdi
	call    printStr
	movl    %eax, -138(%rbp)
.L21:
	movq    $.LC40, -154(%rbp)
								#t110 'fltptr' 4
	movq    -154(%rbp), %rdi
	call    printStr
	movl    %eax, -158(%rbp)
	movl    $0, -162(%rbp)
	movl    -162(%rbp), %eax
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
