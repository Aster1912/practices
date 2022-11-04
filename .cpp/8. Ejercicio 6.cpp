//Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos

#include<iostream>

using namespace std;

int main(){
	float alumno_1, alumno_2, alumno_3, alumno_4, prom = 0;
	
	cout<<"Escriba la calificacion del alumno 1: "; cin>>alumno_1;
	cout<<"Escriba la calificacion del alumno 2: "; cin>>alumno_2;
	cout<<"Escriba la calificacion del alumno 3: "; cin>>alumno_3;
	cout<<"Escriba la calificacion del alumno 4: "; cin>>alumno_4;
	
	prom = (alumno_1 + alumno_2 + alumno_3 + alumno_4) / 4;
	
	cout<<"\nEl promedio de los 4 alumnos es de: "<<prom;
	
	return 0;
}
