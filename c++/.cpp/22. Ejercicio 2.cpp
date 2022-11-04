//Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la slaida estandar el número de valores mayores que cero introducidos

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero, i;
	
	i = 0;
	
	do{
		cout<<"Escriba un numero: "; cin>>numero;
		if(numero != 0){
			i++;
		}
	}while(numero != 0);
	
	cout<<"La cantidad de numeros mayores a 0 ingresados es: "<<i<<endl;
	
	getch();
	return 0;
}
