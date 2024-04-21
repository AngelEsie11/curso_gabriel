/*Crear un programa que calcule el binomio de Newton 
	hint: buscatela como puedas*/
	
#include<iostream>
#include<cmath>
#include<iomanip>


using namespace std;

int main(){
	int a,b,x,y,i,j,k,n;
	long double c,f1=1,f2=1,f3=1,s=0;
	cout<<"ingrese el valor de a: ";cin>>a; 
	cout<<"ingrese el valor de b: ";cin>>b; 
	cout<<"ingrese el valor de x: ";cin>>x; 
	cout<<"ingrese el valor de y: ";cin>>y; 
	cout<<"ingrese la potencia: ";cin>>n;
	for(i=0;i<=n;i++){
		if(i==0){
			f1=1;
		}
		else{
			f1*=i;
		}
		for(j=0;j<=n;j++){
			if(j==0){
			f2=1;
		}
		else{
			f2*=j;
		}
		}
		for(k=0;k<=n-i;k++){
			if(k==0){
			f3=1;
		}
		else{
			f3*=k;
		}
		}
		c=f2/(f1*f3);
		s+=c*pow(a*x,n-i)*pow(b*y,i);
		
	} 
	 
cout<<"El valor del binomio es: "<<fixed<<setprecision(0)<<s<<endl;
	
	
	
	
	
	
	

	return 0;
}

