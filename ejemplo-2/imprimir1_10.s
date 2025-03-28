.data
mensaje: .asciz "%ld \n"

.text
.globl main
.extern printf

main:
	subq $8, %rsp

	mov $1, %rax

ciclo:
	# Bloque de impresion
	movq $mensaje, %rdi
	movq %rbx, %rsi
	mov $0, %rax
	call printf

	add $1, %rbx
	cmp $10, %rbx
	jle ciclo

	addq $8, %rsp

	# Salida del programa
	mov $60, %rax
	xorq %rdi, %rdi
	syscall
