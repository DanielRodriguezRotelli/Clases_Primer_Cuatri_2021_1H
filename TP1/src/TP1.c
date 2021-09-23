/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
TP1 Enunciado:
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
 */

#include <stdio.h>
#include <stdlib.h>
#include "tp1_biblioteca.h"

#define REINT_LEN 3
#define MAX 20000
#define MIN -20000



int main(void)
{
	setbuf(stdout,NULL);

	int respuestaDeOpciones;
	float operadorUno;
	float operadorDos;
	int scanOperadorUno=0;
	int scanOperadorDos=0;
	float suma;
	float resta;
	float multiplicacion;
	float division;
	float factorial1;
	float factorial2;
	int estadoOperacionesMath=0;
	int scanSuma=0;
	int scanResta=0;
	int scanMultiplicacion=0;
	int scanFactorial1;
	int scanFactorial2;




	do
	{
		do
		{
			menuDeOpciones(&respuestaDeOpciones);
		}while(respuestaDeOpciones!=1 && respuestaDeOpciones!=2 && respuestaDeOpciones!=3 && respuestaDeOpciones!=4 && respuestaDeOpciones!=5);


		switch(respuestaDeOpciones)
		{
			case 1:
			pedirFloatAlUsuario(&operadorUno,&scanOperadorUno, MIN, MAX, REINT_LEN, "Ingrese un numero", "Error");
			printf("El operador 1 es: %.2f",operadorUno);
			break;

			case 2:
			pedirFloatAlUsuario(&operadorDos,&scanOperadorDos, MIN, MAX, REINT_LEN, "Ingrese un numero", "Error");
			printf("El operador 2 es: %.2f", operadorDos);
			break;

			case 3:
			if(scanOperadorUno==1 && scanOperadorDos==1)
			{
				sumar(operadorUno, operadorDos, &suma);
				scanSuma=1;
				restar(operadorUno, operadorDos, &resta);
				scanResta=1;
				multiplicar(operadorUno, operadorDos, &multiplicacion);
				scanMultiplicacion=1;
				dividir(operadorUno, operadorDos, &division);
				scanFactorial1=factorial((int)operadorUno, &factorial1);
				scanFactorial2=factorial((int)operadorDos, &factorial2);


				printf("Se realizaron las operaciones satisfactoriamente.");
				estadoOperacionesMath=1;

			}
			else
				{
					printf("No se pueden realizar las operaciones. ");

					if(scanOperadorUno==0 && scanOperadorDos==0)
					{
						printf("\nFaltan ingresar ambos operadores.");
					}
					else
					{
						if(scanOperadorUno==0)
						{
							printf("\nFalta ingresar el operador Uno.");
						}
						else
							{
								printf("\nFalta ingresar el operador Dos.");
							}
					}
				}
			break;

			case 4:
			if(estadoOperacionesMath==1)
			{
				if(scanSuma==1)
				{
					printf("El resultado de %.2f + %.2f es: %.2f", operadorUno, operadorDos ,suma);
				}
					else
					{
						printf("Algo fallo en la operacion. No se puede imprimir la Suma.");
					}

				if(scanResta==1)
				{
					printf("\nEl resultado de %.2f -  %.2f es:  %.2f", operadorUno, operadorDos ,resta);
				}
					else
					{
						printf("Algo fallo en la operacion. No se puede imprimir la Resta.");
					}

				if(scanMultiplicacion==1)
				{
					printf("\nEl resultado de  %.2f *  %.2f es:  %.2f", operadorUno, operadorDos ,multiplicacion);
				}
					else
					{
						printf("Algo fallo en la operacion. No se puede imprimir la Multiplicacion.");
					}


				if(dividir(operadorUno, operadorDos, &division)==0)
				{
					printf("\nEl resultado de  %.2f /  %.2f es: %.2f", operadorUno, operadorDos ,division);
				}
					else
					{
						printf("\nEl resultado de  %.2f /  %.2f es: No se puede dividir por 0", operadorUno, operadorDos);
					}


				if(scanFactorial1==0 && scanFactorial2==0)
				{
					printf("\nEl factorial de  %.2f es:  %.2f y el factorial de  %.2f es  %.2f",operadorUno,factorial1,operadorDos,factorial2);
				}
				else
				{
					if(operadorUno<0 && operadorDos>=0)
					{
						printf("\nEl operador 1 es Negativo. Por ahora no sabemos usar la funcion Gamma y el factorial de  %.2f es:  %.2f",operadorDos,factorial2);
					}
					else if(operadorUno>=0 && operadorDos<0)
					{
						printf("\nEl factorial de  %.2f es:  %.2f y el operador 2 es Negativo. Por ahora no sabemos usar la funcion Gamma y ",operadorUno,factorial1);
					}
				}

				if(operadorUno<0 && operadorDos<0)
				{
					printf("Los operadores son Negativos. Por ahora no sabemos usar la funcion Gamma.");
				}

			}
				else
			    {
					if(estadoOperacionesMath!=1)
					{
						printf("No se puede imprimir. \nFalta realizar las operaciones matmáticas.");
					}

					if(scanOperadorUno!=1 && scanOperadorDos!=1)
					{
						printf("\nFaltan ingresar ambos operadores.");
					}
						else
						{
							if(scanOperadorUno!=1 )
							{
								printf("\nFalta ingresar el operador Uno.");
							}
							else if(scanOperadorDos!=1 )
							{
								printf("\nFalta ingresar el operador Dos.");
							}
						}
				}
			break;

			case 5:
			printf("Usted salió del menu.");
			break;
		}//fin del switch

	}while(respuestaDeOpciones!=5);

	return EXIT_SUCCESS;
}


