/*Escribe la siguiente expresion matemática com expresión en C++
a + b
-----
c + d
*/

#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, resultado = 0;
	
	cout<<"Escriba un valor para a: "; cin>>a;
	cout<<"Escriba un valor para b: "; cin>>b;
	cout<<"Escriba un valor para c: "; cin>>c;
	cout<<"Escriba un valor para d: "; cin>>d;
	
	resultado = (a + b) / (c+ d);
	
	cout<<"\nEl resultado es: "<<resultado;
	
	return 0;
}
