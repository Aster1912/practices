//3. CEscriba un programa que lea de la entrada estandar un vector de n�meros y muestre en la salida est�ndar los n�meros del vector con sus indices indicados

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], n;
	
	cout<<"Digite el numero de elementos que va a tener el arreglo: "; cin>>n;
	
	for(int i = 0; i < n; i++){
		cout<<"Digite un numero: "; cin>>numeros[i]; //Guardando todos los elementos del vector
	}
	
	//Ahora, vamos a mostrar los elementos con sus indices asociados
	for(int i = 0; i < 5; i++){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
