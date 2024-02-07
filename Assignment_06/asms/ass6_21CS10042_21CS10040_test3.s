	.file	"ass6_21CS10042_21CS10040_test3.c"

#	Allocation of function variables and temporaries on the stack:

#	main
#	c: -1
#	cPtr: -9
#	flt: -17
#	fltPtr: -25
#	n: -29
#	nPtr: -37
#	retChar: -38
#	retCharPtr: -46
#	retFlt: -54
#	retFltPtr: -62
#	retInt: -66
#	retIntPtr: -74
#	retStr: -82
#	str: -90
#	t10: -94
#	t11: -102
#	t12: -106
#	t13: -114
#	t14: -118
#	t15: -126
#	t16: -134
#	t17: -138
#	t18: -146
#	t19: -150
#	t2: -158
#	t20: -159
#	t21: -167
#	t22: -175
#	t23: -179
#	t24: -180
#	t25: -188
#	t26: -192
#	t27: -200
#	t28: -204
#	t29: -212
#	t3: -216
#	t30: -220
#	t31: -228
#	t32: -236
#	t33: -240
#	t34: -248
#	t35: -252
#	t36: -260
#	t37: -268
#	t38: -276
#	t39: -280
#	t4: -284
#	t40: -292
#	t41: -300
#	t42: -304
#	t43: -312
#	t44: -316
#	t45: -324
#	t46: -328
#	t47: -336
#	t48: -344
#	t49: -348
#	t5: -356
#	t50: -364
#	t51: -368
#	t52: -376
#	t53: -384
#	t54: -388
#	t55: -396
#	t56: -404
#	t57: -408
#	t58: -416
#	t59: -420
#	t6: -428
#	t60: -436
#	t61: -440
#	t62: -444
#	t63: -452
#	t64: -456
#	t65: -464
#	t66: -468
#	t67: -472
#	t68: -480
#	t69: -484
#	t7: -488
#	t70: -496
#	t71: -500
#	t73: -508
#	t74: -512
#	t75: -516
#	t8: -520
#	t9: -528
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
#	testChar
#	c: -1
#	testCharPtr
#	cPtr: -8
#	testFlt
#	flt: -8
#	testFltPtr
#	fltPtr: -8
#	testInt
#	num: -4
#	testIntPtr
#	numPtr: -8
#	testVoid
#	t0: -8
#	t1: -12

	.section	.rodata
.LCFltConst0:
	.long	1116076769
	.align 4
.LC0:
	.string	"\nHello World, I am a void function. I don't return anything."
.LC1:
	.string	"\n#### TEST 3 (Function calls and returns for int, char, float and their ptrs) ####"
.LC2:
	.string	"\nTesting integer value return: "
.LC3:
	.string	"Passed"
.LC4:
	.string	"Failed"
.LC5:
	.string	"\nTesting integer pointer return: "
.LC6:
	.string	"Passed"
.LC7:
	.string	"Failed"
.LC8:
	.string	"\nTesting character value return: "
.LC9:
	.string	"Passed"
.LC10:
	.string	"Failed"
.LC11:
	.string	"\nTesting character pointer return: "
.LC12:
	.string	"Passed"
.LC13:
	.string	"Failed"
.LC14:
	.string	"\nTesting float value return: "
.LC15:
	.string	"Passed"
.LC16:
	.string	"Failed"
.LC17:
	.string	"\nTesting float pointer return: "
.LC18:
	.string	"Passed"
.LC19:
	.string	"Failed"
.LC20:
	.string	"Hello World, I am a string."
.LC21:
	.string	"\nTesting string return: "
.LC22:
	.string	"Passed"
.LC23:
	.string	"Failed"
.LC24:
	.string	"\n[ Passed string: "
.LC25:
	.string	" ], "
.LC26:
	.string	"[ Returned string: "
.LC27:
	.string	" ]"
.LC28:
	.string	"\nTesting void return: "
