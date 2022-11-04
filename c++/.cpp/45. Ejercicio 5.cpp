//Hacer un programa que determine si una palabra es polindroma

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[30], palindroma[30];
	
	cout<<"Escriba una palabra: "; cin.getline(palabra, 30);
	
	strcpy(palindroma, palabra);
	
	strrev(palindroma);
	
	if(strcmp(palindroma, palabra) == 0){
		cout<<"La palabra es palindroma"<<endl;
	}else{
		cout<<"La palabra no es palindroma"<<endl;
	}
	
	getch();
	return 0;
}
