/*
 ============================================================================
 Name        : pruebaFactorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirFloatAlUsuario(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);
void factorial(int operador,  int* pResultFactorial);

int main(void)
{
	setbuf(stdout,NULL);
	int operadorUno;
	int factorialUno;

	pedirFloatAlUsuario(&operadorUno, -1000, 1000, 3, "Ingrese un numero","Error");
	printf("%d",operadorUno);

	factorial(operadorUno, &factorialUno);

	printf("\nEl factorial es: %d", factorialUno);







	return EXIT_SUCCESS;
}

int pedirFloatAlUsuario(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError)
{
	int num;
	int retorno=-1;
	int i;
	int salidaScanf;
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for(i=0; i<=reintentos; i++)
		{
			printf("%s", variableTexto);
			salidaScanf=scanf("%d", &num);
			if(salidaScanf==1) //CONDICION PARA SABER SI EL SCAN PUDO GUARDAR UN NUMERO EN LA VARIABLE
			{
				if(num>=min && num<=max)
				{
				//printf("La salida de scanf es: %d\n\n",salidaScanf);
				retorno=0; //OK
				*pResultado=num;
				break;
				}
			}
			else
			{
				retorno=-2;
				printf("%s\n",textoError);
			}
			fflush(stdin);
		}
	}
	return retorno;
}

void factorial(int operador,  int* pResultFactorial)
{
	int i=1;
	int resultado=1;

	if(operador>=0)
	{
		for(i=1; i<=operador; i++)
		{
			resultado=resultado*i;
			*pResultFactorial=resultado;
		}
	}
}
