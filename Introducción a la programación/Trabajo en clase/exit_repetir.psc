//Hacer un programa que se repita n veces y se termine cuando el usuario escriba "exit"
Algoritmo exit_repetir
	Definir nombres Como Caracter;
	Definir i Como Entero;
	i = 0;
	Repetir
		Escribir "Escriba un nombre:";
		Leer nombres;
		Si nombres = "exit" Entonces
			i = 1;
		FinSi
	Hasta Que i <> 0
FinAlgoritmo