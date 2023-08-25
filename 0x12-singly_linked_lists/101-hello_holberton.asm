extern printf
global main

SECTION .text
main:
	push rbp
	mov rbp, rsp

	lea rdi, [print]
	call printf

	mov rsp, rbp
	pop rbp
	ret
SECTION .data
	print: db "Hello, Holberton",10,0
