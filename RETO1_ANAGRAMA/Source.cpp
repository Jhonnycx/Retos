/*
* Reto #1
 * ¿ES UN ANAGRAMA?
 * Fecha publicación enunciado: 03/01/22
 * Fecha publicación resolución: 10/01/22
 * Dificultad: MEDIA
 *
 * Enunciado: Escribe una función que reciba dos palabras (String) y retorne verdadero o falso (Boolean) según sean o no anagramas.
 * Un Anagrama consiste en formar una palabra reordenando TODAS las letras de otra palabra inicial.
 * NO hace falta comprobar que ambas palabras existan.
 * Dos palabras exactamente iguales no son anagrama.
 */
# include <stdio.h>
# include <stdlib.h>
# include <string>
# include <iostream>
using namespace std;
int main() {
	int fo = -1;
	int cont = 0;
	string p1 = " ", p2 = " ";
	int i = 0;

	cout << "Palabra 1:";
	cin >> p1;
	cout << "Palabra 2:";
	cin >> p2;

	if (p1.length() == p2.length()) {
		for (i = 0; i < int(p2.length()); i++) {
			if (int(p1.find(p2.at(i), 0)) > -1 && int(p2.find(p1.at(i), 0)) > -1) {
				cont++;
			}
		}
	}
	if (cont == p1.length() && cont == p2.length()) {
		cout << "Es un Anagrama" << endl;
	}
	else if (cont < p1.length() && cont < p2.length()) {
		cout << "No es un Anagrama" << endl;
	}
	else if (p1 == p2 || p1.length() != p2.length()) {
		cout << "No es un Anagrama";
	}

}