#include <stdio.h>

// Declaración de la función ensamblador
extern double calcular_seno(double angulo);

int main() {
    double angulo;

    printf("Ingrese el ángulo en grados: ");
    scanf("%lf", &angulo);

    double resultado = calcular_seno(angulo);
    printf("El seno de %.2f grados es aproximadamente %.10f\n", angulo, resultado);

    return 0;
}