.LC29:
	.string	"\n\n"
	.text
	.globl  testInt
	.type   testInt, @function
testInt:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $4, %rsp
								#num 'int' 2
	movl    %edi, -4(%rbp)
	movl    -4(%rbp), %eax
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testInt, .-testInt
	.text
	.globl  testIntPtr
	.type   testIntPtr, @function
testIntPtr:
.LFB1:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $8, %rsp
								#numPtr 'flt' 4
	movq    %rdi, -8(%rbp)
	movq    -8(%rbp), %rax
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testIntPtr, .-testIntPtr
	.text
	.globl  testChar
	.type   testChar, @function
testChar:
.LFB2:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $1, %rsp
	movb    %dil, -1(%rbp)
	movb    -1(%rbp), %al
.LFE2:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testChar, .-testChar
	.text
	.globl  testCharPtr
	.type   testCharPtr, @function
testCharPtr:
.LFB3:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $8, %rsp
								#cPtr 'flt' 4
	movq    %rdi, -8(%rbp)
	movq    -8(%rbp), %rax
.LFE3:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testCharPtr, .-testCharPtr
	.text
	.globl  testFlt
	.type   testFlt, @function
testFlt:
.LFB4:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $8, %rsp
								#flt 'flt' 3
	movq    %rdi, -8(%rbp)
	movq    -8(%rbp), %rax
.LFE4:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testFlt, .-testFlt
	.text
	.globl  testFltPtr
	.type   testFltPtr, @function
testFltPtr:
.LFB5:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $8, %rsp
								#fltPtr 'flt' 4
	movq    %rdi, -8(%rbp)
	movq    -8(%rbp), %rax
.LFE5:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testFltPtr, .-testFltPtr
	.text
	.globl  testVoid
	.type   testVoid, @function
testVoid:
.LFB6:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $12, %rsp
	movq    $.LC0, -8(%rbp)
								#t0 'fltptr' 4
	movq    -8(%rbp), %rdi
	call    printStr
	movl    %eax, -12(%rbp)
.LFE6:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testVoid, .-testVoid
	.text
	.globl  main
	.type   main, @function
main:
.LFB7:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $528, %rsp
	movq    $.LC1, -158(%rbp)
								#t2 'fltptr' 4
	movq    -158(%rbp), %rdi
	call    printStr
	movl    %eax, -216(%rbp)
	movl    $10, -284(%rbp)
	movl    -284(%rbp), %eax
	movl    %eax, -29(%rbp)
	leaq    -29(%rbp), %rax
	movq    %rax, -356(%rbp)
	movq    -356(%rbp), %rax
	movq    %rax, -37(%rbp)
	movq    $.LC2, -428(%rbp)
								#t6 'fltptr' 4
	movq    -428(%rbp), %rdi
	call    printStr
	movl    %eax, -488(%rbp)
								#n 'int' 2
	movl    -29(%rbp), %edi
	call    testInt
	movl    %eax, -520(%rbp)
	movl    -520(%rbp), %eax
	movl    %eax, -66(%rbp)
	movl    -29(%rbp), %eax
	cmpl    %eax, -66(%rbp)
	je      .L8
	jmp     .L9
.L8:
	movq    $.LC3, -528(%rbp)
								#t9 'fltptr' 4
	movq    -528(%rbp), %rdi
	call    printStr
	movl    %eax, -94(%rbp)
	jmp     .L10
.L9:
	movq    $.LC4, -102(%rbp)
								#t11 'fltptr' 4
	movq    -102(%rbp), %rdi
	call    printStr
	movl    %eax, -106(%rbp)
.L10:
	movq    $.LC5, -114(%rbp)
								#t13 'fltptr' 4
	movq    -114(%rbp), %rdi
	call    printStr
	movl    %eax, -118(%rbp)
								#nPtr 'fltptr' 4
	movq    -37(%rbp), %rdi
	call    testIntPtr
	movq    %rax, -126(%rbp)
	movq    -126(%rbp), %rax
	movq    %rax, -74(%rbp)
	movq    -37(%rbp), %rax
	cmpq    %rax, -74(%rbp)
	je      .L11
	jmp     .L12
