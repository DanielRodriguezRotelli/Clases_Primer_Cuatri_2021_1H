/*
 ============================================================================
 Name        : CLASE4EJEMPLO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 EJEMPLO 1:
 COMO HACER UNA FUNCION DIVIDIR (PIDIENDO NUMEROS AL USUARIO) Y ASEGURAR QUE NO DIVIDO POR 0. DEVOLUCION POR REFERENCIA
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdout,NULL);

	float num1;
	float num2; // si el valor de b no es 0, podrá dividir, si es 0, no podrá dividir.

	float resultadoOperacion;
	int estado;

	printf("Ingrese un numero: ");
	scanf("%f",&num1);

	printf("Ingrese otro numero: ");
	scanf("%f",&num2);

	estado = dividir(num1, num2, &resultadoOperacion);
	if(estado==0)
	{// PUDE DIVIDIR
		printf("El resultado es: %.2f",resultadoOperacion);
	}
	else
	{
		printf("No se puede dividir x 0. \n");
	}



	return EXIT_SUCCESS;
}





