/*15- Imprimir y guardar en matriz 8 nombres aleatorios y que no se repitan en las siguientes dos corridas. Los nombres y los apellidos deben estar en dos arreglos diferentes.
*/
	
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

const string nombres[] = {"ELias ", "Sailin", "Angel", "Jose ", "Leandro", "Eduardo", "Sixta", "Roberto"};
const string apellidos[] = {"Sierra", "Gonzalez", "Encarnacion", "Almonte", "Padilla", "Utate", "Castillo", "Adames"};


int generarIndiceNoRepetido(int numerosUsados[], int tamano) {
    int indice;
    do {
        indice = rand() % tamano;
    } while (numerosUsados[indice] == 1);
    numerosUsados[indice] = 1;
    return indice;
}

int main() {
    srand(time(0)); 

    string matrizNombres[8];
    int numerosUsadosNombres[8] = {0}; // Para asegurar que un nombre no se repita
    int numerosUsadosApellidos[8] = {0}; // Para asegurar que un apellido no se repita

    // Generar nombres aleatorios
    for (int i = 0; i < 8; ++i) {
        int indiceNombre = generarIndiceNoRepetido(numerosUsadosNombres, 8);
        int indiceApellido = generarIndiceNoRepetido(numerosUsadosApellidos, 8);
        matrizNombres[i] = nombres[indiceNombre] + " " + apellidos[indiceApellido];
    }

    // Imprimir y guardar en matriz
    for (int i = 0; i < 8; ++i) {
        cout << matrizNombres[i] << endl;
    }

    return 0;
}	

