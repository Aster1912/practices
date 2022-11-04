//Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int n, total = 0;
	
	cout<<"Escriba el numero de cantidades a sumar y restar: "; cin>>n;
	
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			total -= i;
		}else{
			total += i;
		}
	}
	
	cout<<"\nLa operacion total es: "<<total<<endl;
	
	getch();
	return 0;
}
