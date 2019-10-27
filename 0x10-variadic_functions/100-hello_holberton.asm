%define sys_write 1
	%define stdout 1

	%define sys_exit 60
	%define success 0

	%define nl 10

	section .data

	    message db "Hello, Holberton", nl
	    message_len equ $-message

	section .text

	global main
main:
	    mov rax, sys_write
	    mov rdi, stdout
	    mov rsi, message
	    mov rdx, message_len
	    syscall

	    mov rax, sys_exit
	    mov rdi, success
	    syscall
