# Ejemplo de una funcion hecha en assembly


.text
.globl sumar
.globl restar
.globl multiplicar
.globl dividir

sumar: # En lenguaje c: resultado = sumar (int a, int b)
	add %rsi, %rdi
	mov %rdi, %rax
	ret

restar: # En lenguaje c: resultado = restar(int a, int b)
	sub %rsi, %rdi
	mov %rdi, %rax
	ret

multiplicar:
	imul %rsi, %rdi
	mov %rdi, %rax
	ret

dividir:
	xor %rdx, %rdx
	mov %rdi, %rax
	div %rsi
	ret
