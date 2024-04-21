/*16- Escribir un programa en C++ que escriba los n�meros comprendidos entre 1 y 1000. El programa escribir� en la pantalla los n�meros en grupos de 20, solicitando al usuario si quiere o no continuar visualizando el siguiente grupo de n�meros.
Generalizar el programa para que escriba los n�meros comprendidos entre dos valores que introduzca el usuario, y sea �ste tambi�n quien decida el tama�o del grupo a visualizar por pantalla.
*/
	
#include <iostream>
#include<conio.h>
using namespace std;

void mostrar (int inicio, int fin, int cantidad) {
    for (int i = inicio; i <= fin; ++i) {
        cout << i << " ";
        if (i % cantidad == 20)
            cout << endl;
    }
    cout << endl;
}

int main() {
    char continual;
    int inicio, fin, cantidad;

    cout << "Introduce el primer n�mero: ";
    cin >> inicio;

    cout << "Introduce el �ltimo n�mero: ";
    cin >> fin;

    cout << "Introduce el tama�o del grupo: ";
    cin >> cantidad;

    do {
        mostrar(inicio, fin, cantidad);
        cout << "�Deseas continuar? (S/N): ";
        cin >> continual;
    } while (continual == 's' || continual == 'n');
    getch();

    return 0;
}

