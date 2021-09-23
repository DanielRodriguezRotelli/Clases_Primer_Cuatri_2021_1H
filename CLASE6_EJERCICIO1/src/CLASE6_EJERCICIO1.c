/*
 ============================================================================
 Name        : CLASE6EJEMPLO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
"ARRAY"
Ejercicio 1:
Crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes.
Definir un array de floats de 31 posiciones. Cada posicion corresponderá a un dia
del mes. Hacer un programa con un menu de tres opciones, 1.imprimir array, 2.cargar array, 3.Salir
Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
Ambas opciones deben volver al menu ppal.
Utilizar la funcion utn_getNumeroFloat() de la biblioteca utn.h
 */


#include <stdio.h>
#include <stdlib.h>

#include "utn_biblioteca.h"

#define TEMP_LEN   31

void cargarArray(float pArray[], int indice, float temp);
void imprimirArrayTemperatura(float arraylista[], int len);


int main(void)
{
	setbuf(stdout,NULL);

	float arrayTemperaturaPorDia[TEMP_LEN];
	int opcion;
	int diaIngresado;
	float temperatura;
	int retorno_GetIn;
	float retorno_GetFloat;



	inicializarArray(arrayTemperaturaPorDia, TEMP_LEN, 0);

	do
	{
		do
		{
			printf("De las siguientes operaciones:\n 1-Imprimir el indice.\n 2-Cargar Array.\n 3-Salir.\n Que operacion desea realizar?:");
			scanf("%d",&opcion);
		}while(opcion!=1 && opcion!=2 && opcion!=3);

		switch(opcion)
		{
			case 1:
			imprimirArrayTemperatura(arrayTemperaturaPorDia, TEMP_LEN);

			break;

			case 2:
		    retorno_GetIn = pedirIntAlUsuario(&diaIngresado, 1, 31, 3, "Ingrese un dìa del 1 al 31: ", "Error. EL dia ingresado es incorrecto.");
			retorno_GetFloat = pedirFloatAlUsuario(&temperatura, -50, 50, 3, "Ingrese una temperatura entre -50 y 50: ", "Error. La temperatura ingresada es incorrecto.");
			cargarArray(arrayTemperaturaPorDia, diaIngresado, temperatura);
			break;

			case 3:
			printf("Salió del menu.");
			break;

		}//fin del switch

	}while(opcion!=3);



	return EXIT_SUCCESS;
}

void cargarArray (float pArray[], int indice, float temp)
{
	pArray[indice-1]= temp;
}


void imprimirArrayTemperatura(float arraylista[], int len)
{
	int banderaTodoBien;
    int i;
    banderaTodoBien = 0;

    if(arraylista != NULL && len>0)
    {
    	for (i = 0; i < len; i++)
        {
            printf("Temperatura Por Dia [%d]: %.2f\n", i, arraylista[i]);
        }
    }
    else
    {
    	printf("No se puede imprimir la lista");
    }
}


