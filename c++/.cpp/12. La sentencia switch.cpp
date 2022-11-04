/*La sentencia switch

	switch(expresión){
	case litearl1:
		conjunto de instrucciónes1;
		break;
	case litearl2:
		conjunto de instrucciónes2;
		break;
	case litearln:
		conjunto de instrucciónesn;
		break;
	default:
		conjunto de instrucciónes por defecto;
		break;
*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un nnumero entre 1 y 5: "; cin>>numero;
	
	switch(numero){
		case 1: cout<<"Es el numero 1"; break;
		case 2: cout<<"Es el numero 2"; break;
		case 3: cout<<"Es el numero 3"; break;
		case 4: cout<<"Es el numero 4"; break;
		case 5: cout<<"Es el numero 5"; break;
		default: cout<<"No esta en el rango de 1-5"; break;
	}
	
	return 0;
}
