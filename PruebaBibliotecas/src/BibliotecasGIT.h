#ifndef BIBLIOTECASGIT_H_
#define BIBLIOTECASGIT_H_

#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos);
int utn_getFlotante(float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char *pResultado, char *mensaje, char *mensajeError, char minimo, char maximo, int reintentos);


#endif /* BIBLIOTECASGIT_H_ */
