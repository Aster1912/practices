//Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos: Nombre, edad, promedio. Pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno

#include<iostream>
#include<conio.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio;
	char band;
}alumno[3];

int main(){
	int mayor = 0;
	
	for(int i = 0; i < 3; i++){
		cout<<"---Alumno/a "<<i+1<<"---"<<endl;
		cout<<"Nombre: "; cin.getline(alumno[i].nombre, 20);
		cout<<"Edad: "; cin>>alumno[i].edad;
		cout<<"Promedio: "; cin>>alumno[i].promedio;
		alumno[i].band = 'F';
		fflush(stdin);
		cout<<endl;
		if(alumno[i].promedio > mayor){
			mayor = alumno[i].promedio;
		}
	}
	
	for(int i = 0; i < 3;  i++){
		if(alumno[i].promedio == mayor){
			alumno[i].band = 'V';
		}
	}
	
	cout<<"\n---Alumno(os) con mayor promedio---";
	for(int i = 0; i < 3; i++){
		if(alumno[i].band == 'V'){
			cout<<"\nNombre: "<<alumno[i].nombre<<endl;
			cout<<"Edad: "<<alumno[i].edad<<endl;
			cout<<"Promedio: "<<alumno[i].promedio<<endl;
		}
	}
	
	getch();
	return 0;
}
