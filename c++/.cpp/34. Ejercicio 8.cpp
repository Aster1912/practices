//Hacer un programa que lea 5 números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5], multiplicados[5];
	
	for(int i = 0; i < 5; i++){
		cout<<i+1<<". Escriba un numero: "; cin>>numeros[i];
		multiplicados[i] = numeros[i] * 2;
	}
	
	cout<<"\nLos numeros multiplicados por 2:"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<multiplicados[i]<<endl;
	}
	
	getch();
	return 0;
}
