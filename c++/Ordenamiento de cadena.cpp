// 11 - Recibir una cadena por teclado y organizar en orden alfab�tico las letras introducidas

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	
 std::string cadena;
    std::cout << "Introduce una cadena de texto: ";
    std::getline(std::cin, cadena);

    // Ordenar la cadena alfab�ticamente
    std::sort(cadena.begin(), cadena.end());

    //  Imprimir la cadena ordenada
    std::cout << "La cadena ordenada alfab�ticamente es: " << cadena << std::endl;
	
	



		
	
	getch();
	return 0;
}  
