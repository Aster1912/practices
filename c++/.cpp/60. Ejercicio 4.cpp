//Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país, numero_medallas y que devuelva los datos (Nombre, país) de atleta que ha ganado el mayor numero de medallas

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

struct Atleta{
	string nombre;
	string pais;
	int numero_medallas;
}atleta[25];

int main(){
	int n, mayor = 0, pos = 0;
	
	cout<<"Escriba cuantos atletas hay: "; cin>>n;
	fflush(stdin);
	
	for(int i = 0; i < n; i++){
		cout<<"\n~~~Atleta "<<i+1<<"~~~\n";
		fflush(stdin);
		cout<<"Escriba el nombre: "; getline(cin, atleta[i].nombre);
		cout<<"Escriba el pais: "; getline(cin, atleta[i].pais);
		cout<<"Escriba el numero de medallas: "; cin>>atleta[i].numero_medallas;
		if(atleta[i].numero_medallas > mayor){
			mayor = atleta[i].numero_medallas;
			pos = i;
		}
	}
	
	cout<<"\n~~~Atleta con mas medallas~~~\n";
	cout<<"Nombre: "<<atleta[pos].nombre;
	cout<<"\nPais: "<<atleta[pos].pais;
	
	getch();
	return 0;
}
