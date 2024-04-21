#include<iostream>

using namespace std;

int main(){
	
	
	
	int ano,chasi;
	char modelo[10],marca[10] ,color[10],mecanico_automatico[10] ;
	
	
	
	cout<<"Digite el modelo del vehiculo: ";cin>>modelo;
	cout<<"\nDigite la marca del vehiculo: ";cin>>marca;
	cout<<"\nDigite el color del vehiculo: ";cin>>color;	
	cout<<"\nIndique si el vehiculo es mecanico o automatico: ";cin>>mecanico_automatico;
	cout<<"\nDigite el ano de fabricacion: ";cin>>ano;
	cout<<"\nDigite el # de chasi: ";cin>>chasi;
	
	cout<<"\nEstos son los atributos o caracteristicas de un vehiculo";
	cout<<"\nEsta es el modelo del vehiculo: "<<modelo<<endl; 
	cout<<"Esta es la marca del vehiculo: "<<marca<<endl; 
	cout<<"Este es ek color del vehiculo: "<<color<<endl; 
	cout<<"Este vehiculo es de transmision: "<<mecanico_automatico<<endl; 
	cout<<"Este vehiculo es del año : "<<ano<<endl; 
	cout<<"Este es el # de chasi "<<chasi<<endl; 
	
	return 0 ;
	}
