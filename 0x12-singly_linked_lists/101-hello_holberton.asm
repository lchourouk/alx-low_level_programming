extern printf
global main
main:
	mov	edi, msg
	mov	eax, 0
	call	printf
section		.text
section		.data
	msg db 'Hello, Holberton', 10, 0
