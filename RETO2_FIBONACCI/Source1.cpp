/*
 * Reto #3
 * ¿ES UN NÚMERO PRIMO?
 * Fecha publicación enunciado: 17/01/22
 * Fecha publicación resolución: 24/01/22
 * Dificultad: MEDIOS
 *
 * Enunciado: Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
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