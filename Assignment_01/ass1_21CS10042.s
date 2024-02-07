	.file	"code.c"
	.text
	.globl	calculateFrequency
	.type	calculateFrequency, @function
calculateFrequency:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp					  # Set up stack frame
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)               # Load parameter arr1 into local variable
	movl	%esi, -28(%rbp)               # Load parameter n into local variable
	movq	%rdx, -40(%rbp)               # Load parameter fr1 into local variable
	movl	$0, -12(%rbp)                 # Initialize 'i' to 0
	jmp	.L2
.L7:
	movl	$1, -4(%rbp)                  # Initialize 'ctr' to 1
	movl	-12(%rbp), %eax                # Load 'i' into eax
	addl	$1, %eax                      # Increment 'i'
	movl	%eax, -8(%rbp)                 # Store the incremented value back into 'i'
	jmp	.L3
.L5:
	movl	-12(%rbp), %eax                # Load 'i' into eax
	cltq                              # Sign-extend 'i' to rax
	leaq	0(,%rax,4), %rdx              # Calculate offset 'i * 4' and store in rdx
	movq	-24(%rbp), %rax               # Load address of arr1 into rax
	addq	%rdx, %rax                    # Add offset to rax
	movl	(%rax), %edx                   # Load arr1[i] into edx
	movl	-8(%rbp), %eax                 # Load 'ctr' into eax
	cltq                              # Sign-extend 'ctr' to rax
	leaq	0(,%rax,4), %rcx              # Calculate offset 'ctr * 4' and store in rcx
	movq	-24(%rbp), %rax               # Load address of arr1 into rax
	addq	%rcx, %rax                    # Add offset to rax
	movl	(%rax), %eax                   # Load arr1[ctr] into eax
	cmpl	%eax, %edx                     # Compare arr1[i] with arr1[ctr]
	jne	.L4                           # Jump to L4 if not equal
	addl	$1, -4(%rbp)                  # Increment 'ctr' by 1
	movl	-8(%rbp), %eax                 # Load 'ctr' into eax
	cltq                              # Sign-extend 'ctr' to rax
	leaq	0(,%rax,4), %rdx              # Calculate offset 'ctr * 4' and store in rdx
	movq	-40(%rbp), %rax               # Load address of fr1 into rax
	addq	%rdx, %rax                    # Add offset to rax
	movl	$0, (%rax)                     # Set fr1[ctr] to 0
.L4:
	addl	$1, -8(%rbp)                  # Increment 'ctr' by 1
.L3:
	movl	-8(%rbp), %eax                 # Load 'ctr' into eax
	cmpl	-28(%rbp), %eax                # Compare 'ctr' with 'n'
	jl	.L5                           # Jump to L5 if less
	movl	-12(%rbp), %eax                # Load 'i' into eax
	cltq                              # Sign-extend 'i' to rax
	leaq	0(,%rax,4), %rdx              # Calculate offset 'i * 4' and store in rdx
	movq	-40(%rbp), %rax               # Load address of fr1 into rax
	addq	%rdx, %rax                    # Add offset to rax
	movl	(%rax), %eax                   # Load fr1[i] into eax
	testl	%eax, %eax                    # Test if fr1[i] is 0
	je	.L6                           # Jump to L6 if zero
	movl	-12(%rbp), %eax                # Load 'i' into eax
	cltq                              # Sign-extend 'i' to rax
	leaq	0(,%rax,4), %rdx              # Calculate offset 'i * 4' and store in rdx
	movq	-40(%rbp), %rax               # Load address of fr1 into rax
	addq	%rax, %rdx                    # Add rax to rdx
	movl	-4(%rbp), %eax                 # Load 'ctr' into eax
	movl	%eax, (%rdx)                   # Store ctr in fr1[i]
.L6:
	addl	$1, -12(%rbp)                 # Increment 'i' by 1
