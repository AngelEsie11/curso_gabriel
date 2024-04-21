/*14- Una escuela tiene 2 grupos, un grupo tiene 3 alumnos y cada alumno cursa 4
 materias.
Realice un programa que solicite todas las calificaciones y calcule e imprima
 los promedios de cada alumno, de cada grupo y el promedio general de la escuela*/

#include<iostream>
#include<conio.h>
using namespace std;

struct escuela{
	int LE;
	int mat;
	int nat;
	int soc;
	int promedio;
}grupo1,grupo2;

int main(){
	

	int i,promge=0;
	cout<<"Este es el grupo 1\n";
	for(i=0;i<3;i++){
		fflush(stdin);
		cout<<"Estudiante "<<i+1<<" DIgite la nota de LEngua Española: ";
		cin>>grupo1.LE;
		cout<<"Estudiante "<<i+1<<" DIgite la nota de Matematicas: ";
		cin>>grupo1.mat;
		cout<<"Estudiante "<<i+1<<" DIgite la nota de Ciencias Naturales: ";
		cin>>grupo1.nat;
		cout<<"Estudiante "<<i+1<<" DIgite la nota de Ciencias Sociales: ";
		cin>>grupo1.soc;
		cout<<"\n";
		cout<<"lengua Española "<<grupo1.LE<<endl;
	cout<<"Matematica "<<grupo1.mat<<endl;
	cout<<"Ciencias Naturales "<<grupo1.nat<<endl;
	cout<<"Sociales "<<grupo1.soc<<endl;
	cout<<"\n";
	 grupo1.promedio=(grupo1.LE+grupo1.mat+grupo1.nat+grupo1.soc)/4;
	 
	 cout<<"EL promedio deL alumno "<< i+1<<" es: "<<grupo1.promedio;
	cout<<"\n";
	}
	cout<<"\nEste es el Grupo 2\n";
	for(i=0;i<3;i++){
		fflush(stdin);
		cout<<"Estudiante "<<i+1<<" DIgite la nota de LEngua Española: ";
		cin>>grupo2.LE;
		cout<<"Estudiante "<<i+1<<" DIgite la nota de Matematicas: ";
		cin>>grupo2.mat;
		cout<<"Estudiante "<<i+1<<" DIgite la nota de Ciencias Naturales: ";
		cin>>grupo2.nat;
		cout<<"Estudiante "<<i+1<<" DIgite la nota de Ciencias Sociales: ";
		cin>>grupo2.soc;
		cout<<"\n";
		cout<<"lengua Española "<<grupo2.LE<<endl;
	cout<<"Matematica "<<grupo2.mat<<endl;
	cout<<"Ciencias Naturales "<<grupo2.nat<<endl;
	cout<<"Sociales "<<grupo2.soc<<endl;
	cout<<"\n";
	 grupo2.promedio=(grupo2.LE+grupo2.mat+grupo2.nat+grupo2.soc)/4;
	 
	 cout<<"EL promedio deL alumno "<< i+1<<" es: "<<grupo2.promedio;
	cout<<"\n"<<endl;
	}
	promge=(grupo1.promedio+grupo2.promedio)/2;
	cout<<"EL promedio general de la escuela es: "<<promge;
	
	
	getch();
	return 0;
}


