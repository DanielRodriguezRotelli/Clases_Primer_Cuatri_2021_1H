/*
 * pedirFloat.c
 *
 *  Created on: 12 sep. 2021
 *      Author: Aye
 */


#include <stdio.h>
#include <stdlib.h>

int pedirFloatAlUsuario(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError)
{
	float aux;
	int retorno=-1;
	int i;
	int salidaScanf;
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for(i=0; i<=reintentos; i++)
		{
			printf("%s", variableTexto);
			salidaScanf=scanf("%f", &aux);

			if(aux>=min && aux<=max)
			{
				printf("La salida de scanf es: %d\n\n",salidaScanf);
				retorno=0; //OK
				*pResultado=aux;
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

int pedirIntAlUsuario(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError)
{
	int aux;
	int retorno=-1;
	int i;
	int salidaScanf;
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for(i=0; i<=reintentos; i++)
		{
			printf("%s", variableTexto);
			salidaScanf=scanf("%d", &aux);

			if(aux>=min && aux<=max)
			{
				printf("La salida de scanf es: %d\n\n",salidaScanf);
				retorno=0; //OK
				*pResultado=aux;
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

