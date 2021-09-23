/*
 ============================================================================
 Name        : CLASE1EJERCICIO4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//INGRESE 5 NUMEROS, E IMPRIMIR EL PROMEDIO

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	float promedio;
	int acumuladorNumero=0;
	int contNumero=0;
	int i;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado);

		acumuladorNumero+=numeroIngresado;
		contNumero++;
	}

	promedio = acumuladorNumero / contNumero;

	printf("El promedio es: %f",promedio);

	return EXIT_SUCCESS;
}

