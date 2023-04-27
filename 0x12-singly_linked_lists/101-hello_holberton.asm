section .data
	msg db 'Hello, Holberton', 0
	format db '%s\n', 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	; Call printf with msg and format string arguments
	mov rdi, format
	mov rsi, msg
	xor rax, rax
	call printf

	; Clean up and return
	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
