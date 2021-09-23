/*
 ============================================================================
 Name        : CLASE6_EJEMPLO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
COMO USAR UN ARRAY COMO ARGUMENTO DE UNA FUNCION
EJERCICIO:
Construir una programa donde se le pida al usuario 5 edades (usar biblioteca para el ingreso de numeros).
Hacer una funcion ARRAY para imprimir las edades ingresadas.
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EDADESSIZE 5

void imprimirArray(int arrayLista[], int len);

int main(void)
{
	setbuf(stdout,NULL);

	int edad;
	int edades[EDADESSIZE];
	int i;

	for(i=0; i<EDADESSIZE; i++)
	{

		if((pedirIntAlUsuario(&edad, 1, 120, 3, "Ingrese la edad:", "Esta edad no es valida.\n"))==0)
		{

			edades[i]=edad;
		}
		else
		{
			printf("Eso no es una edad\n");
		}
	}

	imprimirArray(edades, EDADESSIZE);

	return EXIT_SUCCESS;
}
//el nombre del ARRAY es la direccion de memoria donde comienza el ARRAY
//al recibir un ARRAY, tambien se recibe su tamaño. (int arrayLista[], int len)
void imprimirArray(int arrayLista[], int len)
{
	int i;

	for(i=0; i<len; i++)
		{
			printf("%d\n", arrayLista[i]);
		}
}









