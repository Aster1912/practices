//Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[100];
	int largo;
	
	cout<<"Escriba un acadena de caracteres: "; cin.getline(palabra, 100);
	
	largo = strlen(palabra);
	
	if(largo > 10){
		cout<<"La cadena es: "<<palabra<<endl;
	}else{
		cout<<"La cadena no supera los 10 caracteres"<<endl;
	}
	
	getch();
	return 0;
}
