/*
 ============================================================================
 Name        : SABADO1EJERCICIO3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 1-3:
Realizar el algoritmo que permita ingresar los datos de los alumnos de una división de
la UTN FRA, los datos solicitados son:
Legajo
Tipo cursada(L: libre; - P: presencial – R: remota)
Cantidad de materias( mas de cero y menos de 8)
Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
Nota promedio (entre 0 y 10)
Edad (validar)
Se debe informar de existir, o informar que no existe , en el caso que corresponda.
a) El Legajo del mejor promedio femenino.
b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
c) El promedio de nota por sexo.
d) La edad y legajo del que cursa más materias. (Sin importar su género)
*/

int main(void)
{
	setbuf(stdout,NULL);

	int legajo;
	char tipoCursada;
	int cantidadMaterias;
	char sexo;
	int notaPromedio;
	int edad;
	char respuesta='s';

	int mejorPromedioFemenino;
	int primerPromedioFemenino=0;
	int legajoMejorPromedioFemenino;

	int legajoJovenMasculinoLibre;
	int primerJovenMasculino=0;
	int edadJovenMasculinoLibre;

	int acumNotaFemenino=0;
	int contFemenino=0;
	int acumNotaMasculino=0;
	int contMasculino=0;
	int acumNotaNoBinario=0;
	int contNoBinario=0;
	float promedioNotaFemenino;
	float promedioNotaMasculino;
	float promedioNotaNoBinario;

	int primerlegajo=0;
	int mayorCantidadMaterias;
	int edadMasMaterias;
	int legajoMasMaterias;



	do
	{
		printf("Ingrese el Nº de legajo:");
		fflush(stdin);
		scanf("%d",&legajo);

		printf("\nIngrese tipo de cursada: L-P-R.");
		fflush(stdin);
		scanf("%c",&tipoCursada);

		printf("\nIngrese la cantidad de Materias: 1 a 8.");
		fflush(stdin);
		scanf("%d",&cantidadMaterias);

		printf("\nIngrese el sexo: F-M-O.");
		fflush(stdin);
		scanf("%c",&sexo);

		printf("\nIngrese la nota promedio: 0 a 10.");
		fflush(stdin);
		scanf("%d",&notaPromedio);

		printf("\nIngrese la edad:");
		fflush(stdin);
		scanf("%d",&edad);

		switch(sexo)
		{
			case'F':
			if(primerPromedioFemenino==0 || mejorPromedioFemenino<notaPromedio)
			{
				mejorPromedioFemenino=notaPromedio;
				legajoMejorPromedioFemenino=legajo;
				primerPromedioFemenino=1;
			}
			acumNotaFemenino+=notaPromedio;
			contFemenino++;

			break;

			case'M':
			if(tipoCursada=='L')
			{
				if(primerJovenMasculino==0 || edadJovenMasculinoLibre>edad)
				{
					edadJovenMasculinoLibre=edad;
					legajoJovenMasculinoLibre=legajo;
					primerJovenMasculino=1;
				}
			}
			acumNotaMasculino+=notaPromedio;
			contMasculino++;

			break;

			case'O':
			acumNotaNoBinario+=notaPromedio;
			contNoBinario++;
			break;

		}//fin del switch

		if(primerlegajo==0 || mayorCantidadMaterias<cantidadMaterias)
		{
			mayorCantidadMaterias=cantidadMaterias;
			edadMasMaterias=edad;
			legajoMasMaterias=legajo;
			primerlegajo=1;
		}


		printf("\nDesea continuar? s-n");
		fflush(stdin);
		scanf("%c",&respuesta);
	}while(respuesta=='s');


	promedioNotaFemenino = (float)acumNotaFemenino / contFemenino;
	promedioNotaMasculino = (float)acumNotaMasculino / contMasculino;
	promedioNotaNoBinario = (float)acumNotaNoBinario / contNoBinario;

	if(contFemenino==0)
	{
		printf("a) No se han ingresado legajos de sexo Femenino");
		promedioNotaFemenino=0;
	}
		else
		{
			printf("a) El legajo del mejor promedio femenino es: Nº %d",legajoMejorPromedioFemenino);
		}

	if(contMasculino==0)
	{
		printf("\nb) No se han ingresado legajos de sexo Masculino");
		promedioNotaMasculino=0;
	}
		else
		{
			printf("\nb) El promedio de nota del sexo masculino es: %f",promedioNotaMasculino);
		}

	if(contNoBinario==0)
		{
			promedioNotaNoBinario=0;
		}

	printf("\nc) El promedio de Nota Femenino es: %f, el promedio de Nota Masculino es: %f y el promedio de Nota No Binario es: %f",promedioNotaFemenino,promedioNotaMasculino,promedioNotaNoBinario);
	printf("\nd) La edad del que cursa más materias: %d, el legajo del que cursa más materias: %d", edadMasMaterias,legajoMasMaterias);



	return EXIT_SUCCESS;
}

