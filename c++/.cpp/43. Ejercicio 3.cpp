//Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[50], palabra2[50];
	
	cout<<"Escriba una cadena de caracteres: "; cin.getline(palabra1, 50);
	cout<<"Escriba otra cadena de caracteres: "; cin.getline(palabra2, 50);
	
	if(strcmp(palabra1, palabra2) == 0){
		cout<<"Ambas cadenas son iguales"<<endl;
	}else{
		if(strcmp(palabra1,palabra2) > 0){
			cout<<palabra1<<" es mayor alfabeticamente"<<endl;
		}else{
			cout<<palabra2<<" es mayor alfabeticamente"<<endl;
		}
	}
	
	getch();
	return 0;
}
