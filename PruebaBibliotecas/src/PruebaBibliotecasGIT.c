/*
 ============================================================================
 Name        : PruebaBibliotecasGIT.c
 Author      : Martin Nicolas Alomo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BibliotecasGIT.h"

int main(void) {
	setbuf(stdout, NULL);
	int edad;
	int peso;
	char letra;
	//int respuesta;

	if (utn_getCaracter(&letra, "letra?: ", "Error! ingrese una letra de peso entre A y J: ", 'A', 'J', 3) == 0) {
		printf("La letra es %c\n", letra);
	}
	else {
		printf("ERROR\n");
	}

	/*respuesta = utn_getNumero(&edad, "edad?: ", "Error! ingrese un rango de edad entre 0 y 120: ", 0, 120, 2);
	if (respuesta == 0) {
		printf("La edad es %d\n", edad);
	}
	else {
		printf("ERROR\n");
	}

	respuesta = utn_getNumero(&peso, "peso?: ", "Error! ingrese un rango de peso entre 0 y 200: ", 0, 200, 3);
	if (respuesta == 0) {
		printf("El peso es %d\n", peso);
	}
	else {
		printf("ERROR\n");
	}*/

	return EXIT_SUCCESS;
}
