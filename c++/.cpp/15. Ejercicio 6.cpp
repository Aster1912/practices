//Escriba un programa que lea de la entrada est�ndar un car�cter e indique en la salida est�ndar si el caract�r es una vocal min�scula, es una vocal may�scula o no es una vocal

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
