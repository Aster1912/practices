//Escribe un programa que defina un vector de n�meros y muestre en la salida est�ndar el vector en orden inverso, del �ltimo al primer elemento

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n;
	
	cout<<"Escriba cuantos elementos tendra el vector: "; cin>>n;
	
	int numeros[n];
	
	for(int i = 0; i < n; i++){
		cout<<"Escriba un numero: "; cin>>numeros[i];
	}
	
	cout<<"\n---El vector impreso al reves---"<<endl;
	for(int i = n-1; i >= 0; i--){
		cout<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
