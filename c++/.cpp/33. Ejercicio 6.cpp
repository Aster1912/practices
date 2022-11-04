//Escriba un programa que defina un vector de números y calcule si existe algún número en el vactor cuyo valor equivale a la suma del resto de numeros del vector

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, mayor, total = 0;
	
	cout<<"Escriba el numero de valores para el vector: "; cin>>n;
	
	int numeros[n];
	
	for(int i = 0; i < n; i++){
		cout<<i+1<<". Escriba un numero: "; cin>>numeros[i];
		
		total += numeros[i];
		
		if(numeros[i] > mayor){
			mayor = numeros[i];
		}
	}
	
	total -= mayor;
	
	if(mayor == total){
		cout<<"\nEl numero "<<mayor<<" es igual a la suma de los demas numeros del vector"<<endl;
	}else{
		cout<<"\nNo hay ningun numero igual a la suma de los demas numeros del vector"<<endl;
	}
	
	getch();
	return 0;
}
