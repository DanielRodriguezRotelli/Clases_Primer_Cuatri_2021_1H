/*
 ============================================================================
 Name        : SABADO1EJERCICIO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 1-2:
Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en qué orden
fue ingresado.
 */

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	int maximo;
	int minimo;
	int ordenmaximo;
	int ordenminimo;
	int primernumero=0;
	int i;


	for(i=0;i<5;i++)
	{
		printf("ingrese un numero:");
		scanf("%d",&numeroIngresado);
		if(primernumero==0)
		{
			maximo=numeroIngresado;
			minimo=numeroIngresado;
			ordenmaximo=i;
			ordenminimo=i;
			primernumero=1;
		}

		if(maximo<numeroIngresado)
		{
			maximo=numeroIngresado;
			ordenmaximo=i+1;
		}

		if(minimo>numeroIngresado)
		{
			minimo=numeroIngresado;
			ordenminimo=i+1;
		}

	}// fin del for

	printf("El numero maximo es: %d y fue ingresado en el lugar: %d",maximo, ordenmaximo);
	printf("\nEl numero minimo es: %d y fue ingresado en el lugar: %d",minimo, ordenminimo);


	return EXIT_SUCCESS;
}

