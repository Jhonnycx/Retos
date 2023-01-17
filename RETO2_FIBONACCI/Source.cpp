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
	int i = 0, j = 0; int nprimos[101] = { 0 }, nnprimos[101] = { 0 };
	int cont = 0;
	for (i = 1; i <= 100; i++) {
		nprimos[i] = i;
		nnprimos[i] = i;
	}

	for (i = 1; i <= 100; i++) {
			for (j = 1; j <= int(nprimos[i]); j++) {
				if (nprimos[i] % nnprimos[j] == 0) {
					cont++;
					//printf("%i / %i\n", nprimos[i], nnprimos[j]);
					//printf("contador: %i\n",cont);
					//system("pause");
				}

			}
		
		
		
			if (cont == 2) {
				printf("%i\n", nprimos[i]);
				
			}
			cont = 0;
	}
	system("pause");
	return 0;
}