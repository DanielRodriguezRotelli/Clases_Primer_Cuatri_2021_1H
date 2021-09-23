/*
 ============================================================================
 Name        : CLASE6_EJERCICIO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Ejercicio 2:

 a) Realizar un programa que le pida 5 numeros int al usuario y los almacene en un array.
 Luego ejecutar la funcion borrarImpares() pasandole el array y que deberá reemplazar
 los numeros que son impares por un cero.
 b) Luego imprimir el array para chequear el funcionamiento.
 c) Ordenar el array y volver a imprimirlo ordenado.
 */

#include <stdio.h>
#include <stdlib.h>

int borrarImparesArray(int arrayDeEnteros[], int tamanioArray);

int main(void)
{
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

int borrarImparesArray(int arrayDeEnteros[], int tamanioArray)
{
	int retorno=-1;
	if(arrayDeEnteros!=NULL && tamanioArray >=0)
	{
		for(int i=0; i<tamanioArray; i++)
		{
			if(encontroImpar(arrayDeEnteros,i)==0)
			{
				arrayDeEnteros[i]=0;
			}

		}
		retorno=0;
	}
	return retorno;
}

static int encontroImpar(int arrayABuscar[], int indice)
{
	int retorno=-1;
	if(arrayDeEnteros[i]%2!=0)
	{
		arrayDeEnteros[i]=0;
	}
	return retorno;
}

