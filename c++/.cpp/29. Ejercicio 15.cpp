/*15. Realice un programa que solicite al usuario que piense un n�mero entero entre el 1 y el 100. El programa debe generar un n�mero aleatorio en ese mismo rango [1-100], e indicarle al usuario si el n�mero que digit� es menor o mayot al numero aleatorio, as� hasta que lo adivine, y por �ltimo mostrarle el n�mero de intentos que le llev�

variable = limite_inferior + rand() % (limite_superior - limite inferior);
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int numero, dato, contador = 0;
	
	srand(time(NULL)); //N�mero aleatorio;
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
