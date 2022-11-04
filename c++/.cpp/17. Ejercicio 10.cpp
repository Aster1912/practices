//Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes al que corresponde

#include<iostream>

using namespace std;

int main(){
	int mes;
	
	cout<<"Escriba el numero del mes: "; cin>>mes;
	
	switch(mes){
		case 1: cout<<"El mes es enero"; break;
		case 2: cout<<"El mes es febrero, mes del amor"; break;
		case 3: cout<<"El mes es marzo"; break;
		case 4: cout<<"El mes es abril, dia del niño/muerte de hitler"; break;
		case 5: cout<<"El mes es mayo, aniversario <3"; break;
		case 6: cout<<"El mes es junio, mes gay"; break;
		case 7: cout<<"El mes es julio"; break;
		case 8: cout<<"El mes es agosto"; break;
		case 9: cout<<"El mes es septiembre, mes patrio"; break;
		case 10: cout<<"El mes es octubre, mes spooky"; break;
		case 11: cout<<"El mes es noviemre"; break;
		case 12: cout<<"El mes es diciembre, christmas"; break;
	}
	
	return 0;
}
