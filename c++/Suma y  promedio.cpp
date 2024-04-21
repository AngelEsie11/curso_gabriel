/*5- Crear un programa que reciba un arreglo de números y sumarlos todos
 y sacar el promedio */

#include<iostream>

using namespace std;

int main(){
	int numeros[]{1,2,3,4,5};
	int promedio = 0;
	int suma=0;
	int dividir=5;
	
	for (int i=0;i<5;i++){
		
		suma += numeros[i];
		cout<<"la suma de los arreglos es: "<<suma<<endl;
	
		
		promedio= suma/dividir;
		
		
	}	
	
	cout<<"el promedio de los arreglos es: "<<promedio<<endl; 
	
	return 0;
}
