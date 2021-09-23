/*
 ============================================================================
 Name        : CLASE8_EJEMPLO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	setbuf(stdout,NULL);

	char cadena[50] = "hola";

	cadena[1] = '<' + 1;

	printf("%c", cadena[1]);


	return EXIT_SUCCESS;
}


void myPuts(cadena)
{
	int cont = 0;
	if(cadena!=NULL)
	{
		cont=0;
		while(cadena[cont]!='\0')
		{
			printf("%c",cadena[cont]);
			cont++;
		}
	}
	return cont;

}

