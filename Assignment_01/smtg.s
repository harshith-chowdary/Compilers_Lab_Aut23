	.file	"code.c"                  # Source file name

	.text                             # Text section
	.globl	calculateFrequency        # Declare calculateFrequency as a global symbol
	.type	calculateFrequency, @function # Define calculateFrequency as a function
calculateFrequency:                  # Function label
.LFB0:                              # Start of function
	.cfi_startproc                  # CFI directive indicating start of procedure
	endbr64                          # AMD's end branch hint for 64-bit mode
	pushq	%rbp                      # Push the value of rbp onto the stack
	.cfi_def_cfa_offset 16           # CFI directive to define the initial stack offset
	.cfi_offset 6, -16               # CFI directive to define the offset for rbp
	movq	%rsp, %rbp                 # Move rsp to rbp
	.cfi_def_cfa_register 6         # CFI directive to define rbp as the canonical frame address
	movq	%rdi, -24(%rbp)            # Store the first parameter at rbp-24
	movl	%esi, -28(%rbp)            # Store the second parameter at rbp-28
	movq	%rdx, -40(%rbp)            # Store the third parameter at rbp-40
	movl	$0, -12(%rbp)              # Initialize a local variable to 0
	jmp	.L2                         # Jump to label L2
.L7:                               # Start of loop
	movl	$1, -4(%rbp)               # Set a local variable to 1
	movl	-12(%rbp), %eax            # Load value at rbp-12 into eax
	addl	$1, %eax                   # Increment eax by 1
	movl	%eax, -8(%rbp)             # Store updated value back at rbp-8
	jmp	.L3                         # Jump to label L3
.L5:
	movl	-12(%rbp), %eax            # Load value at rbp-12 into eax
	cltq                            # Convert eax to a quad-word in rax
	leaq	0(,%rax,4), %rdx           # Calculate an offset based on rax and store in rdx
	movq	-24(%rbp), %rax            # Load value at rbp-24 into rax
	addq	%rdx, %rax                 # Add rdx to rax
	movl	(%rax), %edx               # Load value at address in rax into edx
	movl	-8(%rbp), %eax             # Load value at rbp-8 into eax
	cltq                            # Convert eax to a quad-word in rax
	leaq	0(,%rax,4), %rcx           # Calculate an offset based on rax and store in rcx
	movq	-24(%rbp), %rax            # Load value at rbp-24 into rax
	addq	%rcx, %rax                 # Add rcx to rax
	movl	(%rax), %eax               # Load value at address in rax into eax
	cmpl	%eax, %edx                 # Compare edx and eax
	jne	.L4                         # Jump to label L4 if not equal
	addl	$1, -4(%rbp)               # Increment local variable by 1
	movl	-8(%rbp), %eax             # Load value at rbp-8 into eax
	cltq                            # Convert eax to a quad-word in rax
	leaq	0(,%rax,4), %rdx           # Calculate an offset based on rax and store in rdx
	movq	-40(%rbp), %rax            # Load value at rbp-40 into rax
	addq	%rdx, %rax                 # Add rdx to rax
	movl	$0, (%rax)                 # Store 0 at address in rax
.L4:
	addl	$1, -8(%rbp)               # Increment value at rbp-8 by 1
.L3:
	movl	-8(%rbp), %eax             # Load value at rbp-8 into eax
	cmpl	-28(%rbp), %eax            # Compare eax with value at rbp-28
	jl	.L5                         # Jump to label L5 if less
	movl	-12(%rbp), %eax            # Load value at rbp-12 into eax
	cltq                            # Convert eax to a quad-word in rax
	leaq	0(,%rax,4), %rdx           # Calculate an offset based on rax and store in rdx
	movq	-40(%rbp), %rax            # Load value at rbp-40 into rax
	addq	%rdx, %rax                 # Add rdx to rax
	movl	(%rax), %eax               # Load value at address in rax into eax
	testl	%eax, %eax                 # Test if eax is 0
	je	.L6                         # Jump to label L6 if equal to 0
	movl	-12(%rbp), %eax            # Load value at rbp-12 into eax
	cltq                            # Convert eax to a quad-word in rax
	leaq	0(,%rax,4), %rdx           # Calculate an offset based on rax and store in rdx
	movq	-40(%rbp), %rax            # Load value at rbp-40 into rax
	addq	%rax, %rdx                 # Add rax to rdx
	movl	-4(%rbp), %eax             # Load value at rbp-4 into eax
	movl	%eax, (%rdx)               # Store value in eax at address in rdx
