/*
 ============================================================================
 Name        : CLASE3EJERCICIO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Crear una función que permita ingresar un numero al usuario y lo retorne.
 Crear una función que reciba el radio de un círculo y retorne su área.
 Utilizar las funciones de los puntos 1 y 2 para hacer un programa que
 calcule el área de un círculo cuyo radio es ingresado por el usuario.
 Documentar las funciones al estilo Doxygen.
 */

#include <stdio.h>
#include <stdlib.h>

void pedirFloatAlUsuario(float* pNumero);
void sacarRadioCirculo(float radio, float* pArea);

int main(void)
{
	setbuf(stdout,NULL);

	float numero;
	float areaCirculo;


	pedirFloatAlUsuario(&numero);

	printf("Usted ingreso el numero: %.2f\n",numero);

	sacarRadioCirculo (numero, &areaCirculo);

	printf("El area del Circulo es: %.2f", areaCirculo);



	return EXIT_SUCCESS;
}

void pedirFloatAlUsuario(float* pNumero)
{
	printf("Ingrese el radio del circulo: ");
	scanf("%f", pNumero);
}

void sacarRadioCirculo(float radio, float* pArea)
{
	float resultado;

	resultado = 3.14 * (radio * radio);
	*pArea=resultado;
}




