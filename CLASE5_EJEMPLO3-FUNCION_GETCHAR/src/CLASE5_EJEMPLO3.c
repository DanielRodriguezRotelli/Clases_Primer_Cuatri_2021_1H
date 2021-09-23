/*
 ============================================================================
 Name        : CLASE5EJEMPLO3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 PEDIR CHAR AL USUARIO
 */

#include <stdio.h>
#include <stdlib.h>

int pedirCharAlUsuario(char* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);


int main(void)
{
	setbuf(stdout,NULL);

	char caracterAPedir;

	int salidaFuncion = pedirCharAlUsuario(&caracterAPedir,65,90,2,"Ingrese un caracter: \n","Error!!!\n\n");
	if(salidaFuncion==0)
	{
		printf("Salio todo bien!!! El caracter es %c", caracterAPedir);
	}
	else
	{
		if(salidaFuncion==2)
		{
			printf("Te quedaste sin reintentos");
		}
		else
		{
			printf("La funcion recibio algun parametro mal");
		}
	}
	return EXIT_SUCCESS;
}

int pedirCharAlUsuario(char* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError)
{
	char buffer;
	int retorno=-1;
	int i;
	int salidaScanf;
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for (i=0; i<=reintentos; i++)
		{
			printf("%s",variableTexto);
			fflush(stdin);
			salidaScanf=scanf("%c", &buffer);

			printf("\nLa salida del scanf es : %d\n\n",salidaScanf);
			if (salidaScanf>0 && buffer>=min && buffer<=max)
			{
				retorno = 0; // OK
				*pResultado=buffer;
				break;
			}
			else
			{
				retorno=-2;
				printf("%s\n",textoError);
			}
		}
	}
	return retorno;
}
