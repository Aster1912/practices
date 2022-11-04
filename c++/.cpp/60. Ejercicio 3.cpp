//3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que iprima los datos del empleado con mayor y menor salario

#include<iostream>
#include<conio.h>

using namespace std;

struct Empleado{
	char nombre[20];
	float salario;
}emp[100];

int main(){
	int n_empleados, posM = 0, posm = 0;
	float mayor = 0, menor = 999999;
	
	cout<<"Digite el numero de empleados: "; cin>>n_empleados;
	
	for(int i = 0; i < n_empleados; i++){
		fflush(stdin);
		cout<<i+1<<". Digite su nombre: "; cin.getline(emp[i].nombre, 20);
		cout<<i+1<<". Digite su salario: "; cin>>emp[i].salario;
		if(emp[i].salario > mayor){
			mayor = emp[i].salario;
			posM = i;
		}
		if(emp[i].salario < menor){
			menor = emp[i].salario;
			posm = i;
		}
		cout<<"\n";
	}
	
	cout<<"\n:Datos del usuario con mayor salario:\n";
	cout<<"Nombre: "<<emp[posM].nombre;
	cout<<"\nSalario: "<<emp[posM].salario;
	
	cout<<"\n\n:Datos del usuario con menor salario:\n";
	cout<<"Nombre: "<<emp[posm].nombre;
	cout<<"\nSalario: "<<emp[posm].salario;
	
	getch();
	return 0;
}
