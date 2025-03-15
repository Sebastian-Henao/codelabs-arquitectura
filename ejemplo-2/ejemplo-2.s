.data
mensaje: .asciz "%ld \n"

.text
.global main
.extern printf          # Indico que quiero utilizar la función printf de libc

main:
        subq $8, %rsp   # Alineación de la pila

        mov $1, %rax    # rax = 1 (inicio del contador)

ciclo:
        # Bloque de impresión
        movq  $mensaje, %rdi  # Dirección del formato
        movq  %rbx, %rsi      # Pasar el valor de rax como argumento
        mov  $0, %rax         # printf espera que rax sea 0 antes de la llamada
        call printf

        add $1, %rbx    # Incrementar contador
        cmp $10, %rbx   # Comparar contador con 10
        jle ciclo       # Si rax <= 10, repetir ciclo

        addq $8, %rsp   # Restaurar alineación de la pila

        # Salida del programa
        mov $60, %rax   # Código de salida del sistema
        xorq %rdi, %rdi # Código de retorno 0
        syscall         # Llamar a la syscall exit
