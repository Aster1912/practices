/*Realice un programa que calcule la descompocisi�n en factores primos de un n�mero entero

Por ejemplo: 20 = 2*2*5
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite el numero a descomponer: "; cin>>numero;
	
	for(int i = 2; i <= numero; i++){
		while((numero % i) == 0){
			cout<<i<<" * ";
			numero /= i;
		}
	}
	
	cout<<" 1"<<endl;
	
	getch();
	return 0;
}