.L6:
	addl	$1, -12(%rbp)              # Increment value at rbp-12 by 1
.L2:
	movl	-12(%rbp), %eax            # Load value at rbp-12 into eax
	cmpl	-28(%rbp), %eax            # Compare eax with value at rbp-28
	jl	.L7                         # Jump to label L7 if less
	nop                              # No operation
	nop                              # No operation
	popq	%rbp                      # Pop value from stack into rbp
	.cfi_def_cfa 7, 8                # CFI directive to define return value location
	ret                              # Return from function
	.cfi_endproc                     # CFI directive indicating end of procedure
.LFE0:                             # End of function
	.size	calculateFrequency, .-calculateFrequency # Function size

	.section	.rodata              # Read-only data section
.LC0:
	.string	"Element\tFrequency"   # String literal
.LC1:
	.string	"%d\t%d\n"             # String literal

	.text                             # Text section
	.globl	printArrayWithFrequency  # Declare printArrayWithFrequency as a global symbol
	.type	printArrayWithFrequency, @function # Define printArrayWithFrequency as a function
printArrayWithFrequency:             # Function label
.LFB1:                              # Start of function
	.cfi_startproc                  # CFI directive indicating start of procedure
	endbr64                          # AMD's end branch hint for 64-bit mode
	pushq	%rbp                      # Push the value of rbp onto the stack
	.cfi_def_cfa_offset 16           # CFI directive to define the initial stack offset
	.cfi_offset 6, -16               # CFI directive to define the offset for rbp
	movq	%rsp, %rbp                 # Move rsp to rbp
	.cfi_def_cfa_register 6         # CFI directive to define rbp as the canonical frame address
	subq	$48, %rsp                  # Allocate 48 bytes on the stack for local variables
	movq	%rdi, -24(%rbp)            # Store the first parameter at rbp-24
	movq	%rsi, -32(%rbp)            # Store the second parameter at rbp-32
	movl	%edx, -36(%rbp)            # Store the third parameter at rbp-36
	leaq	.LC0(%rip), %rdi           # Load address of string into rdi
	call	puts@PLT                  # Call the 'puts' function to print the string
	movl	$0, -4(%rbp)               # Initialize a local variable to 0
	jmp	.L9                         # Jump to label L9
.L11:                              # Start of loop
	movl	-4(%rbp), %eax             # Load value at rbp-4 into eax
	cltq                            # Convert eax to a quad-word in rax
	leaq	0(,%rax,4), %rdx           # Calculate an offset based on rax and store in rdx
	movq	-32(%rbp), %rax            # Load value at rbp-32 into rax
	addq	%rdx, %rax                 # Add rdx to rax
	movl	(%rax), %eax               # Load value at address in rax into eax
	testl	%eax, %eax                 # Test if eax is 0
	je	.L10                        # Jump to label L10 if equal to 0
	movl	-4(%rbp), %eax             # Load value at rbp-4 into eax
	cltq                            # Convert eax to a quad-word in rax
	leaq	0(,%rax,4), %rdx           # Calculate an offset based on rax and store in rdx
	movq	-32(%rbp), %rax            # Load value at rbp-32 into rax
	addq	%rdx, %rax                 # Add rdx to rax
	movl	(%rax), %edx               # Load value at address in rax into edx
	movl	-4(%rbp), %eax             # Load value at rbp-4 into eax
	cltq                            # Convert eax to a quad-word in rax
	leaq	0(,%rax,4), %rcx           # Calculate an offset based on rax and store in rcx
	movq	-24(%rbp), %rax            # Load value at rbp-24 into rax
	addq	%rcx, %rax                 # Add rcx to rax
	movl	(%rax), %eax               # Load value at address in rax into eax
	movl	%eax, %esi                 # Move eax into esi
	leaq	.LC1(%rip), %rdi           # Load address of string into rdi
	movl	$0, %eax                   # Initialize eax to 0
	call	printf@PLT                # Call the 'printf' function to print formatted output
