/*7. La calificación final de un estudiante es la media ponderada de tres notas:
-La nota de práctica que cuenta un 30% del total
-La nota teórica que cuenta un 60%
-La nota de participación que cuenta el 10% restante
Escriba un programa que lea de la entrada estandar las tres notas de un alumno y escriba en la salida estandar su nota final
*/

#include<iostream>

using namespace std;

int main(){
	float practica, teorica, participacion, nota_final = 0;
	
	cout<<"Digite la nota de practica: "; cin>>practica;
	cout<<"Digite la nota teorica: "; cin>>teorica;
	cout<<"Digite la nota de participacion: "; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"\nLa nota final es: "<<nota_final;
	
	return 0;
}
