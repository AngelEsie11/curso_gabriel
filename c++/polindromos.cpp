/*7- Crear un programa que detecte palíndromos
	hint: == */
	
	
#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	char cad[10];
	char cad2[10];
	
	
	cout<<"Digite una palabra o numero";cin>>cad;
	
		strcpy(cad2,cad);
	strrev(cad2);
		if(strcmp(cad,cad2)==0){
		cout<<cad2<<" Esta palabra es polindroma";
		}
	
	else{
		cout<<cad<<" Esta palabra no es polindroma";
	}
	
	
	
	
	getch();
	return 0;
}  

