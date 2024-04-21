//Crear un programa que reciba un arreglo de números y sacar el menor y el mayor

#include<iostream>

using namespace std;

int main(){
	
		int numeros [100],n,mayor=0,menor=0;
	
	cout<<"Digite el numero elemento de arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i];
		
		if(numeros[i] > mayor){
			
			mayor = numeros [i];
			
		}
		if(numeros[i] < menor){
			
			menor = numeros [i];
		}
	}
	
	cout<<"el mayor elemento del vector es: "<<mayor<<endl;
		cout<<"el menor elemento del vector es: "<<menor<<endl;
	
	
	return 0;
}
