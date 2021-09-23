/*
 ============================================================================
 Name        : CLASE4EJEMPLO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 EJEMPLO 2:
 HACER UNA FUNCION DONDE PIDA AL USUSARIO QUE INGRESE 2 NUMEROS FLOAT!!!!
 HACER OTRA FUNCION DONDE NO PUEDA DIVIDIR SI EL DIVIDENDO ES 0!!!!

 */

#include <stdio.h>
#include <stdlib.h>

int dividir(float a, float b, float* pResultado);
void pedirFloatAlUsuario(float* pNumero);

int main(void)
{
	setbuf(stdout,NULL);

	float num1;
	float num2; // si el valor de b no es 0, podrá dividir, si es 0, no podrá dividir.

	float resultadoOperacion;
	int estado;

	pedirFloatAlUsuario(&num1);
	pedirFloatAlUsuario(&num2);

	estado = dividir(num1, num2, &resultadoOperacion);
	if(estado==0)
	{// PUDE DIVIDIR
		printf("El resultado es: %f",resultadoOperacion);
	}
	else
	{
		printf("No se puede dividir x 0. \n");
	}



	return EXIT_SUCCESS;
}

void pedirFloatAlUsuario(float* pNumero)
{
	printf("Ingrese un numero: ");
	scanf("%f",pNumero);
}



int dividir(float a, float b, float* pResultado)
{
	float resultado;
	int estado;

	if(b!=0)
	{
		resultado= (float)a/b;
		estado=0; //OK
		*pResultado=resultado;
	}
	else
	{
		estado=1; //ERROR, NO SE PUEDE DIVIDIR POR 0.

	}

	return estado;
}



