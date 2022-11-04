//Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que: (La chicharronera)


#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a, b, c, x1 = 0, x2 = 0;
	
	cout<<"Tomando en cuenta que ax^2+bx+c=0: "<<endl;
	cout<<"Escriba el valor de a: "; cin>>a;
	cout<<"Escriba el valor de b: "; cin>>b;
	cout<<"Escriba el valor de c: "; cin>>c;
	
	x1 = (-(b) + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
	x2 = (-(b) - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
	
	cout<<"\nEl resultado de x1 es: "<<x1<<endl;
	cout<<"El resultado de x2 es: "<<x2<<endl;
	
	return 0;
}
