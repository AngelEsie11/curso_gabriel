/*9- Crear un programa que verifique si un  número es primo o no
	hint: buscatela como puedas*/
	
#include<iostream>
#include<conio.h>

using namespace std;



int main(){
	int num;
	cin>>num;
	bool primo=true;
	for(int i=2;i<num;i++){
		if(num % i==0) primo =false;
	}
	
	if(primo == true)cout<<"EL numero es primo ";
	else cout<< "EL numero no es primo";






	getch();
	return 0;
}	

