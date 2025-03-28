#include<stdio.h>
#include<stdlib.h>
#include "libmat.h" // Este archivo de cabecera me informa de las funciones de la biblioteca

int main(){
	char letra;
	letra = codificar('a'); // Funcion que devuelva la siguiente letra
	printf("%c\n", letra);
	return 0;
}
