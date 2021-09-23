/*
 ============================================================================
 Name        : CLASE5EJEMPLO4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 ARRAY
 */

#include <stdio.h> //no va esta biblio
#include <stdlib.h> //no va esta biblio
// HAY QUE USAR LA BIBLIO QUE CREASTE


int main(void)
{
	setbuf(stdout,NULL);

	int i = 0;
	float arrayNumeros[5];

	for(i = 0; i < 5; i++)
	{
		arrayNumeros[1]=10.0;
	}

	for(i = 0; i<5; i++)
	{
		printf("\nEn la posicion i %d se encuentra el numero %.2f",1,arrayNumeros[i]);
	}


	return EXIT_SUCCESS;
}
