.section .rodata
pi_over_180: .double 0.017453292519943295
inv6:        .double 0.16666666666666666
inv120:      .double 0.008333333333333333

.section .text
.globl calcular_seno

calcular_seno:
    # xmm0 = ángulo en grados (recibido desde C)

    # Convertir grados a radianes
    movsd pi_over_180(%rip), %xmm1
    mulsd %xmm1, %xmm0  # xmm0 = radianes

    movapd %xmm0, %xmm2

    # Calcular x^2
    movapd %xmm0, %xmm3
    mulsd %xmm0, %xmm3

    # Calcular x^3
    mulsd %xmm0, %xmm3

    # Guardar x en xmm4
    movapd %xmm2, %xmm4

    # Cargar 1/6 y calcular x^3/6
    movsd inv6(%rip), %xmm5
    mulsd %xmm5, %xmm3
    subsd %xmm3, %xmm4  # xmm4 = x - x^3/6

    # Calcular x^2 nuevamente
    movapd %xmm0, %xmm6
    mulsd %xmm0, %xmm6

    # Calcular x^5 = x^2 * x^3
    mulsd %xmm3, %xmm6

    # Cargar 1/120 y calcular x^5/120
    movsd inv120(%rip), %xmm7
    mulsd %xmm7, %xmm6
    addsd %xmm6, %xmm4  # xmm4 = resultado final

    # Devolver el resultado en xmm0

      movapd %xmm4, %xmm0

      ret
