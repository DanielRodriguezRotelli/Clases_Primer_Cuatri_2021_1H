/*
 ============================================================================
 Name        : CLASE1EJERCICIO6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
- Solicite al usuario 10 números
- Calcule cuántos son negativos y cuantos son positivos
- Muestre por pantalla la cantidad de negativos y la cantidad de positivos
 */

int main(void)
{
	setbuf(stdout,NULL);

	int numeroIngresado;
	int contPositivos=0;
	int contNegativos=0;
	int i;

	for(i=0;i<10;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numeroIngresado);

		if(numeroIngresado>0)
		{
			contPositivos++;
		}
		  else if(numeroIngresado<0)
		  {
			  contNegativos++;
		  }

	}//fin del for

	printf("Cantidad de positivos: %d\n",contPositivos);
	printf("Cantidad de negativos: %d",contNegativos);






	return EXIT_SUCCESS;
}

