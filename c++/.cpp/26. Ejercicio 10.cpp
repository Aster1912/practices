//Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factorales)

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, factorial = 0, factorial_n = 1;
	
	cout<<"Escriba la cantidad de factoriales: "; cin>>n;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			factorial_n *= j;
		}
		factorial += factorial_n;
		factorial_n = 1;
	}
	
	cout<<"\nLa suma de factoriales es: "<<factorial<<endl;
	
	getch();
	return 0;
}
