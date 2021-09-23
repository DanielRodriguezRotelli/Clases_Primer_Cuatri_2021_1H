/*
 ============================================================================
 Name        : CLASE7_EJEMPLO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
ORDENAMIENTO DE ARRAY:
EJEMPLO2:
Ordenar los numeros dentro del array de mayor a menor.
 */

#include <stdio.h>
#include <stdlib.h>
#define QY_COD_AREA  5

int imprimirArrayEnteros(int arrayAImprimir[], int tamanioArray);
void imprimirElemento(int elemento, int indice);
int ordenarArray(int arrayAOrdenar[], int tamanio);

int main(void)
{
	setbuf(stdout,NULL);

	int codigosArea[QY_COD_AREA] = {8,20,134,23,50};
	int cantVueltas;

	imprimirArrayEnteros(codigosArea, QY_COD_AREA);
	cantVueltas = ordenarArray(codigosArea, QY_COD_AREA);
	imprimirArrayEnteros(codigosArea, QY_COD_AREA);
	printf("Cantidad de vueltas: %d", cantVueltas);

	return EXIT_SUCCESS;

}

int imprimirArrayEnteros(int arrayAImprimir[], int tamanioArray)
{
	int retorno = -1;
	int i;
	if(arrayAImprimir != NULL && tamanioArray >= 0)
	{
		for(i = 0; i < tamanioArray; i++)
		{
			imprimirElemento(arrayAImprimir[i],i);
		}
		printf("\n");
		retorno = 0;

	}
	return retorno;
}

//funcion para imprimir el Array
void imprimirElemento(int elemento, int indice)
{
	printf("ELEMENTO DEBUG %d, POSICION %d \n",elemento, indice);
}

//funcion para ordenar el ARRAY
int ordenarArray(int arrayAOrdenar[], int tamanio)
{
	int retorno = -1;
	int flagSawp = 0;
	int aux;
	int contadorVueltas = 0;
	int limite = tamanio;
	int i;

	if(arrayAOrdenar != NULL && tamanio >= 0)
	{
		do
		{
			flagSawp=0;// esto es pensar que la lista esta ordenada
			limite = limite -1;
			for(i = 0; i < limite; i++)
			{
				if(arrayAOrdenar[i] < arrayAOrdenar[i + 1])
				{
					flagSawp = 1;// consideramos que el Array esta desordenado
					// las lineas de abajo son el SWAP
					aux = arrayAOrdenar[i]; // aux = 8
					arrayAOrdenar[i] = arrayAOrdenar[i + 1]; // array[i] = 20
					arrayAOrdenar[i + 1] = aux; // array [i + 1] 8
				}
			}
			contadorVueltas++;

		}while(flagSawp == 1);
		retorno = contadorVueltas;

	}



	return retorno;
}
