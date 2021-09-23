/*
 ============================================================================
 Name        : CLASE3ejemplo2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
EJERCICIO:
Hacer un programa que pida un numero al usuario, despues que pida una operacion ( + - / * )
y despues que pida otro numero. Segun la operacion ingresada, se llamará a una funcion que
ejecute la operacion (sumar() restar() multiplicar() dividir()) y luego mostrar al usuario
el resultado. El mostrar resultado NOOOOOO puede estar dentro de las funciones que crean
para hacer la operacion. En la funcion de dividir, validar no dividir por 0.
 */


#include <stdio.h>
#include <stdlib.h>

int sumar (int operador1, int operador2);
int restar (int operador1, int operador2);
int multiplicar (int operador1, int operador2);
float dividir (int operador1, int operador2, float* direccionDeVariableDeRetorno);

int main(void)
{
	setbuf(stdout,NULL);

	int num1;
	int num2;
	char operacion;
	int resultadoInt;
	float resultadoFloat;
	int rethuboError;

	printf("Ingrese un numero: ");
	fflush(stdin);
	scanf("%d",&num1);

	printf("Indique qué tipo de operacion quiere realizar: S-R-D-M: ");
	fflush(stdin);
	scanf("%c",&operacion);

	printf("Ingrese el segundo numero: ");
	fflush(stdin);
	scanf("%d",&num2);

	switch(operacion)
	{
		case'S':
		resultadoInt = sumar(num1,num2); //DEVOLVER POR VALOR
		break;

		case'R':
		resultadoInt = restar(num1,num2); //DEVOLVER POR VALOR
		break;

		case'M':
		resultadoInt = multiplicar(num1,num2); //DEVOLVER POR VALOR
		break;

		case'D':
		rethuboError = dividir(num1, num2, &resultadoFloat); //DEVOLVER POR REFERENCIA		break;

	}//fin del swicht

	if(operacion=='S' || operacion=='R' || operacion=='M')
	{
		printf("El resultado es: %d",resultadoInt);
	}

	if(operacion=='D')
	{
		if(rethuboError==1)
		{
			printf("No se puede dividir x 0.");
		}
			else
			{
				printf("El resultado es: %f",resultadoFloat);
			}
	}






	return EXIT_SUCCESS;
}

int sumar (int operador1, int operador2)
{
	int resultado;
	resultado = operador1 + operador2;
	return resultado;
}

int restar (int operador1, int operador2)
{
	int resultado;
	resultado = operador1 - operador2;
	return resultado;
}

int multiplicar (int operador1, int operador2)
{
	int resultado;
	resultado = operador1 * operador2;
	return resultado;
}

int dividir (int operador1, int operador2, float* direccionDeVariableDeRetorno)
{
	float resul;
	int huboError;

	if(operador2!=0)
	{
		resul = (float) operador1 / operador2;
		huboError=0; //No hubo error
		*direccionDeVariableDeRetorno = resul; //DEVOLVER POR REFERENCIA
	}
	else
	{
		huboError=1; //Hubo error
	}
	return huboError;
}
