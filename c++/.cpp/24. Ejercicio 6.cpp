//Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x, y, resultado;
	
	cout<<"Escriba un numero: "; cin>>x;
	cout<<"Escriba su potencia: "; cin>> y;
	
	resultado = x;
	
	for(int i = 1; i < y; i++){
		resultado *= x;
	}
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
