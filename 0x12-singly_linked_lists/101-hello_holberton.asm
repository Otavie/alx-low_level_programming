section .data
	hello db "Hello, Holberton", 0
	fmt db "%s\n", 0

section .text
	global main

main:
	push rbp
	mov rbp, rsp

	; call printf function to print hello message
	lea rdi, [fmt]
	lea rsi, [hello]
	xor rax, rax
	call printf

	; exit program
	xor eax, eax
	pop rbp
	ret
