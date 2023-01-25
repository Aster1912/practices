//Hacer un programa que se repita n veces y se termine cuando el usuario escriba "exit"
Algoritmo exit_para
	Definir nombres Como Caracter;
	Definir i Como Entero;
	Para i = 0 Hasta 1 Hacer
		Escribir "Escriba un nombre:";
		Leer nombres;
		Si nombres <> "exit" Entonces
			i = 0;
		FinSi
	FinPara
FinAlgoritmo