/*
 ============================================================================
 Name        : CLASE6_EJEMPLO3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
EJEMPLO 3:
Hacer una funcion que calcule el promedio de los valores del ARRAY que recibe
y me devuelva el promedio. (NO IMPRIMIR POR CONSOLA).

 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EDADESSIZE 5

void imprimirArray(int listadEdades[], int len);

float promedioArrayInt(int arrayInt[], int len);

int main(void)
{
	setbuf(stdout,NULL);

	int edad;
	int edades[EDADESSIZE];
	int i;
	float promedioEdadeas;

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



    promedioEdadeas = promedioArrayInt(edades, EDADESSIZE);
    printf("\nEl promedio de los valores ingresado es: %.2f", promedioEdadeas);



	return EXIT_SUCCESS;
}

float promedioArrayInt(int arrayInt[], int len)
{
	int i;
	float resultado;
	int acumArray = 0;

	for(i=0; i<len; i++)
	{
		acumArray = acumArray + arrayInt[i];
	}

	resultado = (float) acumArray / len;
	return resultado;
}
