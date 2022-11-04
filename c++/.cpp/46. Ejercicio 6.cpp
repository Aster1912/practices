//Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decidir si son iguales o no

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[30], palabra2[30];
	
	cout<<"Escriba una cadena de caracteres: "; cin.getline(palabra1, 30);
	cout<<"Escriba otra cadena de caracteres: "; cin.getline(palabra2, 30);
	
	strupr(palabra1);
	strupr(palabra2);
	
	if(strcmp(palabra1, palabra2) == 0){
		cout<<"Las 2 cadenas son iguales: "<<endl;
	}else{
		cout<<"Las cadenas son diferentes"<<endl;
	}
	
	getch();
	return 0;
}
