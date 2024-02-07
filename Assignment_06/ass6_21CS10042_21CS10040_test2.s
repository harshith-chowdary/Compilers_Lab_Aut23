	.file	"ass6_21CS10042_21CS10040_test2.c"

#	Allocation of function variables and temporaries on the stack:

#	fillSeq
#	i: -16
#	n: -4
#	seq: -12
#	t0: -20
#	t1: -24
#	t10: -28
#	t11: -32
#	t12: -36
#	t13: -40
#	t14: -44
#	t15: -48
#	t16: -52
#	t17: -56
#	t2: -60
#	t3: -64
#	t4: -68
#	t5: -72
#	t6: -76
#	t7: -80
#	t8: -84
#	t9: -88
#	main
#	harshith: -5
#	i: -9
#	nihith: -14
#	seq: -94
#	t18: -102
#	t19: -106
#	t20: -110
#	t21: -114
#	t22: -118
#	t23: -119
#	t24: -123
#	t25: -127
#	t26: -128
#	t27: -132
#	t28: -136
#	t29: -137
#	t30: -141
#	t31: -145
#	t32: -146
#	t33: -150
#	t34: -154
#	t35: -155
#	t36: -159
#	t37: -163
#	t38: -164
#	t39: -168
#	t40: -172
#	t41: -173
#	t42: -177
#	t43: -181
#	t44: -182
#	t45: -190
#	t46: -194
#	t47: -198
#	t48: -202
#	t49: -206
#	t50: -210
#	t51: -211
#	t52: -215
#	t53: -223
#	t54: -227
#	t55: -231
#	t56: -235
#	t57: -239
#	t58: -240
#	t59: -244
#	t60: -248
#	t61: -249
#	t62: -253
#	t63: -257
#	t64: -258
#	t65: -262
#	t66: -266
#	t67: -267
#	t68: -271
#	t69: -275
#	t70: -276
#	t71: -280
#	t72: -284
#	t73: -285
#	t74: -293
#	t75: -297
#	t76: -301
#	t77: -305
#	t78: -309
#	t79: -313
#	t80: -314
#	t81: -318
#	t82: -326
#	t83: -330
#	t84: -334
#	t85: -338
#	t87: -346
#	t88: -350
#	t89: -354
#	t90: -358
#	t91: -362
#	t92: -366
#	t93: -370
#	t94: -374
#	t95: -382
#	t96: -386
#	t97: -394
#	t98: -398
#	t99: -402
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
.LC0:
	.string	"\n#### TEST 2 (1-D Arrays) ####"
.LC1:
	.string	"\nAscii values of Harshith: "
.LC2:
	.string	" "
.LC3:
	.string	"\nAscii values of Nihith: "
.LC4:
	.string	" "
.LC5:
	.string	"\nDifference Series: "
.LC6:
	.string	" "
.LC7:
	.string	"\n\n"
	.text
	.globl  fillSeq
	.type   fillSeq, @function
fillSeq:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $88, %rsp
								#seq 'flt' 4
	movq    %rdi, -12(%rbp)
								#n 'int' 2
	movl    %esi, -4(%rbp)
	movl    $0, -20(%rbp)
	movl    -20(%rbp), %eax
	movl    %eax, -16(%rbp)
.L3:
	movl    -4(%rbp), %eax
	cmpl    %eax, -16(%rbp)
	jl      .L2
	jmp     .LFE0
.L6:
	movl    -16(%rbp), %eax
	movl    %eax, -24(%rbp)
	incl    -16(%rbp)
	jmp     .L3
.L2:
	movl    $0, -60(%rbp)
	movl    -60(%rbp), %eax
	cmpl    %eax, -16(%rbp)
	je      .L4
	jmp     .L5
.L4:
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -64(%rbp)
	movl    $1, -68(%rbp)
	movl    -64(%rbp), %eax
	cltq    
	addq    -12(%rbp), %rax
	movl    -68(%rbp), %ebx
	movl    %ebx, (%rax)
	jmp     .L6
.L5:
	movl    $1, -72(%rbp)
	movl    -72(%rbp), %eax
	cmpl    %eax, -16(%rbp)
	je      .L7
	jmp     .L8
.L7:
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -76(%rbp)
	movl    $2, -80(%rbp)
	movl    -76(%rbp), %eax
	cltq    
	addq    -12(%rbp), %rax
	movl    -80(%rbp), %ebx
	movl    %ebx, (%rax)
	jmp     .L6
