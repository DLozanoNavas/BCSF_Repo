	.text
	.file	"string.c"
	.globl	main                    # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %entry
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movabsq	$.L.str, %rsi
	movq	%rsi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rsi
	movabsq	$.L.str.1, %rdi
	movb	$0, %al
	callq	printf
	movq	-32(%rbp), %rsi
	movabsq	$.L.str.2, %rdi
	movl	%eax, -36(%rbp)         # 4-byte Spill
	movb	$0, %al
	callq	printf
	movq	-32(%rbp), %rsi
	cmpq	-24(%rbp), %rsi
	movl	%eax, -40(%rbp)         # 4-byte Spill
	jne	.LBB0_2
# %bb.1:                                # %if.then
	movabsq	$.L.str.3, %rdi
	movb	$0, %al
	callq	printf
	movl	%eax, -44(%rbp)         # 4-byte Spill
	jmp	.LBB0_3
.LBB0_2:                                # %if.else
	movabsq	$.L.str.4, %rdi
	movb	$0, %al
	callq	printf
	movl	%eax, -48(%rbp)         # 4-byte Spill
.LBB0_3:                                # %if.end
	movl	-4(%rbp), %eax
	addq	$48, %rsp
	popq	%rbp
	.cfi_def_cfa %rsp, 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Emma"
	.size	.L.str, 5

	.type	.L.str.1,@object        # @.str.1
.L.str.1:
	.asciz	"El primer caracter de s est\303\241 en: %p\n"
	.size	.L.str.1, 38

	.type	.L.str.2,@object        # @.str.2
.L.str.2:
	.asciz	"El primer caracter de n est\303\241 en: %p\n"
	.size	.L.str.2, 38

	.type	.L.str.3,@object        # @.str.3
.L.str.3:
	.asciz	"Iguales\n"
	.size	.L.str.3, 9

	.type	.L.str.4,@object        # @.str.4
.L.str.4:
	.asciz	"Diferentes\n"
	.size	.L.str.4, 12


	.ident	"clang version 7.0.0 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym printf