.L11:
	movq    $.LC6, -134(%rbp)
								#t16 'fltptr' 4
	movq    -134(%rbp), %rdi
	call    printStr
	movl    %eax, -138(%rbp)
	jmp     .L13
.L12:
	movq    $.LC7, -146(%rbp)
								#t18 'fltptr' 4
	movq    -146(%rbp), %rdi
	call    printStr
	movl    %eax, -150(%rbp)
.L13:
	movb    $120, -159(%rbp)
	movb    -159(%rbp), %al
	movb    %al, -1(%rbp)
	leaq    -1(%rbp), %rax
	movq    %rax, -167(%rbp)
	movq    -167(%rbp), %rax
	movq    %rax, -9(%rbp)
	movq    $.LC8, -175(%rbp)
								#t22 'fltptr' 4
	movq    -175(%rbp), %rdi
	call    printStr
	movl    %eax, -179(%rbp)
	movb    -1(%rbp), %dil
	call    testChar
	movb    %al, -180(%rbp)
	movb    -180(%rbp), %al
	movb    %al, -38(%rbp)
	movb    -1(%rbp), %al
	cmpb    %al, -38(%rbp)
	je      .L14
	jmp     .L15
.L14:
	movq    $.LC9, -188(%rbp)
								#t25 'fltptr' 4
	movq    -188(%rbp), %rdi
	call    printStr
	movl    %eax, -192(%rbp)
	jmp     .L16
.L15:
	movq    $.LC10, -200(%rbp)
								#t27 'fltptr' 4
	movq    -200(%rbp), %rdi
	call    printStr
	movl    %eax, -204(%rbp)
.L16:
	movq    $.LC11, -212(%rbp)
								#t29 'fltptr' 4
	movq    -212(%rbp), %rdi
	call    printStr
	movl    %eax, -220(%rbp)
								#cPtr 'fltptr' 4
	movq    -9(%rbp), %rdi
	call    testCharPtr
	movq    %rax, -228(%rbp)
	movq    -228(%rbp), %rax
	movq    %rax, -46(%rbp)
	movq    -9(%rbp), %rax
	cmpq    %rax, -46(%rbp)
	je      .L17
	jmp     .L18
.L17:
	movq    $.LC12, -236(%rbp)
								#t32 'fltptr' 4
	movq    -236(%rbp), %rdi
	call    printStr
	movl    %eax, -240(%rbp)
	jmp     .L19
.L18:
	movq    $.LC13, -248(%rbp)
								#t34 'fltptr' 4
	movq    -248(%rbp), %rdi
	call    printStr
	movl    %eax, -252(%rbp)
.L19:
	movss   .LCFltConst0(%rip), %xmm0
	movss   %xmm0, -260(%rbp)
	movq    -260(%rbp), %rax
	movq    %rax, -17(%rbp)
	leaq    -17(%rbp), %rax
	movq    %rax, -268(%rbp)
	movq    -268(%rbp), %rax
	movq    %rax, -25(%rbp)
	movq    $.LC14, -276(%rbp)
								#t38 'fltptr' 4
	movq    -276(%rbp), %rdi
	call    printStr
	movl    %eax, -280(%rbp)
								#flt 'fltptr' 3
	movq    -17(%rbp), %rdi
	movss   -17(%rbp), %xmm0
	call    testFlt
	movq    %rax, -292(%rbp)
	movq    -292(%rbp), %rax
	movq    %rax, -54(%rbp)
	movq    -17(%rbp), %rax
	cmpq    %rax, -54(%rbp)
	je      .L20
	jmp     .L21
.L20:
	movq    $.LC15, -300(%rbp)
								#t41 'fltptr' 4
	movq    -300(%rbp), %rdi
	call    printStr
	movl    %eax, -304(%rbp)
	jmp     .L22
