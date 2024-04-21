/*Ejercicio 15: Desarrollar una funcion que determine si una matriz es simetrica o no

una matrizz es simestrica A=A^t

- la matriz debe ser cuadrada.
- Aij =Aij

|2 5 9|         |2 5 9|
|5 8 -1|   ->   |5 8 -1| 
|9 -1 10|       |9 -1 10| */	


#include<iostream>
#include<conio.h>

using namespace std;
void pedirdatos();
void comprobarsimetria(int m[100][100],int,int);
int m[10][100],nfilas,ncol;
int main(){
	pedirdatos();
	 comprobarsimetria( m, nfilas, ncol);


	getch();
	return 0;
}  

void pedirdatos(){
	cout<<"Digite el numero de filas ";
	cin>>nfilas;
	cout<<"Digite el numero de columna ";
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}
void comprobarsimetria(int m[100][100],int nfilas,int ncol){
	int cont =0;
	
	if(nfilas==ncol){
		for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(m[i][j]==m[j][i])
			cont++;
			}	
	}
	}
	if(cont==nfilas*ncol){
		cout<<"\nLa matriz es simetrica";
	}
	else{
		cout<<"La matriz no es simetrica";
	}
}
