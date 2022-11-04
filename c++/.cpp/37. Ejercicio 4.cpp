//Hacer una matriz preguntando al usario el numero de filas y columnas, llenarla de numeros aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	srand(time(NULL));
	int filas, columnas;
	
	cout<<"Escriba cuantas filas tendra la matriz: "; cin>>filas;
	cout<<"Escriba cuantas columnas tendra la matriz: "; cin>>columnas;
	
	int matriz[filas][columnas], matriz2[filas][columnas];
	
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			matriz[i][j] = 1 + rand()%9;
		}
	}
	
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			matriz2[i][j] = matriz[i][j];
		}
	}
	
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout<<matriz2[i][j];
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
