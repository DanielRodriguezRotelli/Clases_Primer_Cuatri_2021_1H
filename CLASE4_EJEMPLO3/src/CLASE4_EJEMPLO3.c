/*
 ============================================================================
 Name        : CLASE4EJEMPLO3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
EJEMPLO 3:
HACER UNA FUNCION DONDE PIDA AL USUSARIO QUE INGRESE NUMEROS FLOAT y VER SI ENTRA
DENTRO DEL RANGO MAXIMO O MINIMO!!!!
 */

#include <stdio.h>
#include <stdlib.h>

int dividir(float a, float b, float* pResultado);
int pedirFloatAlUsuario(float* pNumero, float minimo, float maximo);

int main(void)
{
	setbuf(stdout,NULL);

	float num1;
	float num2; // si el valor de b no es 0, podrá dividir, si es 0, no podrá dividir.

	float resultadoOperacion;
	int estado;



	if((pedirFloatAlUsuario(&num1, 0.0, 1000.0))==0)
	{
		printf("El numero valido es %f\n",num1);
	}
	else
	{
		printf("El numero está fuera de rango\n");
	}



	if((pedirFloatAlUsuario(&num2, 0.0, 1000.0))==0)
	{
		printf("El numero valido es %f",num2);
	}
	else
	{
		printf("El numero está fuera de rango");
	}



	estado = dividir(num1, num2, &resultadoOperacion);
	if(estado==0)
	{// PUDE DIVIDIR
		printf("\nEl resultado es: %f",resultadoOperacion);
	}
	else
	{
		printf("\nNo se puede dividir x 0. ");
	}



	return EXIT_SUCCESS;
}

int pedirFloatAlUsuario(float* pNumero, float minimo, float maximo)
{
	float numero;
	int validacion;

	printf("Ingrese un numero: ");
	scanf("%f",&numero);
	if(numero>=minimo && numero<=maximo)
	{
		validacion=0; //OK
		*pNumero=numero;
	}
	else
	{
		validacion=1;// ERROR
	}

	return validacion;

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



