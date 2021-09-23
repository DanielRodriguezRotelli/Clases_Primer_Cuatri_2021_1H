/*
 ============================================================================
 Name        : CLASE7_EJEMPLO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
ORDENAMIENTO DE ARRAY:
EJEMPLO:
Ordenar los numeros dentro del array de mayor a menor.
 */

#include <stdio.h>
#include <stdlib.h>
#define TEMP_LEN   31
#define QY_COD_AREA  5

int ordenarArray(int arrayAordenar[], int arrayOrdenado[], int tamanioArray);

int main(void)
{
	setbuf(stdout,NULL);

	int codigosArea[QY_COD_AREA] = {8,20,134,23,50};
	int codigoOrdenado[QY_COD_AREA];

	//Indice	0	1	2	3	4
		// valor	8	20	134	23	50

		//num 8
		//numero a reemplazar 134

		//buscarias el mas grande ><
		// 134
		//

		//Indice	0	1	2	3
		// valor	8	20	23	50

	return EXIT_SUCCESS;
}


//funcion (arrayAordenar, arrayOrdenado, tamanio)

int ordenarArray(int arrayAordenar[], int arrayOrdenado[], int tamanioArray)
{
	int indice;
	int indiceMayor;
	int mayor=0;
	int contadorOrdenado=0;
	int encontreMayor = -1;

	do
	{
		for(indice=0; indice<tamanioArray - contadorOrdenado; indice++)
		{

			if(arrayAordenar[indice] > arrayAordenar[indice + 1] && indice +1 < tamanioArray - contadorOrdenado)
			{
				mayor = arrayAordenar[indice];
				indiceMayor = indice;
				encontreMayor = 0;
			}
		}

		for(int i=0; i<tamanioArray - contadorOrdenado; i++)
		{
			if(i == indiceMayor)
			{
				arrayAordenar[i] = arrayAordenar[i + 1];
			}

		}

		if(encontreMayor == 0)
		{
			arrayOrdenado[contadorOrdenado] = mayor;
		}

		contadorOrdenado++;

	}while(contadorOrdenado <= tamanioArray);


}
