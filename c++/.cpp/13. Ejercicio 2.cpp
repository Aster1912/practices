//Escriba un programa que lea tres números y determine cuál de ellos es el mayor

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout<<"Escriba un numero: "; cin>>n1;
	cout<<"Escriba otro numero: "; cin>>n2;
	cout<<"Escriba un ultimo numero: "; cin>>n3;
	
	if(n1 == n2){
		if(n1 == n3){
			cout<<"\nLos 3 numeros son iguales"<<endl;
		}else if(n1 > n3){
			cout<<"\nEl numero mayor es: "<<n1<<" y se repite 2 veces"<<endl;
		}else{
			cout<<"\nEl numero mayor es: "<<n3<<endl;
		}
	}else if(n1 > n2){
		if(n1 == n3){
			cout<<"\nEl numero mayor es: "<<n1<<" y se repite 2 veces"<<endl;
		}else if(n1 > n3){
			cout<<"\nEl numero mayor es: "<<n1<<endl;
		}else{
			cout<<"\nEl numero mayor es: "<<n3<<endl;
		}
	}else if(n2 == n3){
		cout<<"\nEl numero mayor es: "<<n2<<" y se repite 2 veces"<<endl;
	}else if(n2 > n3){
		cout<<"\nEl numero mayor es: "<<n2<<endl;
	}else{
		cout<<"\nEl numero mayor es: "<<n3<<endl;
	}
	
	return 0;
}
