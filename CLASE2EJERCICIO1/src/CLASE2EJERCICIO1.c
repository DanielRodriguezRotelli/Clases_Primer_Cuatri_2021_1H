/*
 ============================================================================
 Name        : CLASE2EJERCICIO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

//Realizar un programa que solicite cinco números e imprima por pantalla el promedio, el máximo y el mínimo.

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	int acumNumero;
	float promedio;
	int maximo;
	int minimo;
	int i;

	printf("Ingrese un numero: ");
	scanf("%d",&numeroIngresado);
	maximo=numeroIngresado;
	minimo=numeroIngresado;
    acumNumero=numeroIngresado;

	for(i=0;i<4;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado);

		acumNumero+=numeroIngresado;

		if(maximo<numeroIngresado)
		{
			maximo=numeroIngresado;
		}
		if(minimo>numeroIngresado)
		{
			minimo=numeroIngresado;
		}

	}//fin del for

	promedio = (float) acumNumero/5;

	printf("El promedio es: %f\n",promedio);
	printf("El numero maximo es: %d\n",maximo);
	printf("El numero minimo es: %d",minimo);


	return EXIT_SUCCESS;
}