.L10:
	addl	$1, -4(%rbp)               # Increment value at rbp-4 by 1
.L9:
	movl	-4(%rbp), %eax             # Load value at rbp-4 into eax
	cmpl	-36(%rbp), %eax            # Compare eax with value at rbp-36
	jl	.L11                        # Jump to label L11 if less
	nop                              # No operation
	nop                              # No operation
	leave                            # Restore the stack frame
	.cfi_def_cfa 7, 8                # CFI directive to define return value location
	ret                              # Return from function
	.cfi_endproc                     # CFI directive indicating end of procedure
.LFE1:                             # End of function
	.size	printArrayWithFrequency, .-printArrayWithFrequency # Function size

	.section	.rodata              # Read-only data section
	.align 8                         # Align to 8 bytes
.LC2:
	.string	"\n\nCount frequency of each integer element of an array:" # String literal
	.align 8                         # Align to 8 bytes
.LC3:
	.string	"------------------------------------------------"       # String literal
	.align 8                         # Align to 8 bytes
.LC4:
	.string	"Input the number of elements to be stored in the array :" # String literal
.LC5:
	.string	"%d"                      # String literal
	.align 8                         # Align to 8 bytes
.LC6:
	.string	"Enter each elements separated by space: "              # String literal
	.text                             # Text section
	.globl	main                      # Declare main as a global symbol
	.type	main, @function             # Define main as a function
main:                               # Function label
.LFB2:                              # Start of function
	.cfi_startproc                  # CFI directive indicating start of procedure
	endbr64                          # AMD's end branch hint for 64-bit mode
	pushq	%rbp                      # Push the value of rbp onto the stack
	.cfi_def_cfa_offset 16           # CFI directive to define the initial stack offset
	.cfi_offset 6, -16               # CFI directive to define the offset for rbp
	movq	%rsp, %rbp                 # Move rsp to rbp
	.cfi_def_cfa_register 6         # CFI directive to define rbp as the canonical frame address
	subq	$832, %rsp                 # Allocate 832 bytes on the stack for local variables
	movq	%fs:40, %rax               # Load the value of fs:40 (for stack canary)
	movq	%rax, -8(%rbp)             # Store it at rbp-8
	xorl	%eax, %eax                 # Clear eax
	leaq	.LC2(%rip), %rdi           # Load address of string into rdi
	call	puts@PLT                  # Call the 'puts' function to print the string
	leaq	.LC3(%rip), %rdi           # Load address of string into rdi
	call	puts@PLT                  # Call the 'puts' function to print the string
	leaq	.LC4(%rip), %rdi           # Load address of string into rdi
	movl	$0, %eax                   # Clear eax
	call	printf@PLT                # Call the 'printf' function to print the string
	leaq	-828(%rbp), %rax           # Load address of local variable into rax
	movq	%rax, %rsi                 # Move rax into rsi (second parameter for scanf)
	leaq	.LC5(%rip), %rdi           # Load address of string into rdi
	movl	$0, %eax                   # Clear eax
	call	__isoc99_scanf@PLT         # Call the 'scanf' function to read an integer
	leaq	.LC6(%rip), %rdi           # Load address of string into rdi
	movl	$0, %eax                   # Clear eax
	call	printf@PLT                # Call the 'printf' function to print the string
	movl	$0, -824(%rbp)             # Initialize a local variable to 0
	jmp	.L13                        # Jump to label L13
