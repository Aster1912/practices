//Hacer un programa que se repita n veces y se termine cuando el usuario escriba "exit"
Algoritmo exit_mientras
	Definir nombres Como Caracter;
	Definir i Como Entero;
	i = 0;
	Mientras i = 0 Hacer
		Escribir "Escriba un nombre:";
		Leer nombres;
		Si nombres = "exit" Entonces
			i = 1;
		FinSi
	FinMientras
FinAlgoritmo