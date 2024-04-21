/*16- 17- Escriba un programa que lea n�meros por teclado hasta que se introduzca el cero. En ese momento deber� representar el n�mero de
introducciones efectuadas, y la mayor secuencia de n�meros consecutivos iguales, indicando cu�l fue el n�mero que se repiti� y cu�ntas veces seguidas apareci�.
Ejemplo: Si se introduce 8 8 8 4 5 6 6 6 7 7 7 7 2 0, el resultado a mostrar ser�. �El n�mero m�s repetido es el 7 y se ha escrito 4 veces�.

*/
	
#include <iostream>
using namespace std;

int main() {
    int num, prevNum, currentCount=0, maxCount=0;
    int maxRepeatedNumber=0;

    
   
    cout << "Ingrese numeros (0 para terminar):" << endl;
    cin >> prevNum;
    
    while (prevNum != 0) {
        cin >> num;

        if (num == prevNum) {
            currentCount++;
            if (currentCount > maxCount) {
                maxCount = currentCount;
                maxRepeatedNumber = num;
            }
        } else {
            currentCount = 1; // Reiniciar la cuenta si el n�mero cambia
        }

        prevNum = num;
    }

    cout << "Numero de introducciones efectuadas: " << endl;
    cout << "La mayor secuencia de numeros consecutivos iguales es el numero " << maxRepeatedNumber<<endl;
    cout << " y se ha repetido " << maxCount << " veces." << endl;

    return 0;
}

