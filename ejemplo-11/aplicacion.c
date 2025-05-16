#include<stdio.h>
#include<stdlib.h>
#include<libcubo.h>

int main(){
	int numero = 8;
	int resultado;
	resultado = multiplicarPorOcho(numero);
	printf("El numero %d multiplicado por 8 es: %d\n", numero, resultado);
	return 0;
}
