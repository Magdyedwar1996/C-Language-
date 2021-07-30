	.file	"q.c"
	.section .rdata,"dr"
.LC0:
	.ascii "magdy loves merna so much \12 \0"
	.text
	.globl	show
	.def	show;	.scl	2;	.type	32;	.endef
	.seh_proc	show
show:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	.LC0(%rip), %rcx
	call	printf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh-rev1, Built by MinGW-W64 project) 6.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