.L2:
	movl	-12(%rbp), %eax                # Load 'i' into eax
	cmpl	-28(%rbp), %eax                # Compare 'i' with 'n'
	jl	.L7                           # Jump to L7 if less
	nop                                # No operation
	nop                                # No operation
	popq	%rbp                            # Pop the value of rbp from the stack
	.cfi_def_cfa 7, 8                    # CFI directive to define return value location
	ret                                  # Return from function
	.cfi_endproc                         # CFI directive indicating end of procedure
.LFE0:                                 # End of function
	.size	calculateFrequency, .-calculateFrequency # Function size

	.section	.rodata                      # Read-only data section
.LC0:
	.string	"Element\tFrequency"             # String literal
.LC1:
	.string	"%d\t%d\n"                      # String literal
	.text
	.globl	printArrayWithFrequency           # Declare printArrayWithFrequency as a global symbol
	.type	printArrayWithFrequency, @function # Define printArrayWithFrequency as a function
printArrayWithFrequency:                       # Function label
.LFB1:                                        # Start of function
	.cfi_startproc                            # CFI directive indicating start of procedure
	endbr64                                    # AMD's end branch hint for 64-bit mode
	pushq	%rbp                                # Push the value of rbp onto the stack
	.cfi_def_cfa_offset 16                     # CFI directive to define the initial stack offset
	.cfi_offset 6, -16                         # CFI directive to define the offset for rbp
	movq	%rsp, %rbp                           # Move rsp to rbp
	.cfi_def_cfa_register 6                   # CFI directive to define the register for rbp
	subq	$48, %rsp                            # Allocate space on the stack
	movq	%rdi, -24(%rbp)                      # Load parameter arr1 into local variable
	movq	%rsi, -32(%rbp)                      # Load parameter fr1 into local variable
	movl	%edx, -36(%rbp)                      # Load parameter n into local variable
	leaq	.LC0(%rip), %rdi                     # Load address of string into rdi
	call	puts@PLT                           # Call the 'puts' function to print the string
	movl	$0, -4(%rbp)                         # Initialize 'i' to 0
	jmp	.L9                                   # Jump to label L9
.L11:                                        # Start of loop
	movl	-4(%rbp), %eax                        # Load 'i' into eax
	cltq                                     # Sign-extend 'i' to rax
	leaq	0(,%rax,4), %rdx                     # Calculate offset 'i * 4' and store in rdx
	movq	-32(%rbp), %rax                      # Load address of fr1 into rax
	addq	%rdx, %rax                           # Add offset to rax
	movl	(%rax), %eax                          # Load fr1[i] into eax
	testl	%eax, %eax                           # Test if fr1[i] is 0
	je	.L10                                  # Jump to L10 if zero
	movl	-4(%rbp), %eax                        # Load 'i' into eax
	cltq                                     # Sign-extend 'i' to rax
	leaq	0(,%rax,4), %rdx                     # Calculate offset 'i * 4' and store in rdx
	movq	-32(%rbp), %rax                      # Load address of fr1 into rax
	addq	%rdx, %rax                           # Add offset to rax
	movl	(%rax), %edx                          # Load fr1[i] into edx
	movl	-4(%rbp), %eax                        # Load 'i' into eax
	cltq                                     # Sign-extend 'i' to rax
	leaq	0(,%rax,4), %rcx                     # Calculate offset 'i * 4' and store in rcx
	movq	-24(%rbp), %rax                      # Load address of arr1 into rax
	addq	%rcx, %rax                           # Add offset to rax
	movl	(%rax), %eax                          # Load arr1[i] into eax
	movl	%eax, %esi                            # Load arr1[i] into esi (second parameter for printf)
	leaq	.LC1(%rip), %rdi                      # Load address of string into rdi
	movl	$0, %eax                              # Clear eax
	call	printf@PLT                          # Call the 'printf' function
.L10:
	addl	$1, -4(%rbp)                         # Increment 'i' by 1
