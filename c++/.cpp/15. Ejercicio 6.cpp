//Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el caractér es una vocal minúscula, es una vocal mayúscula o no es una vocal

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Escriba una letra: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"La letra es una vocal minuscula"; break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"La letra es una vocal mayuscula"; break;
		default: cout<<"La letra no es una vocal"; break;
	}
	
	return 0;
}
