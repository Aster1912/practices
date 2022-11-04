//Comprobar si un número digitado por el usuario es positivo o negativo

#include<iostream>

using namespace std;

int main(){
	int num;
	
	cout<<"Escriba un numero: "; cin>>num;
	
	if(num == 0){
		cout<<"El numero es cero"<<endl;
	}else if(num > 0){
		cout<<"El numero es positivo"<<endl;
	}else{
		cout<<"El numero es negativo"<<endl;
	}
	
	return 0;
}
