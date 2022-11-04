/*1. Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos: Nombre, edad, sexo, club. Pedir los datos al usuario para un corredor, y asígnarle una categoria de competición:
- Juvenil <= 18 años
- Senior <= 40 años
- Veterano > 40
Posterirmente imprimir todos los datos del corredor, incluida su categoria de competición
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c1;

int main(){
	char categoria[20];
	
	cout<<"Nombre: "; cin.getline(c1.nombre, 20);
	cout<<"Edad: "; cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: "; cin.getline(c1.sexo, 10);
	cout<<"Club: "; cin.getline(c1.club, 20);
	
	if(c1.edad <= 18){
		strcpy(categoria, "Juvenil");
	}else if(c1.edad <= 40){
		strcpy(categoria, "Senior");
	}else{
		strcpy(categoria, "Veterano");
	}
	
	cout<<"\n\nDatos del corredor:"<<endl;
	cout<<"Nombre: "<<c1.nombre<<endl;
	cout<<"Edad: "<<c1.edad<<endl;
	cout<<"Sexo: "<<c1.sexo<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Categoria: "<<categoria<<endl;
	
	getch();
	return 0;
}
