section .data
	helloH db "Hello, Holberton",0
	format db "%s\n",0

section .text
	global main
	extern printf

main:
	; Call printf function
	mov rdi, format
	mov rsi, helloH
	xor rax. rax
	call printf

	;Exit
	xor rdi, rdi
	mov rax, 60
	syscall
