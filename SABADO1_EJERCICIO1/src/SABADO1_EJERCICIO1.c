/*
 ============================================================================
 Name        : SABADO1EJERCICIO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
EJERCICIO 1-1:
Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
a) El promedio de los números positivos.
b) El promedio de los números negativos.
 */


#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	int acumPositivos=0;
	int acumNegativos=0;
	int contPositivos=0;
	int contNegativos=0;
	float promedioPositivos;
	float promedioNegativos;
	char respuesta='s';

	do
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado);

		if(numeroIngresado>0)
		{
			acumPositivos+=numeroIngresado;
			contPositivos++;
		}

		if(numeroIngresado<0)
		{
			acumNegativos+=numeroIngresado;
			contNegativos++;
		}

		printf("\nDesea seguir ingresando numeros?: s-n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta=='s');

	promedioPositivos = (float) acumPositivos/contPositivos;
	promedioNegativos = (float) acumNegativos/contNegativos;

	printf("El promedio de los positivos es: %f",promedioPositivos);
	printf("\nEl promedio de los negativos es: %f",promedioNegativos);


	return EXIT_SUCCESS;
}

