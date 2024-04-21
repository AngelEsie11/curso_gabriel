/* 3- Crear un programa que reciba las notas de un estudiante(naturales, sociales, matemáticas y lenguaje) y saque el promedio.
	hint: n+n+n+n/4*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,n4, total =0, promedio=0;
	
	cout<<"digite la nota de naturales : "; cin>>n1;
	cout<<"digite la nota de sociales : "; cin>>n2;
	cout<<"digite la nota de matematica:  "; cin>>n3;
	cout<<"digite la nota de lengua espanola:  "; cin>>n4;
	
	total=n1+n2+n3+n4;
	promedio=total/4;
	
	cout<<"\nsuma total de las notas del estudiante: "<<total<<endl;

	cout<<"promedio del estudiante: "<<promedio<<endl;
	return 0;
}

