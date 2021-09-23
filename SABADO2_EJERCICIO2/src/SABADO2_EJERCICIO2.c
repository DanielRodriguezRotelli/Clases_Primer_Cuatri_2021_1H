/*
 ============================================================================
 Name        : SABADO2_EJERCICIO2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 2-2:
Realizar un programa que permita el ingreso de 10 números enteros. Determinar "el
promedio" de los positivos, la cantidad de ceros y del menor de los negativos "la suma
de los antecesores".
Utilizar la función del punto anterior y desarrollar funciones para resolver los procesos
que están resaltados.
 */

#include <stdio.h>
#include <stdlib.h>

float promedioPositivos(int numerador, int denominador, float* resultadoPromedio);
int sumarAntecesores(int menor, int contNegativo, int* sumaAntec);

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int i;
	int acumPositivos=0;
	int contPositivos=0;
	int contNegativo=0;
	int contCeros=0;
	int estado;
	float promedioPositiv;
	int flagNegativo=0;
	int menorNegativo;
	int sumaAntecesores;

	int resultado;



	for(i=0; i<10; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);

		if(numero>0)
		{
			acumPositivos+=numero;
			contPositivos++;
		}
		else if(numero<0)
			{
				if(flagNegativo==0 || menorNegativo>numero)
				{
					menorNegativo=numero;
					contNegativo++;
					flagNegativo=1;
				}
			}
				else
				{
					contCeros++;

				}


	}//fin del for

	estado = promedioPositivos(acumPositivos, contPositivos, &promedioPositiv);
	if(estado!=0)
	{
		printf("No se ingresaron numero positivos.\n");
	}
		else
		{
			printf("El promedio de los Positivos es: %f\n",promedioPositiv);
		}

	printf("La cantidad de Ceros es: %d\n", contCeros);

	resultado = sumarAntecesores(menorNegativo, contNegativo, &sumaAntecesores);
	if(resultado!=1)
	{
		printf("La suma de los antecesores negativos es: %d",sumaAntecesores);
	}
	else
	{
		printf("No se han ingresado numeros Negativos.");
	}



	return EXIT_SUCCESS;
}



float promedioPositivos(int numerador, int denominador, float* resultadoPromedio)
{
	float resultado;
	int estado;

	if(denominador!=0)
	{
		resultado = (float) numerador / denominador;
		estado=0;
		*resultadoPromedio = resultado;
	}
	else
	{
		estado=1;
	}

	return estado;

}

int sumarAntecesores(int menor, int contNegativo, int* sumaAntec)
{
	int resultado;
	int antecesor;
	int acumAntecesor=0;
	int flagNegativo=0;

	antecesor=menor+1;

	if(contNegativo!=0)
	{
		if(flagNegativo==0 || antecesor!=0)
		{
			acumAntecesor+=antecesor;
			antecesor=(antecesor+1);
			flagNegativo=1;
		}
		*sumaAntec=acumAntecesor;
		resultado=0;
	}
	else
	{
		resultado=1;
	}

	return resultado;


}







