/*
 ============================================================================
 Name        : CLASE3EJERCICIO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 SUMA DE DOS NUMEROS POR FUNCION SUMAR CON LIMITE (DEVOÑVER POR VALOR)
 */

#include <stdio.h>
#include <stdlib.h>

int sumarConLimite(int operador1, int operador2); //prototipo

int main(void)
{
	setbuf(stdout, NULL);

	int num1;
	int num2;
	int suma;

	printf("Ingrese un numero: ");
	scanf("%d",&num1);
	printf("Ingrese otro numero:");
	scanf("%d",&num2);

	suma = sumarConLimite(num1,num2);
	printf("La suma es: %d",suma);

	return EXIT_SUCCESS;
}

// funciones auxiliares
// definicion de la funcion
//TIPO   NOMBRE              FUNCION
int sumarConLimite(int operador1, int operador2) //prototipo
{  //codigo de la funcion
	int resultado;   //variable local de la funcion
	resultado = operador1 + operador2;
	if(resultado>100)
	{
		resultado=100;
	}
	return resultado;  //retornar el valor

}
