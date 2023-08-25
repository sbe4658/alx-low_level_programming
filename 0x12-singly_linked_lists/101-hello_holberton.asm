extern printf
global main

SECTION .text
main:
	push rbp
	mov rbp, rsp

	lea rdi, [print]
	call printf

	push rax
	mov rax, 0
	leave
	ret 
SECTION .data
	print: db "Hello, Holberton",10,0
