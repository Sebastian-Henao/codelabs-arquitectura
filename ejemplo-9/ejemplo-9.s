.text

.globl calculadoraCiclos

calculadoraCiclos:
	# xmm0 funcion (xmm0, rdi, xmm1)
	# mulss(float) o mulsd (double)
	mulss %xmm1, %xmm0

# Queremos realizar n ciclos (rdi = 5)

# Implementacion de do-while
# ciclo:
	# Codigo

	# dec %rdi
	# cmp $0, %rdi	# Comparacion entre rdi y 0
	# jne ciclos	# Podemos usar jne o jnz arbitrariamente

# Implementacion de while
ciclos:
	cmp $0, %rdi 	# Comparacion entre rdi y 0
	je fin 		# Podemos usar je o jz arbitrariamente

	addss %xmm0, %xmm0	# xmm0 = xmm0 + xmm0

	dec %rdi
	jmp ciclos

fin:
	ret
