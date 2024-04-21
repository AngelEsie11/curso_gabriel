//13 - Calcular el sueldo neto de una persona a partir del sueldo bruto.


#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	
	double sueldo_bruto,sueldo_neto=0,ARS=0,AFP=0,ISR=0,Infotep=0.01,cuota=0;
	double retenciones=0; 
	//Ingresamos el sueldo bruto
	cout<<"Ingresa el sueldo bruto pagos: ";cin>>sueldo_bruto;
	
	//
	for(AFP=0.01;AFP<1;AFP++){
			if(sueldo_bruto<20000){
			ARS=0.013*sueldo_bruto;
			cout<<"Su PAgo de ARS es de: "<<ARS<<endl;
		
			AFP*=sueldo_bruto;
			cout<<"Su pago de AFP es de: "<<AFP<<endl;
			ISR=0.0192;
			ISR*=sueldo_bruto;
			cout<<"Su PAgo de Impuestos Sobre la Renta es de: "<<ISR<<endl;
		
			Infotep*=sueldo_bruto;
		
			cout<<"Su PAgo de infotep es de: "<<Infotep<<endl;
		
			// Aqui sumamos todas las retenciones
			retenciones=ARS+AFP+ISR+Infotep;
			cout<<"EL total de retenciones es de: "<<retenciones<<endl;
	
			sueldo_neto=sueldo_bruto-retenciones;
			cout<<"Su sueldo neto es de: "<<sueldo_neto;
		
			}
	}
	
		
			if(sueldo_bruto < 50000){
			
			if(sueldo_bruto >= 20000 ){
			ARS=0.011*sueldo_bruto;
			cout<<"Su PAgo de ARS es de: "<<ARS<<endl;
			cuota= 2376.28;
			cout<<"Cuota a pagar"<<cuota;
			AFP=0.064*sueldo_bruto;
			cout<<"Su pago de AFP es de: "<<AFP<<endl;
		
			ISR*=sueldo_bruto;
			cout<<"Su PAgo de Impuestos Sobre la Renta es de: "<<ISR<<endl;
		
			Infotep*=sueldo_bruto;
			
			cout<<"Su PAgo de infotep es de: "<<Infotep<<endl;
		
			// Aqui sumamos todas las retenciones
			retenciones=ARS+AFP+ISR+Infotep+cuota;
			cout<<"EL total de retenciones es de:  "<<retenciones<<endl;
		
			sueldo_neto=sueldo_bruto-retenciones;
			cout<<"Su sueldo neto es de: "<<sueldo_neto;
		
			
			
			
			
			}
		
		

	
		
			}
	
	if(sueldo_bruto>=50000){
			ARS=0.01*sueldo_bruto;
		cout<<"Su PAgo de ARS es de: "<<ARS<<endl;
		
		AFP=0.008*sueldo_bruto;
		cout<<"Su pago de AFP es de: "<<AFP<<endl;
		
		ISR*=sueldo_bruto;
		cout<<"Su PAgo de Impuestos Sobre la Renta es de: "<<ISR<<endl;
		
		Infotep*=sueldo_bruto;
		
		cout<<"Su PAgo de infotep es de: "<<Infotep<<endl;
		
		// Aqui sumamos todas las retenciones
		retenciones=ARS+AFP+ISR+Infotep;
		cout<<"EL total de retenciones es de:  "<<retenciones<<endl;
		
		sueldo_neto=sueldo_bruto-retenciones;
		cout<<"Su sueldo neto es de: "<<sueldo_neto;
	}
		
		
		
	
	
	
	
	
	
	getch();
	return 0;
}
