.data
mensaje: .asciz "%ld\n"

.text
.globl main
.extern printf		# Indico que quiero utilizar la funcion printf de libc

main:
	subq $8, %rsp	# Alineacion de datos

	mov $4, %rax	# rax = 4
	mov $5, %rbx	# rbx = 5
	add %rbx, %rax	# rax = rax + rbx

	# Bloque de impresion
	# printf("%ld\n", rax);
	#	  rdi   ,  rsi

	movq $mensaje, %rdi
	movq %rax, %rsi
	xorq %rax, %rax	# rax = 0
	call printf

	addq $8, %rsp	# Alineacion de datos original