.L9:
	movl	-4(%rbp), %eax                        # Load 'i' into eax
	cmpl	-36(%rbp), %eax                       # Compare 'i' with 'n'
	jl	.L11                                  # Jump to L11 if less
	nop                                        # No operation
	nop                                        # No operation
	leave                                      # Restore the stack frame
	.cfi_def_cfa 7, 8                          # CFI directive to define return value location
	ret                                        # Return from function
	.cfi_endproc                               # CFI directive indicating end of procedure
.LFE1:                                       # End of function
	.size	printArrayWithFrequency, .-printArrayWithFrequency # Function size
	.section	.rodata                                     # Read-only data section
	.align 8                                              # Align to 8 bytes
.LC2:
	.string	"\n\nCount frequency of each integer element of an array:" # String literal
	.align 8                                              # Align to 8 bytes
.LC3:
	.string	"------------------------------------------------" # String literal
	.align 8                                              # Align to 8 bytes
.LC4:
	.string	"Input the number of elements to be stored in the array :" # String literal
.LC5:
	.string	"%d"                                        # String literal
	.align 8                                              # Align to 8 bytes
.LC6:
	.string	"Enter each elements separated by space: "    # String literal
	.text
	.globl	main                                          # Declare main as a global symbol
	.type	main, @function                                # Define main as a function
main:                                                     # Function label
.LFB2:                                                    # Start of function
	.cfi_startproc                                        # CFI directive indicating start of procedure
	endbr64                                                # AMD's end branch hint for 64-bit mode
	pushq	%rbp                                            # Push the value of rbp onto the stack
	.cfi_def_cfa_offset 16                                 # CFI directive to define the initial stack offset
	.cfi_offset 6, -16                                     # CFI directive to define the offset for rbp
	movq	%rsp, %rbp                                       # Move rsp to rbp
	.cfi_def_cfa_register 6                               # CFI directive to define the register for rbp
	subq	$832, %rsp                                       # Allocate space on the stack
	movq	%fs:40, %rax                                     # Load value at fs:40 into rax
	movq	%rax, -8(%rbp)                                   # Store value at rbp-8 (stack canary)
	xorl	%eax, %eax                                       # Clear eax
	leaq	.LC2(%rip), %rdi                                  # Load address of string into rdi
	call	puts@PLT                                        # Call the 'puts' function to print the string
	leaq	.LC3(%rip), %rdi                                  # Load address of string into rdi
	call	puts@PLT                                        # Call the 'puts' function to print the string
	leaq	.LC4(%rip), %rdi                                  # Load address of string into rdi
	movl	$0, %eax                                          # Clear eax
	call	printf@PLT                                      # Call the 'printf' function to print the string
	leaq	-828(%rbp), %rax                                  # Load address of local variable into rax
	movq	%rax, %rsi                                        # Move rax into rsi (second parameter for scanf)
	leaq	.LC5(%rip), %rdi                                  # Load address of string into rdi
	movl	$0, %eax                                          # Clear eax
	call	__isoc99_scanf@PLT                                # Call the 'scanf' function to read an integer
	leaq	.LC6(%rip), %rdi                                  # Load address of string into rdi
	movl	$0, %eax                                          # Clear eax
	call	printf@PLT                                      # Call the 'printf' function to print the string
	movl	$0, -824(%rbp)                                    # Initialize 'i' to 0
	jmp	.L13                                              # Jump to label L13
.L14:                                                    # Start of loop
	leaq	-816(%rbp), %rax                                  # Load address of local variable into rax
	movl	-824(%rbp), %edx                                  # Load value of 'i' into edx
	movslq	%edx, %rdx                                        # Sign-extend edx to rdx
	salq	$2, %rdx                                          # Shift rdx left by 2 bits (multiply by 4)
	addq	%rdx, %rax                                        # Add rdx to rax (calculate address of arr1[i])
	movq	%rax, %rsi                                        # Move rax into rsi (second parameter for scanf)
	leaq	.LC5(%rip), %rdi                                  # Load address of string into rdi
	movl	$0, %eax                                          # Clear eax
	call	__isoc99_scanf@PLT                                # Call the 'scanf' function to read an integer
	addl	$1, -824(%rbp)                                    # Increment 'i' by 1
