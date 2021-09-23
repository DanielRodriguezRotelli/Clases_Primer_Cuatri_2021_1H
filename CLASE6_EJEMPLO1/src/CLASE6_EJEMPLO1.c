/*
 ============================================================================
 Name        : CLASE6_EJEMPLO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
"ARRAYS"
EJEMPLO1:
Pedirle al usuario que ingrese 5 edades y luego imprimir las 5 edades.
Definir un array de 5 posiciones y usar la funcion utn_getInt() para pedir los valores.
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EDADESSIZE 5

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
	for(i=0; i<EDADESSIZE; i++)
	{
		printf("%d ", edades[i]);
	}

	return EXIT_SUCCESS;
}
