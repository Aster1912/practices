/*15. Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100. El programa debe generar un número aleatorio en ese mismo rango [1-100], e indicarle al usuario si el número que digitó es menor o mayot al numero aleatorio, así hasta que lo adivine, y por último mostrarle el número de intentos que le llevó

variable = limite_inferior + rand() % (limite_superior - limite inferior);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, dato, contador = 0;
	
	srand(time(NULL)); //Número aleatorio;
	dato = 1 + rand()%(100);
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero > dato){
			cout<<"\nDigite un numero menor\n";
		}
		if(numero < dato){
			cout<<"\nDigite un numero mayor\n";
		}
		contador++;
	}while(numero != dato);
	
	cout<<"\nFelicidades, adivinaste el numero\n";
	cout<<"Numero de intentos: "<<contador<<endl;
	
	system("pause");
	return 0;
}
