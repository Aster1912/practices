//Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, convertir su nombre a minusculas, caso contrario no convertirlo

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[25], b[] = "B";
	
	cout<<"Escriba su nombre (En mayuscula): "; cin.getline(nombre, 25);
	
	if(strcmp(nombre, b) > 0){
		cout<<nombre<<endl;
	}else{
		strlwr(nombre);
		cout<<nombre<<endl;
	}
	
	getch();
	return 0;
}
