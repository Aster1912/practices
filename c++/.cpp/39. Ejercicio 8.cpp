//Realice un programa que calcule el producto de dos matrices cuadradas de 3x3

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz1[3][3], matriz2[3][3], mat1 = 0, mat2 = 0, producto;
	
	cout<<"---Primera matriz---"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Escriba un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz1[i][j];
		}
	}
	
	cout<<"\n---Segunda matriz---"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Escriba un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz2[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			mat1 += matriz1[i][j];
			mat2 += matriz2[i][j];
		}
	}
	
	producto = mat1 * mat2;
	
	cout<<"\nEl producto de las 2 matrices es: "<<producto<<endl;
	
	getch();
	return 0;
}
