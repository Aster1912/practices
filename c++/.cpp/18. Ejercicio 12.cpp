/*Hacer un men� que considere las siguientes opciones
Caso 1: Cubo de un n�mero
Caso 2: N�mero par o impar
Caso 3: Salir
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int opc, numero;
	float resultado;
	
	cout<<"/tCalculadora del tianguis"<<endl;
	cout<<"1. Cubo de un numero: "<<endl;
	cout<<"2. Numero par o impar: "<<endl;
	cout<<"3. Salir: "<<endl;
	cout<<"Opcion: "; cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Escriba un numero: "; cin>>numero;
			resultado = pow(numero, 3);
			cout<<"El cubo del numero es: "<<resultado; break;
		case 2:
			cout<<"Escriba un numero: "; cin>>numero;
			if((numero % 2) == 0){
				cout<<"El numero es par";
			}else{
				cout<<"El numero es impar";
			}
		case 3: break;
	}
	
	return 0;
}
