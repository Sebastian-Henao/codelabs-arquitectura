#include<stdio.h>
#include<stdlib.h>

//rax                (rdi,   rsi,  rdx)     int
//xmm0               (xmm1,  xmm2,  xmm3)   float | double
// Mezclando
// xmm0               (xmm0,   rsi, xmm3);
float calculadoraCiclos(float, int, float);

int main(){
	float pi = 3.1415926535F;
	int ciclos = 5;
	float radio = 2.41F;
	float resultado;
	resultado = calculadoraCiclos(pi, ciclos, radio);
	printf("\nRadio: %f, ciclos: %d, resultado: %f\n", radio, ciclos, resultado);
	exit(EXIT_SUCCESS);
}

