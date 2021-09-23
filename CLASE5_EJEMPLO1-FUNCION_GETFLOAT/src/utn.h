/*
 * pedirFloat.h
 *
 *  Created on: 12 sep. 2021
 *      Author: Aye
 */

#ifndef UTN_H_
#define UTN_H_

int pedirFloatAlUsuario(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError);
int pedirIntAlUsuario(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);
int pedirCharAlUsuario(char* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError);





#endif /* UTN_H_ */
