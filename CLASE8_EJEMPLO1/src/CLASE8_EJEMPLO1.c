/*
 ============================================================================
 Name        : CLASE9_EJEMPLO1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
---CADENA DE CARACTERES---
Ejemplo1:
RECIBE UNA CADENA Y DEVUELVE LA CANTIDAD DE CARACTERES.
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


	return 0;
}

int myStrLen(char cadena[])//recibo la cadena
//int myStrLen (char* cadena) //ingreso alternativo
{
	int cont = 0;

	if(cadena!=NULL)
	{
		cont=0;
		while(cadena[cont]!='\0')
		{
			cont++;
		}
	}
	return cont;
}


