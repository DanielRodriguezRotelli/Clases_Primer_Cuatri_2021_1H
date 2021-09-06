/*
 ============================================================================
 Name        : CLASE1EJERCICIO5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
- Limpie la pantalla
- Solicite dos valores numéricos al usuario distintos de cero *
- Asigne a las variables numero1 y numero2 los valores obtenidos
- Realice la resta de dichas variables
- Muestre el resultado por pantalla
- Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor *
- Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero *
*/

int main(void)
{
	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int resta;


	printf("Ingrese un numero: ");
	scanf("%d",&numeroUno);

	printf("Ingrese otro numero: ");
	scanf("%d",&numeroDos);

	resta = numeroUno - numeroDos;

	printf("La resta es: %d\n", resta);

	if(resta>0)
	{
		printf("El numero es positivo");
	}
	  else
	  {
		  printf("El numero es negativo");
	  }


	return EXIT_SUCCESS;
}

