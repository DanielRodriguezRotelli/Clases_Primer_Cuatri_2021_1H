/*
 * utn.c
 *
 *  Created on: 12 sep. 2021
 *      Author: Aye
 */

#include <stdio.h>
#include <stdlib.h>

int dividir(float operador1, float operador2, float* pResultado)
{
	float resultado;
	int estado=1;

	if(operador2!=0)
	{
		resultado= (float)operador1/operador2;
		estado=0; //OK
		*pResultado=resultado;
	}
	return estado;
}
