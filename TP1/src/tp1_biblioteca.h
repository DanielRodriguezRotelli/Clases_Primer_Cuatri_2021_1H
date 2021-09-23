/*
 * tp1_biblioteca.h
 *
 *  Created on: 18 sep. 2021
 *      Author: Aye
 */

#ifndef TP1_BIBLIOTECA_H_
#define TP1_BIBLIOTECA_H_

void menuDeOpciones(int* pRespuesta);
int pedirFloatAlUsuario(float* pResultado,int* pSalidaScanf, float min, float max, int reintentos, char* variableTexto, char* textoError);
int pedirIntAlUsuario(int* pResultado,int* pSalidaScanf, int min, int max, int reintentos, char* variableTexto, char* textoError);
void sumar(float operador1, float operador2, float* pSuma);
void restar(float operador1, float operador2, float* pResta);
void multiplicar(float operador1, float operador2, float* pMultiplicacion);
int dividir(float operador1, float operador2, float* pDivision);
int factorial(int operador, int* pResultFactorial);


#endif /* TP1_BIBLIOTECA_H_ */
