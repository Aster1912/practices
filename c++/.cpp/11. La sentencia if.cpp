/*La sentencia if

	if(condición){
		Instrucciónes 1;
	}
	else{
		Instrucciónes 2;
	}
*/

#include<iostream>

using namespace std;

int main(){
	int numero, dato = 5;
	
	cout<<"Digite un numero: "; cin>>numero;
	
	if(numero <= dato){
		cout<<"El numero es menor a 5";
	}else{
		cout<<"El numero es mayor 5";
	}
	
	return 0;
}
