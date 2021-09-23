/*
 ============================================================================
 Name        : SABADO2_.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 2-1:
Crear una función que reciba como parámetro un numero entero. La función retornara
1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en caso de que sea 0.
Realizar la prueba lógica de la función en el main.
 */

#include <stdio.h>
#include <stdlib.h>

int clasificarNumeroIngresado(int dato);

int main(void)
{
	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un numero: ");
	scanf("%d",&numero);



	printf("El numero ingresado es: %d\n",numero);

	if((clasificarNumeroIngresado(numero))==-1)
	{
		printf("El numero ingresado es NEGATIVO.");
	}

		else if((clasificarNumeroIngresado(numero))==1)
		{
			printf("El numero ingresado es POSITIVO.");
		}
			else
			{
				printf("El numero ingresado es CERO.");
			}

	return EXIT_SUCCESS;
}

int clasificarNumeroIngresado(int dato)
{
	int validacion;

	if(dato<0)
	{
		validacion=-1;
	}
		else if(dato>0)
		{
			validacion=1;
		}
			else
			{
				validacion=0;
			}

	return validacion;
}

