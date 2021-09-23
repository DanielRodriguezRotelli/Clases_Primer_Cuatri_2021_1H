/*
 ============================================================================
 Name        : CLASE4_EJEMPLO4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
EJEMPLO 4:
HACER UNA FUNCION DONDE PIDA AL USUSARIO QUE INGRESE NUMEROS FLOAT y VER SI ENTRA
DENTRO DEL RANGO MAXIMO O MINIMO!!!!
SI NO ENTRA EN EL RANGO, QUE VUELVA A PEDIR QUE INGRESE EL NUMERO (REINTENTOS)!!!!
 */

#include <stdio.h>
#include <stdlib.h>

int dividir(float a, float b, float* pResultado);
int pedirFloatAlUsuario(float* pNumero, float minimo, float maximo,int reintentos);

#define REINTENTOS 3


int main(void)
{
	setbuf(stdout,NULL);

	float num1;
	float num2; // si el valor de b no es 0, podrá dividir, si es 0, no podrá dividir.

	float resultadoOperacion;
	int estado;



	if((pedirFloatAlUsuario(&num1, 0.0, 1000.0, REINTENTOS))==0)
	{
		printf("El numero valido es %f\n",num1);

		if((pedirFloatAlUsuario(&num2, 0.0, 1000.0, REINTENTOS))==0)
			{
				printf("El numero valido es %f",num2);

				estado = dividir(num1, num2, &resultadoOperacion);
				if(estado==0)
				{// PUDE DIVIDIR
					printf("\nEl resultado es: %f",resultadoOperacion);
				}
				else
				{
					printf("\nNo se puede dividir x 0. ");
				}

			}
			else
			{
				printf("El numero está fuera de rango. NO SE PUEDE CONTINUAR CON EL PROGRAMA. ");
			}

	}
	else
	{
		printf("El numero está fuera de rango. NO SE PUEDE CONTINUAR CON EL PROGRAMA.\n");
	}






	return EXIT_SUCCESS;
}

int pedirFloatAlUsuario(float* pNumero, float minimo, float maximo,int reintentos)
{
	float numero;
	int validacion;
	int i;
    for(i=0; i<=reintentos; i++)
    {
    	printf("Ingrese un numero: ");
    	scanf("%f",&numero);


    	if(numero>=minimo && numero<=maximo)
    	{
    		validacion=0; //OK
    		*pNumero=numero;
    		break;
    	}
    	else
    	{
    		validacion=1;// ERROR
    		printf("Numero fuera de rango\n");
    	}

    }//fin del for

	return validacion;

}



int dividir(float a, float b, float* pResultado)
{
	float resultado;
	int estado;

	if(b!=0)
	{
		resultado= (float)a/b;
		estado=0; //OK
		*pResultado=resultado;
	}
	else
	{
		estado=1; //ERROR, NO SE PUEDE DIVIDIR POR 0.

	}

	return estado;
}



