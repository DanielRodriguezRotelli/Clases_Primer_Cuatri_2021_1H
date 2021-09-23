/*
 ============================================================================
 Name        : SABADO3_EJERCICIO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 3-1 (VECTORES Y FUNCIONES):
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
a. Cantidad de positivos y negativos.
b. Sumatoria de los pares.
c. El mayor de los impares.
d. Listado de los números ingresados.
e. Listado de los números pares.
f. Listado de los números de las posiciones impares.  
Se deberán utilizar funciones y vectores.

 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


void inicializarArray(int pArray[], int len, int valorInicial);
void imprimirArray(int arrayLista[], int len);

int contarNumeroPositivos(int* numeroIngresado);
int contarNumeroNegativos(int* numeroIngresado);
#define NUMEROINGRESADO_LEN 10

int main(void)
{
	setbuf(stdout,NULL);

	int cadenaNumeros[NUMEROINGRESADO_LEN];

	int numero;
	int i;
	int positivos;
	int negativos;

	inicializarArray(cadenaNumeros, NUMEROINGRESADO_LEN, 0);

	for(i=0;i<3;i++)
	{
		pedirIntAlUsuario(&numero, -1000, 1000, 3, "Ingrese un numero entre -1000 y 1000: ", "Error. El numero es incorrecto.");
		inicializarArray(cadenaNumeros,NUMEROINGRESADO_LEN,numero);
	}

	imprimirArray(cadenaNumeros, NUMEROINGRESADO_LEN);




	return EXIT_SUCCESS;
}




void imprimirArray(int arrayLista[], int len)
{
	int i;

	for(i=0; i<len; i++)
		{
			printf("%d\n", arrayLista[i]);
		}
}


int contarNumeroPositivos(int* numeroIngresado)
{
	int contPositivo=0;

	if(numeroIngresado>0)
	{
		contPositivo++;
	}
	return contPositivo;
}

int contarNumeroNegativos(int* numeroIngresado)
{
	int contNegativo=0;

	if(numeroIngresado<0)
	{
		contNegativo++;
	}
	return contNegativo;
}

