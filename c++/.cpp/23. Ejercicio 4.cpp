//Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float temperatura, media = 0, mayor = 0, menor = 100;
	
	for(int i = 1; i <= 6; i++){
		cout<<i<<". Escriba la temperatura: "; cin>>temperatura;
		media += temperatura;
		if(temperatura > mayor){
			mayor = temperatura;
		}
		if(temperatura < menor){
			menor = temperatura;
		}
	}
	
	media /= 6;
	
	cout<<"\nLa media de temperatura del dia es: "<<media<<endl;
	cout<<"La temperatura mayor es: "<<mayor<<endl;
	cout<<"La temperatura menor es: "<<menor<<endl;
	
	getch();
	return 0;
}
