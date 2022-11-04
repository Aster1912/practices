//Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle el IVA

#include<iostream>

using namespace std;

int main(){
	float precio;
	
	cout<<"Escriba el precio del producto: "; cin>>precio;
	
	precio = precio - (precio * 0.16);
	
	cout<<"El precio con IVA es: "<<precio;
	
	return 0;
}