.L8:
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -84(%rbp)
	movl    $1, -88(%rbp)
	movl    -16(%rbp), %eax
	subl    -88(%rbp), %eax
	movl    %eax, -28(%rbp)
	movl    -28(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -32(%rbp)
	movl    -32(%rbp), %eax
	cltq    
	addq    -12(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -36(%rbp)
	movl    $2, -40(%rbp)
	movl    -16(%rbp), %eax
	subl    -40(%rbp), %eax
	movl    %eax, -44(%rbp)
	movl    -44(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -48(%rbp)
	movl    -48(%rbp), %eax
	cltq    
	addq    -12(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -52(%rbp)
	movl    -36(%rbp), %eax
	subl    -52(%rbp), %eax
	movl    %eax, -56(%rbp)
	movl    -84(%rbp), %eax
	cltq    
	addq    -12(%rbp), %rax
	movl    -56(%rbp), %ebx
	movl    %ebx, (%rax)
	jmp     .L6
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   fillSeq, .-fillSeq
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
	subq    $402, %rsp
	movq    $.LC0, -102(%rbp)
								#t18 'fltptr' 4
	movq    -102(%rbp), %rdi
	call    printStr
	movl    %eax, -106(%rbp)
	movl    $5, -110(%rbp)
	movl    $0, -114(%rbp)
	movl    -114(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -118(%rbp)
	movb    $72, -119(%rbp)
	movl    -118(%rbp), %eax
	cltq    
	movl    -119(%rbp), %ebx
	movl    %ebx, -5(%rbp, %rax, 1)
	movl    $1, -123(%rbp)
	movl    -123(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -127(%rbp)
	movb    $97, -128(%rbp)
	movl    -127(%rbp), %eax
	cltq    
	movl    -128(%rbp), %ebx
	movl    %ebx, -5(%rbp, %rax, 1)
	movl    $2, -132(%rbp)
	movl    -132(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -136(%rbp)
	movb    $114, -137(%rbp)
	movl    -136(%rbp), %eax
	cltq    
	movl    -137(%rbp), %ebx
	movl    %ebx, -5(%rbp, %rax, 1)
	movl    $3, -141(%rbp)
	movl    -141(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -145(%rbp)
	movb    $115, -146(%rbp)
	movl    -145(%rbp), %eax
	cltq    
	movl    -146(%rbp), %ebx
	movl    %ebx, -5(%rbp, %rax, 1)
	movl    $4, -150(%rbp)
	movl    -150(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -154(%rbp)
	movb    $104, -155(%rbp)
	movl    -154(%rbp), %eax
	cltq    
	movl    -155(%rbp), %ebx
	movl    %ebx, -5(%rbp, %rax, 1)
	movl    $5, -159(%rbp)
	movl    -159(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -163(%rbp)
	movb    $105, -164(%rbp)
	movl    -163(%rbp), %eax
	cltq    
	movl    -164(%rbp), %ebx
	movl    %ebx, -5(%rbp, %rax, 1)
	movl    $6, -168(%rbp)
	movl    -168(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -172(%rbp)
	movb    $116, -173(%rbp)
	movl    -172(%rbp), %eax
	cltq    
	movl    -173(%rbp), %ebx
	movl    %ebx, -5(%rbp, %rax, 1)
	movl    $7, -177(%rbp)
	movl    -177(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -181(%rbp)
	movb    $104, -182(%rbp)
	movl    -181(%rbp), %eax
	cltq    
	movl    -182(%rbp), %ebx
	movl    %ebx, -5(%rbp, %rax, 1)
	movq    $.LC1, -190(%rbp)
								#t45 'fltptr' 4
	movq    -190(%rbp), %rdi
	call    printStr
	movl    %eax, -194(%rbp)
	movl    $0, -198(%rbp)
	movl    -198(%rbp), %eax
	movl    %eax, -9(%rbp)
.L11:
	movl    $5, -202(%rbp)
	movl    -202(%rbp), %eax
	cmpl    %eax, -9(%rbp)
	jl      .L9
	jmp     .L10
.L12:
	movl    -9(%rbp), %eax
	movl    %eax, -206(%rbp)
	incl    -9(%rbp)
	jmp     .L11
.L9:
	movl    -9(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -210(%rbp)
	movl    -210(%rbp), %eax
	cltq    
	movl    -5(%rbp, %rax, 1), %eax
	movl    %eax, -211(%rbp)
	movb    -211(%rbp), %dil
	call    printInt
	movl    %eax, -215(%rbp)
	movq    $.LC2, -223(%rbp)
								#t53 'fltptr' 4
	movq    -223(%rbp), %rdi
	call    printStr
	movl    %eax, -227(%rbp)
	jmp     .L12
.L10:
	movl    $5, -231(%rbp)
	movl    $0, -235(%rbp)
	movl    -235(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -239(%rbp)
	movb    $78, -240(%rbp)
	movl    -239(%rbp), %eax
	cltq    
	movl    -240(%rbp), %ebx
	movl    %ebx, -14(%rbp, %rax, 1)
	movl    $1, -244(%rbp)
	movl    -244(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -248(%rbp)
	movb    $105, -249(%rbp)
	movl    -248(%rbp), %eax
	cltq    
	movl    -249(%rbp), %ebx
	movl    %ebx, -14(%rbp, %rax, 1)
	movl    $2, -253(%rbp)
	movl    -253(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -257(%rbp)
	movb    $104, -258(%rbp)
	movl    -257(%rbp), %eax
	cltq    
	movl    -258(%rbp), %ebx
	movl    %ebx, -14(%rbp, %rax, 1)
	movl    $3, -262(%rbp)
	movl    -262(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -266(%rbp)
	movb    $105, -267(%rbp)
	movl    -266(%rbp), %eax
	cltq    
	movl    -267(%rbp), %ebx
	movl    %ebx, -14(%rbp, %rax, 1)
	movl    $4, -271(%rbp)
	movl    -271(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -275(%rbp)
	movb    $116, -276(%rbp)
	movl    -275(%rbp), %eax
	cltq    
	movl    -276(%rbp), %ebx
	movl    %ebx, -14(%rbp, %rax, 1)
	movl    $5, -280(%rbp)
	movl    -280(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -284(%rbp)
	movb    $104, -285(%rbp)
	movl    -284(%rbp), %eax
	cltq    
	movl    -285(%rbp), %ebx
	movl    %ebx, -14(%rbp, %rax, 1)
	movq    $.LC3, -293(%rbp)
								#t74 'fltptr' 4
	movq    -293(%rbp), %rdi
	call    printStr
	movl    %eax, -297(%rbp)
	movl    $0, -301(%rbp)
	movl    -301(%rbp), %eax
	movl    %eax, -9(%rbp)
.L15:
	movl    $5, -305(%rbp)
	movl    -305(%rbp), %eax
	cmpl    %eax, -9(%rbp)
	jl      .L13
	jmp     .L14
.L16:
	movl    -9(%rbp), %eax
	movl    %eax, -309(%rbp)
	incl    -9(%rbp)
	jmp     .L15
.L13:
	movl    -9(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -313(%rbp)
	movl    -313(%rbp), %eax
	cltq    
	movl    -14(%rbp, %rax, 1), %eax
	movl    %eax, -314(%rbp)
	movb    -314(%rbp), %dil
	call    printInt
	movl    %eax, -318(%rbp)
	movq    $.LC4, -326(%rbp)
								#t82 'fltptr' 4
	movq    -326(%rbp), %rdi
	call    printStr
	movl    %eax, -330(%rbp)
	jmp     .L16
.L14:
	movl    $20, -334(%rbp)
	movl    $20, -338(%rbp)
								#t85 'int' 2
	movl    -338(%rbp), %esi
	leaq    -94(%rbp), %rdi
	call    fillSeq
	movq    $.LC5, -346(%rbp)
								#t87 'fltptr' 4
	movq    -346(%rbp), %rdi
	call    printStr
	movl    %eax, -350(%rbp)
	movl    $0, -354(%rbp)
	movl    -354(%rbp), %eax
	movl    %eax, -9(%rbp)
.L19:
	movl    $20, -358(%rbp)
	movl    -358(%rbp), %eax
	cmpl    %eax, -9(%rbp)
	jl      .L17
	jmp     .L18
.L20:
	movl    -9(%rbp), %eax
	movl    %eax, -362(%rbp)
	incl    -9(%rbp)
	jmp     .L19
.L17:
	movl    -9(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -366(%rbp)
	movl    -366(%rbp), %eax
	cltq    
	movl    -94(%rbp, %rax, 1), %eax
	movl    %eax, -370(%rbp)
								#t93 'int' 2
	movl    -370(%rbp), %edi
	call    printInt
	movl    %eax, -374(%rbp)
	movq    $.LC6, -382(%rbp)
								#t95 'fltptr' 4
	movq    -382(%rbp), %rdi
	call    printStr
	movl    %eax, -386(%rbp)
	jmp     .L20
.L18:
	movq    $.LC7, -394(%rbp)
								#t97 'fltptr' 4
	movq    -394(%rbp), %rdi
	call    printStr
	movl    %eax, -398(%rbp)
	movl    $0, -402(%rbp)
	movl    -402(%rbp), %eax
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
