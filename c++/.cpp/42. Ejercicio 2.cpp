//Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contanido hacia otro arreglo de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[50], palabra2[50];
	
	cout<<"Escriba una cadena de caracteres: "; cin.getline(palabra1, 50);
	
	strcpy(palabra2, palabra1);
	
	cout<<"Su palabra es: "<<palabra2<<endl;
	
	getch();
	return 0;
}
