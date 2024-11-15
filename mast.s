	.file	"mast.c"
	.text
	.globl	is_prime
	.type	is_prime, @function
is_prime:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	$2, -8(%rbp)
	jmp	.L2
.L5:
	movq	-24(%rbp), %rax
	cqto
	idivq	-8(%rbp)
	movq	%rdx, %rax
	testq	%rax, %rax
	jne	.L3
	movl	$0, %eax
	jmp	.L4
.L3:
	addq	$1, -8(%rbp)
.L2:
	movq	-8(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jl	.L5
	movl	$1, %eax
.L4:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	is_prime, .-is_prime
	.section	.rodata
.LC0:
	.string	"w"
.LC1:
	.string	"new.txt"
.LC2:
	.string	"\033[34m%-5ld \033[0m"
.LC3:
	.string	"%-5ld "
	.text
	.globl	main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$.LC0, %esi
	movl	$.LC1, %edi
	call	fopen
	movq	%rax, -16(%rbp)
	movq	$3, -8(%rbp)
	jmp	.L7
.L11:
	movq	-8(%rbp), %rcx
	movabsq	$-4392081922311798003, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	leaq	(%rdx,%rcx), %rax
	sarq	$4, %rax
	movq	%rax, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	subq	%rax, %rcx
	movq	%rcx, %rdx
	testq	%rdx, %rdx
	jne	.L8
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	movl	$10, %edi
	call	fputc
.L8:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	is_prime
	testl	%eax, %eax
	je	.L9
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movl	$.LC2, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf
	jmp	.L10
.L9:
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movl	$.LC3, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf
.L10:
	addq	$1, -8(%rbp)
.L7:
	cmpq	$998, -8(%rbp)
	jle	.L11
	movl	$10, %edi
	call	putchar
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	fclose
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	main, .-main
	.ident	"GCC: (GNU) 14.2.1 20240912 (Red Hat 14.2.1-3)"
	.section	.note.GNU-stack,"",@progbits