.L21:
	movq    $.LC16, -312(%rbp)
								#t43 'fltptr' 4
	movq    -312(%rbp), %rdi
	call    printStr
	movl    %eax, -316(%rbp)
.L22:
	movq    $.LC17, -324(%rbp)
								#t45 'fltptr' 4
	movq    -324(%rbp), %rdi
	call    printStr
	movl    %eax, -328(%rbp)
								#fltPtr 'fltptr' 4
	movq    -25(%rbp), %rdi
	call    testFltPtr
	movq    %rax, -336(%rbp)
	movq    -336(%rbp), %rax
	movq    %rax, -62(%rbp)
.L25:
	movq    $.LC18, -344(%rbp)
								#t48 'fltptr' 4
	movq    -344(%rbp), %rdi
	call    printStr
	movl    %eax, -348(%rbp)
	jmp     .L23
.L24:
	movq    $.LC19, -364(%rbp)
								#t50 'fltptr' 4
	movq    -364(%rbp), %rdi
	call    printStr
	movl    %eax, -368(%rbp)
	movq    0, %rax
	cmpq    %rax, -62(%rbp)
	je      .L24
	jmp     .L25
.L23:
	movq    $.LC20, -376(%rbp)
	movq    -376(%rbp), %rax
	movq    %rax, -90(%rbp)
	movq    $.LC21, -384(%rbp)
								#t53 'fltptr' 4
	movq    -384(%rbp), %rdi
	call    printStr
	movl    %eax, -388(%rbp)
								#str 'fltptr' 4
	movq    -90(%rbp), %rdi
	call    testCharPtr
	movq    %rax, -396(%rbp)
	movq    -396(%rbp), %rax
	movq    %rax, -82(%rbp)
	movq    -90(%rbp), %rax
	cmpq    %rax, -82(%rbp)
	je      .L26
	jmp     .L27
.L26:
	movq    $.LC22, -404(%rbp)
								#t56 'fltptr' 4
	movq    -404(%rbp), %rdi
	call    printStr
	movl    %eax, -408(%rbp)
	jmp     .L28
.L27:
	movq    $.LC23, -416(%rbp)
								#t58 'fltptr' 4
	movq    -416(%rbp), %rdi
	call    printStr
	movl    %eax, -420(%rbp)
.L28:
	movq    $.LC24, -436(%rbp)
								#t60 'fltptr' 4
	movq    -436(%rbp), %rdi
	call    printStr
	movl    %eax, -440(%rbp)
								#str 'fltptr' 4
	movq    -90(%rbp), %rdi
	call    printStr
	movl    %eax, -444(%rbp)
	movq    $.LC25, -452(%rbp)
								#t63 'fltptr' 4
	movq    -452(%rbp), %rdi
	call    printStr
	movl    %eax, -456(%rbp)
	movq    $.LC26, -464(%rbp)
								#t65 'fltptr' 4
	movq    -464(%rbp), %rdi
	call    printStr
	movl    %eax, -468(%rbp)
								#retStr 'fltptr' 4
	movq    -82(%rbp), %rdi
	call    printStr
	movl    %eax, -472(%rbp)
	movq    $.LC27, -480(%rbp)
								#t68 'fltptr' 4
	movq    -480(%rbp), %rdi
	call    printStr
	movl    %eax, -484(%rbp)
	movq    $.LC28, -496(%rbp)
								#t70 'fltptr' 4
	movq    -496(%rbp), %rdi
	call    printStr
	movl    %eax, -500(%rbp)
	call    testVoid
	movq    $.LC29, -508(%rbp)
								#t73 'fltptr' 4
	movq    -508(%rbp), %rdi
	call    printStr
	movl    %eax, -512(%rbp)
	movl    $0, -516(%rbp)
	movl    -516(%rbp), %eax
.LFE7:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
