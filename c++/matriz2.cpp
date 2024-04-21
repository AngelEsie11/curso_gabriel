/*10- Escriba un programa en C++ que permita realizar lo siguiente (usando matrices):
	a) Almacene números aleatorios (menores o iguales a 10) en una matriz de 5 * 6.
	b) Recorra la matriz: mostrando sus elementos                                   
	c) Imprima la suma de los números almacenados en la matriz.
	d) Imprima la suma de los números pares almacenados en la matriz
	e) Imprima la suma de los números impares almacenados en la matriz
	f) Imprima la suma de cada columnas
	g) Imprima la suma de cada fila
	h) Imprima la suma de los elementos de la diagonal principal*/

#include <iostream>
#include<conio.h>
#include<cstdlib>
#include<time.h>

using namespace std;

int main(){
		srand(time(NULL));
		int matriz[5][6],filas,columnas;
		
		int suma=0,pares=0,impares=0;
	 
	cout<<"digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	


for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columna; ++j) {
            matriz[i][j] = rand() % 11;  // Números aleatorios entre 0 y 10
            suma += matriz[i][j];
            if (matriz[i][j] % 2 == 0) {
                Pares += matriz[i][j];
            }
            else {
                Impares += matriz[i][j];
            }
        }
    }
	
	getch();
	return 0;
}  