.L13:                                                    # Start of loop
	movl	-828(%rbp), %eax                                  # Load value of 'n' into eax
	cmpl	%eax, -824(%rbp)                                  # Compare 'i' with 'n'
	jl	.L14                                              # Jump to L14 if less
	movl	$0, -820(%rbp)                                    # Initialize 'i' to 0
	jmp	.L15                                              # Jump to label L15
.L16:                                                    # Start of loop
	movl	-820(%rbp), %eax                                  # Load value of 'i' into eax
	cltq                                                  # Sign-extend eax to rax
	movl	$-1, -416(%rbp,%rax,4)                           # Set fr1[i] to -1
	addl	$1, -820(%rbp)                                    # Increment 'i' by 1
.L15:                                                    # Start of loop
	movl	-828(%rbp), %eax                                  # Load value of 'n' into eax
	cmpl	%eax, -820(%rbp)                                  # Compare 'i' with 'n'
	jl	.L16                                              # Jump to L16 if less
	movl	-828(%rbp), %ecx                                  # Load value of 'n' into ecx
	leaq	-416(%rbp), %rdx                                  # Load address of fr1 into rdx
	leaq	-816(%rbp), %rax                                  # Load address of arr1 into rax
	movl	%ecx, %esi                                        # Move ecx into esi (second parameter for calculateFrequency)
	movq	%rax, %rdi                                        # Move rax into rdi (first parameter for calculateFrequency)
	call	calculateFrequency                              # Call the 'calculateFrequency' function
	movl	-828(%rbp), %edx                                  # Load value of 'n' into edx
	leaq	-416(%rbp), %rcx                                  # Load address of fr1 into rcx
	leaq	-816(%rbp), %rax                                  # Load address of arr1 into rax
	movq	%rcx, %rsi                                        # Move rcx into rsi (second parameter for printArrayWithFrequency)
	movq	%rax, %rdi                                        # Move rax into rdi (first parameter for printArrayWithFrequency)
	call	printArrayWithFrequency                         # Call the 'printArrayWithFrequency' function
	movl	$0, %eax                                          # Clear eax (return value)
	movq	-8(%rbp), %rcx                                    # Load value at rbp-8 into rcx (stack canary)
	xorq	%fs:40, %rcx                                      # XOR fs:40 with rcx
	je	.L18                                              # Jump to L18 if zero
	call	__stack_chk_fail@PLT                            # Call the '__stack_chk_fail' function
.L18:                                                    # Label L18
	leave                                                  # Restore the stack frame
	.cfi_def_cfa 7, 8                                      # CFI directive to define return value location
	ret                                                    # Return from function
	.cfi_endproc                                           # CFI directive indicating end of procedure
.LFE2:                                                   # End of function
	.size	main, .-main                                     # Function size
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"    # Compiler identification
	.section	.note.GNU-stack,"",@progbits                  # Stack notes section
	.section	.note.gnu.property,"a"                         # GNU property notes section
	.align 8                                                # Align to 8 bytes
	.long	 1f - 0f                                          # Length of the following note
	.long	 4f - 1f                                          # Length of the note data
	.long	 5                                               # Note type
0:                                                         # Start of note
	.string	 "GNU"                                             # Note data
1:                                                         # End of note
	.align 8                                                # Align to 8 bytes
	.long	 0xc0000002                                        # Property type
	.long	 3f - 2f                                          # Length of the following property data
2:                                                         # Start of property data
	.long	 0x3                                              # Property data
3:                                                         # End of property data
	.align 8                                                # Align to 8 bytes
4:                                                         # End of property
