/*18- Escriba un programa en C++ que solicite un número y calcule su factorial. El factorial de un número n (representado por n!) Es el  producto de todos los números naturales desde 1 hasta n.
n! = 1 * 2 * 3 * ... * (n - 1) * n
*/
	
#include<iostream>
#include<conio.h>
using namespace std;


int factorial (int);

int main(){
	int n;
	cout<<"Digite un numero: ";cin>>n;
	cout<<"Factorial  es: "<<factorial(n)<<endl;
	
	getch();
	return 0;
}
int factorial(int n){
	
	if(n==0){
		n = 1;
		
	}else{
		n= n * factorial(n-1);
	}
	return n;
}
