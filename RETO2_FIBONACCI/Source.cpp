/*
Reto #2
 * LA SUCESIÓN DE FIBONACCI
 * Fecha publicación enunciado: 10/01/22
 * Fecha publicación resolución: 17/01/22
 * Dificultad: DIFÍCIL
 *
 * Enunciado: Escribe un programa que imprima los 50 primeros números de la sucesión de Fibonacci empezando en 0.
 * La serie Fibonacci se compone por una sucesión de números en la que el siguiente siempre es la suma de los dos anteriores.
 * 0, 1, 1, 2, 3, 5, 8, 13...
 */
# include <stdio.h>
# include <stdlib.h>
# include <string>
# include <iostream>
using namespace std;
int main() {
	int i = 0; float fibonacci[51] = { 0 };

	for (i = 0; i <= 50; i++) {
		fibonacci[i] = i;
	}
	
	for (i = 0; i <= 50; i++) {
		if (i > 1) {
			fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]);
			printf("%i - %.0f\n", i, fibonacci[i]);
		}
		else if (i <= 1)
			printf("%i - %.0f\n", i, fibonacci[i]);
	}
	

}