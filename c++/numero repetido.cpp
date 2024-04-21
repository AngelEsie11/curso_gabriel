/*16- 17- Escriba un programa que lea números por teclado hasta que se introduzca el cero. En ese momento deberá representar el número de
introducciones efectuadas, y la mayor secuencia de números consecutivos iguales, indicando cuál fue el número que se repitió y cuántas veces seguidas apareció.
Ejemplo: Si se introduce 8 8 8 4 5 6 6 6 7 7 7 7 2 0, el resultado a mostrar será. ‘El número más repetido es el 7 y se ha escrito 4 veces’.

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
            currentCount = 1; // Reiniciar la cuenta si el número cambia
        }

        prevNum = num;
    }

    cout << "Numero de introducciones efectuadas: " << endl;
    cout << "La mayor secuencia de numeros consecutivos iguales es el numero " << maxRepeatedNumber<<endl;
    cout << " y se ha repetido " << maxCount << " veces." << endl;

    return 0;
}

