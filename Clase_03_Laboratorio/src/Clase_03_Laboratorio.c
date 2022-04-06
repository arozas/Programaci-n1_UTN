/*
 ============================================================================
 Name        : Clase_03_Laboratorio.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Entrada.h"

int main(void)
{
	int 	numeroOficial;
	float	numeroOficialFloat;
	int 	retornoFuncion;

	retornoFuncion = getInt("\n Ingrese un numero: ", 3, 0, 10,"Error, te equivocaste, reingrese el numero:", &numeroOficial);
	if(retornoFuncion==0)
	{
		printf("\n El numero es: %d", numeroOficial);
	}
	else
	{
		printf("\n Hubo un error");
	}

	retornoFuncion = getFloat("\n\n Ingrese un numero: ", 3, 0, 10,"Error, te equivocaste, reingrese el numero:", &numeroOficialFloat);
	if(retornoFuncion==0)
	{
		printf("\n El numero es: %f", numeroOficialFloat);
	}
	else
	{
		printf("\n Hubo un error");
	}

return EXIT_SUCCESS;
}