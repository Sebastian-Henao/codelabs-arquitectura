//Programa que muestra las llamadas a funciones hechas en assembly
#include<stdio.h>
#include<stdlib.h>

//rax     rdx, rsi
int sumar(int, int);
int restar(int, int);
int multiplicar(int, int);
int dividir(int,int);

int main(int numeroParametros, char ** argumentos){

	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	int resultadoDivision;
	int numero1 = 10;
	int numero2 = 5;
	printf("El numero de parametros en la linea de comandos fue %d\n", numeroParametros);
	resultadoSuma = sumar(numero1, numero2);
	printf("La suma de %d y %d es: %d\n", numero1, numero2, resultadoSuma);
	resultadoResta = restar(numero1, numero2);
	printf("La resta de %d y %d es: %d\n", numero1, numero2, resultadoResta);
	resultadoMultiplicacion = multiplicar(numero1, numero2);
	printf("El resutltado de multiplicar %d por %d es: %d\n", numero1, numero2, resultadoMultiplicacion);
	resultadoDivision = dividir(numero1, numero2);
	printf ("El resultado de dividir %d entre %d es: %d\n", numero1, numero2, resultadoDivision);
	return(EXIT_SUCCESS);
}
