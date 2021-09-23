/*
 ============================================================================
 Name        : EXTRAS_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 VARIABLES. ACUMULADORES. CONTADORES.
 1. Ingresar 5 números y calcular su media
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int acumNumero=0;
	int promedio;
	int i;

	for(i = 0; i < 5; i++)
	{
		printf("Ingrese un numero:");
		scanf("%d",&numero);

		acumNumero+=numero;
	}

	promedio=""

	return EXIT_SUCCESS;
}