.L14:                              # Start of loop
	leaq	-816(%rbp), %rax           # Load address of local variable into rax
	movl	-824(%rbp), %edx            # Load value at rbp-824 into edx
	movslq	%edx, %rdx                 # Sign-extend edx to rdx
	salq	$2, %rdx                   # Shift left rdx by 2 bits (multiply by 4)
	addq	%rdx, %rax                 # Add rdx to rax (calculate array element address)
	movq	%rax, %rsi                 # Move rax into rsi (second parameter for scanf)
	leaq	.LC5(%rip), %rdi           # Load address of string into rdi
	movl	$0, %eax                   # Clear eax
	call	__isoc99_scanf@PLT         # Call the 'scanf' function to read an integer
	addl	$1, -824(%rbp)             # Increment value at rbp-824 by 1
.L13:
	movl	-828(%rbp), %eax            # Load value at rbp-828 into eax
	cmpl	%eax, -824(%rbp)           # Compare eax with value at rbp-824
	jl	.L14                        # Jump to label L14 if less
	movl	$0, -820(%rbp)             # Initialize a local variable to 0
	jmp	.L15                        # Jump to label L15
.L16:                              # Start of loop
	movl	-820(%rbp), %eax            # Load value at rbp-820 into eax
	cltq                            # Convert eax to a quad-word in rax
	movl	$-1, -416(%rbp,%rax,4)      # Store -1 at calculated address
	addl	$1, -820(%rbp)             # Increment value at rbp-820 by 1
.L15:
	movl	-828(%rbp), %eax            # Load value at rbp-828 into eax
	cmpl	%eax, -820(%rbp)           # Compare eax with value at rbp-820
	jl	.L16                        # Jump to label L16 if less
	movl	-828(%rbp), %ecx            # Load value at rbp-828 into ecx
	leaq	-416(%rbp), %rdx           # Load address of local variable into rdx
	leaq	-816(%rbp), %rax           # Load address of local variable into rax
	movl	%ecx, %esi                 # Move ecx into esi (second parameter for calculateFrequency)
	movq	%rax, %rdi                 # Move rax into rdi (first parameter for calculateFrequency)
	call	calculateFrequency        # Call the 'calculateFrequency' function
	movl	-828(%rbp), %edx            # Load value at rbp-828 into edx
	leaq	-416(%rbp), %rcx           # Load address of local variable into rcx
	leaq	-816(%rbp), %rax           # Load address of local variable into rax
	movq	%rcx, %rsi                 # Move rcx into rsi (second parameter for printArrayWithFrequency)
	movq	%rax, %rdi                 # Move rax into rdi (first parameter for printArrayWithFrequency)
	call	printArrayWithFrequency   # Call the 'printArrayWithFrequency' function
	movl	$0, %eax                   # Clear eax
	movq	-8(%rbp), %rcx              # Load the value stored at rbp-8 (stack canary)
	xorq	%fs:40, %rcx                # XOR the value of fs:40 with rax (for stack canary check)
	je	.L18                        # Jump to label L18 if zero flag is set
	call	__stack_chk_fail@PLT       # Call the '__stack_chk_fail' function (for stack canary check failure)
.L18:
	leave                            # Restore the stack frame
	.cfi_def_cfa 7, 8                # CFI directive to define return value location
	ret                              # Return from function
	.cfi_endproc                     # CFI directive indicating end of procedure
.LFE2:                             # End of function
	.size	main, .-main               # Function size
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0" # Compiler identification
	.section	.note.GNU-stack,"",@progbits  # Stack note section
	.section	.note.gnu.property,"a" # GNU property note section
	.align 8                         # Align to 8 bytes
	.long	 1f - 0f                  # Length of property note
	.long	 4f - 1f                  # Length of property descriptor
	.long	 5                       # Property type (GNU_PROPERTY_TYPE_1)
0:
	.string	 "GNU"                    # Vendor name
1:
	.align 8                         # Align to 8 bytes
	.long	 0xc0000002               # Property data
	.long	 3f - 2f                  # Length of property data
2:
	.long	 0x3                      # Property flags
3:
	.align 8                         # Align to 8 bytes
4:
