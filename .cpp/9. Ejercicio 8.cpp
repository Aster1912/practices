//Escriba un programa que lea de la entrada estandar los dos catetos de un triangulo rectangulo y escriba en la salida estandar su hipotenusa

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float cateto_o, cateto_a, hipotenusa = 0;
	
	cout<<"Escriba la medida del cateto opuesto: "; cin>>cateto_o;
	cout<<"Escriba la medida del cateto adyacente: "; cin>>cateto_a;
	
	hipotenusa = sqrt((cateto_o * cateto_o) + (cateto_a * cateto_a));
	
	cout<<"\nLa hipotenusa del trinagulo es de: "<<hipotenusa;
	
	return 0;
}
