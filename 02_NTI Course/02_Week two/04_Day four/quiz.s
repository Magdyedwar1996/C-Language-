	.file	"quiz.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d %d %d,\12\0"
.LC1:
	.ascii "%d %d %d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$66, -4(%rbp)
	movl	-4(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -4(%rbp)
	addl	$1, -4(%rbp)
	movl	-4(%rbp), %ecx
	movl	-4(%rbp), %edx
	movl	%eax, %r9d
	movl	%ecx, %r8d
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$66, -4(%rbp)
	movl	$66, -4(%rbp)
	movl	-4(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -4(%rbp)
	addl	$1, -4(%rbp)
	movl	-4(%rbp), %ecx
	movl	-4(%rbp), %edx
	movl	%ecx, %r9d
	movl	%eax, %r8d
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$66, -4(%rbp)
	movl	-4(%rbp), %eax
	leal	1(%rax), %edx
	movl	%edx, -4(%rbp)
	addl	$1, -4(%rbp)
	movl	-4(%rbp), %ecx
	movl	-4(%rbp), %edx
	movl	%eax, %r9d
	movl	%ecx, %r8d
	leaq	.LC1(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev1, Built by MinGW-W64 project) 6.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
