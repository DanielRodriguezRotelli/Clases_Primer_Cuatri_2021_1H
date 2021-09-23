/*
 * pedirFloat.h
 *
 *  Created on: 12 sep. 2021
 *      Author: Aye
 */

#ifndef UTN_BIBLIOTECA_H_
#define UTN_BIBLIOTECA_H_

int pedirFloatAlUsuario(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError);
int pedirIntAlUsuario(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);
int pedirCharAlUsuario(char* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);
void imprimirArray(int arrayLista[], int len);
float promedioArrayInt(int arrayInt[], int len);
void inicializarArray(int pArray[], int len, int valorInicial);




#endif /* UTN_BIBLIOTECA_H_ */
