/*
 * Reto #3
 * �ES UN N�MERO PRIMO?
 * Fecha publicaci�n enunciado: 17/01/22
 * Fecha publicaci�n resoluci�n: 24/01/22
 * Dificultad: MEDIOS
 *
 * Enunciado: Escribe un programa que se encargue de comprobar si un n�mero es o no primo.
 * Hecho esto, imprime los n�meros primos entre 1 y 100.
 */

# include <stdio.h>
# include <stdlib.h>
# include <string>
# include <iostream>
using namespace std;
int main() {
	int i = 0; float nprimo[100] = { };

	for (i = 0; i <= 100; i++) {
		nprimo[i] = i;
		if (nprimo[i] % 1 == 0 || nprimo[i] % nprimo[i] == 0)
			printf("%i - %.0f", i, nprimo[i]);
	}
	return 0;
}