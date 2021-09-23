/*
 ============================================================================
 Name        : CLASE1EJERCICIO3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// INGRESE 2 NUMEROS E IMPRIMIR LA SUMA, LA RESTA, LA DIVSION Y LA MULTIPLICACION

int main(void)
{
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int suma;
	int resta;
	int multiplicacion;
	float division;

	printf("Ingrese un numero: ");
	scanf("%d",&numeroUno);

	printf("Ingrese otro numero: ");
	scanf("%d",&numeroDos);

	suma = numeroUno + numeroDos;
	resta = numeroUno - numeroDos;
	multiplicacion = numeroUno * numeroDos;
	division = (float) numeroUno / numeroDos;

	printf("La suma es: %d\n", suma);
	printf("La resta es: %d\n", resta);
	printf("La multiplicacion es: %d\n", multiplicacion);
	printf("La division es: %f\n", division);


	return EXIT_SUCCESS;
}

