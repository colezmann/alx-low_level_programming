; 101-hello_holberton.asm	prints a string using printf
; Assemble and link:		nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
; Run:				./hello
	extern	printf

	section .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	section .text

	global main
main:
	push	rbp

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0
	call	printf

	pop	rbp

	mov	rax,0
	ret
