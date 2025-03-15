
.data

variable: .asciz "Numero1 %d numero2 %d \r\n"

.text
.globl main
.extern printf	# Similar al include<stdio.h>

main:
_start:
	subq $8, %rsp	# Alineamos los datos

	mov $4, %rax
	mov $5, %rbx

	#		  %rdi	          rsi  rdx
	# printf("Numero1 %d numero2 %d", rax, rbx)

	movq $variable, %rdi
	movq %rax, %rsi
	movq %rbx, %rdx

	# call imprimir
	# rax se pone en 0 para indicar que necesitamos 0 registros de punto flotante
	xor %rax, %rax	# rax=0 no toca memoria

	call printf


	call salir

	add $8, %rsp
salir:
	# Salir al sistema
	mov $60, %rax
	mov $0, %rdi
	syscall
	ret

# Funcion que imprime enteros en consola
# imprimir:


