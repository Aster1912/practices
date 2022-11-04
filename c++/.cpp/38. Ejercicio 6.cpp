//Realice un programa que calcule la suma de dos matrices cuadradas de 3x3

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros1[3][3], numeros2[3][3], suma = 0;
	
	cout<<"---Primera matriz---"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Escriba una matriz ["<<i<<"]["<<j<<"]: "; cin>>numeros1[i][j];
		}
	}
	
	cout<<"\n---Segunda matriz---"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Escriba una matriz ["<<i<<"]["<<j<<"]: "; cin>>numeros2[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			suma += (numeros1[i][j] + numeros2[i][j]);
		}
	}
	
	cout<<"\nLa suma total de las 2 matrices es: "<<suma<<endl;
			
	getch();
	return 0;
}
