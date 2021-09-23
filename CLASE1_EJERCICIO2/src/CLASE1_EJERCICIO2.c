/*
 ============================================================================
 Name        : CLASE1EJERCICIO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// INGRESE UN NUMERO Y MOSTRARLO

int main(void)
{
	setbuf(stdout, NULL);

	int numeroUno;

	printf("Ingrese un numero: ");
	scanf("%d",&numeroUno);


	printf("El numero ingresado es: %d", numeroUno);


	return EXIT_SUCCESS;
}

