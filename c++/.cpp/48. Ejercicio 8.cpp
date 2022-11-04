//Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real, convertirlos a sus respectivos valores y por último sumarlos

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){
	char num1[10], num2[10];
	int num1i;
	float suma, num2f;
	
	cout<<"Escriba un acadena de caracteres de numeros: "; cin.getline(num1, 10);
	cout<<"Escriba otra cadena de caracteres de numeros: "; cin.getline(num2, 10);
	
	num1i = atoi(num1);
	num2f = atof(num2);
	suma = num1i + num2f;
	
	cout<<"\nLa suma de ambas cadenas es: "<<suma<<endl;
	
	getch();
	return 0;
}
