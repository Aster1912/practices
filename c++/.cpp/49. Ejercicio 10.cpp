//Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro cadena de caracteres. y por ultimo modificar su mensaje poniendo a partir de la posición 10 "Buena broma"

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char cad[10], jk[] = "(Buena broma)", mensaje[22];
	
	cout<<"Escriba una cadena de caracteres: "; cin.getline(cad, 11);
	
	strcpy(mensaje, cad);
	strcat(mensaje, jk);
	
	cout<<mensaje<<endl;
	
	getch();
	return 0;
}
