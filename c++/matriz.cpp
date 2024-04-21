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
		
		int suma=0,pares=0,impares=0,suma_filas=0,suma_columnas=0,diagonal=0,retornar;
	 
	cout<<"digite el numero de filas: ";
	cin>>filas;
	cout<<"Digite el numero de columnas: ";
	cin>>columnas;
	
	cout<<"Estos son los elemtos de la matriz "<<endl;
	//mostramnos la matriz
	for(int i=0;i<filas;i++){
		fflush(stdin);
		for(int j=0;j<columnas;j++){
			fflush(stdin);
			 matriz[i][j] = rand() % 10;
		
			cout<<matriz[i][j]<<"     ";
		
			
		}
		cout<<"\n";
		
	
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			
				suma+=matriz[i][j];
		
		}
	
		
			
	
	}
		cout<<"\nla suma almacenada de la matriz es: "<<suma<<endl;
		cout<<endl;
	
	
	
	for(int i=1;i<filas;i++){
			for(int j=1;j<columnas;j++){
				
				if(matriz[i][j]%2==0){
					pares +=matriz[i][j];
					
				}
				else{
					impares+=matriz[i][j];
				}
			
		
			}
			
	}
		cout<<"la suma de los numeros pares almacenados en la matriz es: "<<pares<<endl;
		cout<<endl;
		cout<<"la suma de los numeros impare almacenados en la matriz es: "<<impares<<endl;
	cout<<endl;
		
	//Aqui sumamos la columnas	
	for(int i=0;i<columnas; i++){
		
		suma_columnas =0;
		for(int j=0; j<filas;j++ ){
			suma_columnas+= matriz[j][i];
			
			
		}
		
		// Aqui imprimimos el resultado de las columnas
		cout<<"\n La suma de columna "<<i<<" es: "<<suma_columnas;
	}
	cout<<endl;
		//Aqui sumamos la filas
	for(int i=0;i<filas; i++){
		
		suma_filas =0;
		for(int j=0; j<filas;j++ ){
			suma_filas+= matriz[i][j];
			
			
		}
		// Aqui imprimimos el resultado de las filas
		cout<<"\n La suma de filas "<<i<<" es: "<<suma_filas;
	}
	cout<<endl;
	
	for(int i=0;i<filas; i++){
		
		suma_filas =0;
		for(int j=0; j<columnas;j++ ){
			if(i==j){
				diagonal+=matriz[i][j];
		
			}
			
			
		}
	
	
	}
	//Imprime el resultado de las diagonal
	cout<<"\n La suma de la diagonal principal es: "<<diagonal;
		
	
	getch();
	return 0;
}  
