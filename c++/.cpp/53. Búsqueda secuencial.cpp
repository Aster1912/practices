//Búsqueda secuancial

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char a[] = {'e', 'i', 'o', 'a', 'u'}, dato;
	int i;
	char band = 'F';
	
	dato = 'p';
	
	//Búsqueda secuancial
	i = 0;
	while((band == 'F') && (i < 5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo";
	}else if (band = 'V'){
		cout<<"El numero a sido encontrado en las posicion: "<<i-1;
	}
	
	getch();
	return 0;
}
