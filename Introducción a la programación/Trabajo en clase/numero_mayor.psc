//Pedir al usuario 2 numeros y determinar cual de los 2 es el mayor
Algoritmo sin_titulo
	Definir num1, num2 Como Entero;
	Escribir "Escriba un numero entero:";
	Leer num1;
	Escribir "Escriba otro numero entero:";
	Leer num2;
	Si num1 > num2 Entonces
		Escribir "El numero ", num1, " es mayor";
	Sino 
		Si num1 == num2 Entonces
			Escribir "Los numeros son iguales";
		Sino 
			Escribir "El numero ", num2, " es mayor";
		FinSi
	FinSi
FinAlgoritmo