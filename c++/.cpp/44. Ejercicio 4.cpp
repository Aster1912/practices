//Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle al usuario su nombre, por último añadir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola que tal (NombreDelUsuario)"

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char saludo [35] = "Hola que tal ", nombre [20];
	
	cout<<saludo<<endl<<"Escriba su nombre: "; cin.getline(nombre, 20);
	
	strcat(saludo, nombre);
	
	cout<<endl<<saludo<<endl;
	
	getch();
	return 0;
}
