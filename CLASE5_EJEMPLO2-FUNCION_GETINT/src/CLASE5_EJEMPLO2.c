/*
 ============================================================================
 Name        : CLASE5EJEMPLO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 PEDIR INT AL USUARIO!!!!
 */

#include <stdio.h>
#include <stdlib.h>

int pedirIntAlUsuario(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);


int main(void)
{
	setbuf(stdout,NULL);

	int numeroInt;

	int salidaFuncion = pedirIntAlUsuario(&numeroInt, -10,800,2,"Ingrese un numero: \n","Error! fuera de rango");
	if(salidaFuncion==0)
	{
		printf("Salio todo bien!!! El numero es %d", numeroInt);
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
