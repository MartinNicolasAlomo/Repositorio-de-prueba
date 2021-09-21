#include <stdio.h>
#include <stdlib.h>
#include "BibliotecasGIT.h"

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos) {
	int retorno = -1; //numeros negativos indican error.
	int bufferInt;

	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) {
		do {
			printf("%s\n", mensaje);
			scanf("%d", &bufferInt);

			if (bufferInt >= minimo && bufferInt <= maximo) {
				*pResultado = bufferInt;
				retorno = 0; //cero o numeros positivos indican exito.
				break;
			} else {
				printf("%s\n", mensajeError);
				reintentos--;
			}

		} while (reintentos >= 0);
	}
	return retorno;
}


int utn_getCaracter(char *pResultado, char *mensaje, char *mensajeError, char minimo, char maximo, int reintentos){
	int retorno = -1; //numeros negativos indican error.
	char bufferChar;

	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) {
		do {
			printf("%s\n", mensaje);
			fflush(stdin);
			scanf("%c", &bufferChar);

			if (bufferChar >= minimo && bufferChar <= maximo) {
				*pResultado = bufferChar;
				retorno = 0; //cero o numeros positivos indican exito.
				break;
			} else {
				printf("%s\n", mensajeError);
				reintentos--;
			}

		} while (reintentos >= 0);
	}
	return retorno;
}
