//Escribe un programa que defina un vector de n�meros y calcule la multiplicaci�n acumulada de sus elementos

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {1, 2, 3, 4, 5};
	int mult = 1;
	
	for(int i = 0; i < 5; i++){
		mult *= numeros[i];
	}
	
	cout<<"La multiplicaci�n acumulada del vector es: "<<mult<<endl;
	
	getch();
	return 0;
}
