#include <stdio.h>
#include<stdlib.h>

float sumar(float a, float b){
	return a+b;
}

//Funcion de prueba para los numeros flotantes

int main(){
	float numero1 = 3.14159265358979;
	float numero2= 0.4F;
	float resultado;

	resultado = sumar(numero1, numero2);

	printf("%1.20f +  %1.20f =  %1.20f\n", numero1, numero2, resultado);

	return 0;
}
