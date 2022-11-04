/*En una clase de 5 alumnos se han realizado tres ex�menes y se requiere determinar el n�mero de:
a) Alumnos que aprobraron todos los ex�menes
b) Alumnos que aprobaron al menos un ex�men
c) Alumnos que aprobaron �nicamente el �ltimo ex�men
Realice un programa que permita la lectura de los datos y el c�lculo de las estad�sticas
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float exam_1, exam_2, exam_3, alumn_1, alumn_2, alumn_3, alumn_4, alumn_5, total = 0;
	
	for(int i = 1; i <= 5; i++){
		cout<<"---Alumno "<<i<<"---"<<endl;
		cout<<"Escriba la claificacion del examen 1: "; cin>>exam_1;
		if(exam_1 >= 6){
			total += 1;
		}
		cout<<"Escriba la claificacion del examen 2: "; cin>>exam_2;
		if(exam_2 >= 6){
			total += 1;
		}
		cout<<"Escriba la claificacion del examen 3: "; cin>>exam_3;
		if(exam_3 >= 6){
			total += 3;
		}
		
		switch(i){
			case 1: alumn_1 = total; break;
			case 2: alumn_2 = total; break;
			case 3: alumn_3 = total; break;
			case 4: alumn_4 = total; break;
			case 5: alumn_5 = total; break;
		}
		
		total = 0;
	}
	
	cout<<"\nAlumnos que aprobaron todos los examenes:"<<endl;
	if(alumn_1 == 5){cout<<"1 ";}
	if(alumn_2 == 5){cout<<"2 ";}
	if(alumn_3 == 5){cout<<"3 ";}
	if(alumn_4 == 5){cout<<"4 ";}
	if(alumn_5 == 5){cout<<"5 ";}
	
	cout<<"\nAlumnos que aprobaron al menos un examen:"<<endl;
	if((alumn_1 >= 1) && (alumn_1 < 5)){cout<<"1 ";}
	if((alumn_2 >= 1) && (alumn_2 < 5)){cout<<"2 ";}
	if((alumn_3 >= 1) && (alumn_3 < 5)){cout<<"3 ";}
	if((alumn_4 >= 1) && (alumn_4 < 5)){cout<<"4 ";}
	if((alumn_5 >= 1) && (alumn_5 < 5)){cout<<"5 ";}
	
	cout<<"\nAlumnos que aprobaron solo el ultimo examen:"<<endl;
	if(alumn_1 == 3){cout<<"1 ";}
	if(alumn_2 == 3){cout<<"2 ";}
	if(alumn_3 == 3){cout<<"3 ";}
	if(alumn_4 == 3){cout<<"4 ";}
	if(alumn_5 == 3){cout<<"5 ";}
	
	getch();
	return 0;
}
