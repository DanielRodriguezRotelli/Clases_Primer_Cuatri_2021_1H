/*
 * tp1_biblioteca.c
 *
 *  Created on: 18 sep. 2021
 *      Author: Aye
 */

#include <stdio.h>
#include <stdlib.h>

void menuDeOpciones(int* pRespuesta)
{
	int respuesta;
	int salidaScan;

	do
	{
		printf("\n ---MENU PRINCIPAL---");
		printf("\n1-Ingresar 1er operando: ");
		printf("\n2-Ingresar 2do operando: ");
		printf("\n3-Calcular todas las operaciones: ");
		printf("\n4-Informar resultados: ");
		printf("\n5-Salir. \n");
		printf("Ingrese la opcion deseada: ");
		salidaScan=scanf("%d",&respuesta);
		if(salidaScan==1 && (respuesta==1 || respuesta==2 || respuesta==3 || respuesta==4 || respuesta==5))
		{
			*pRespuesta = respuesta;
			break;
		}
		else
		{
			printf("ERROR. OPCION NO VALIDA. INTENTE OTRA VEZ");
		}
		fflush(stdin);

	}while(salidaScan!=1 && (respuesta==1 || respuesta==2 || respuesta==3 || respuesta==4 || respuesta==5));

}


int pedirFloatAlUsuario(float* pResultado,int* pSalidaScanf, float min, float max, int reintentos, char* variableTexto, char* textoError)
{
	float num;
	int retorno=-1;
	int i;
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for(i=0; i<=reintentos; i++)
		{
			printf("%s", variableTexto);
			*pSalidaScanf=scanf("%f", &num);
			if(*pSalidaScanf==1) //CONDICION PARA SABER SI EL SCAN PUDO GUARDAR UN NUMERO EN LA VARIABLE
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

int pedirIntAlUsuario(int* pResultado,int* pSalidaScanf, int min, int max, int reintentos, char* variableTexto, char* textoError)
{
	int num;
	int retorno=-1;
	int i;
	if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
	{
		for(i=0; i<=reintentos; i++)
		{
			printf("%s", variableTexto);
			*pSalidaScanf=scanf("%d", &num);
			if(*pSalidaScanf==1) //CONDICION PARA SABER SI EL SCAN PUDO GUARDAR UN NUMERO EN LA VARIABLE
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


void sumar(float operador1, float operador2, float* pSuma)
{
	*pSuma=operador1 + operador2;
}

void restar(float operador1, float operador2, float* pResta)
{
	*pResta = operador1 - operador2;
}

void multiplicar(float operador1, float operador2, float* pMultiplicacion)
{
	*pMultiplicacion = operador1 * operador2;
}

int dividir(float operador1, float operador2, float* pDivision)
{
	int retorno;

	if(operador2!=0)
	{
		*pDivision = (float) operador1 / operador2;//DEVOLVER POR REFERENCIA
		retorno=0; //No hubo error
	}
	else
	{
		retorno=1; //Hubo error
	}
	return retorno;
}

int factorial(int operador, float* pResultFactorial)
{
	int i;
	int resultado=1;
	int retorno=-1;

	if(operador>=0)
	{
		for(i=1; i<=operador; i++)
		{
			resultado=resultado*i;

		}
		*pResultFactorial=resultado;
		retorno=0;
	}
	else
	{
		if(operador==0)
		{
			*pResultFactorial=1;
			retorno=0;
		}

	}
	return retorno;
}

