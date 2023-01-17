 /* Fecha publicaci�n enunciado : 27 / 12 / 21
* Fecha publicaci�n resoluci�n : 03 / 01 / 22
* Dificultad : F�CIL
* Enunciado : Escribe un programa que muestre por consola(con un print) los n�meros de 1 a 100 (ambos incluidos y con un salto de l�nea entre cada impresi�n), sustituyendo los siguientes :
*-M�ltiplos de 3 por la palabra "fizz".
* -M�ltiplos de 5 por la palabra "buzz".
* -M�ltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
*/

# include <stdio.h>
# include <stdlib.h>
# include <string>
# include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%i", i);

		printf("\n");
	}


}