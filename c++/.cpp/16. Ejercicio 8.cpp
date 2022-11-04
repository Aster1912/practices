//Escribe un programa que lea de la entrada estámdar trés números. Despues debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad

#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3, n4;
	
	cout<<"Escriba 3 numeros: "; cin>>n1>>n2>>n3;
	cout<<"Escriba un cuarto numero: "; cin>>n4;
	
	if(n4 == n1){
		cout<<"El cuarto numero es igual al primero";
	}else if(n4 == n2){
		cout<<"El cuarto numero es igual al segundo";
	}else if(n4 == n3){
		cout<<"El cuarto numero es igual al tercero";
	}else{
		cout<<"El cuarto numero no es igual a ningun otro";
	}
	
	return 0;
}
