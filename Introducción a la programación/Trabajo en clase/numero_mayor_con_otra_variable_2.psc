// Determinar de entre 3 numeros enteros cual es el mayor
Algoritmo numero_mayor_con_otra_variable_2
	Definir n1, n2, n3, x, i Como Entero;
	i = 1;
	Escribir "Escriba un numero entero:";
	Leer n1;
	Escribir "Escriba otro numero entero:";
	Leer n2;
	Escribir "Escriba un ultimo numero entero:";
	Leer n3;
	Si n1 > n2 Entonces
		x = n1;
	SiNo
		Si n1 < n2 Entonces
			x = n2;
		Sino 
			x = n1;
			i = i + 1;
		FinSi
	FinSi
	Si n3 > x Entonces
		x = n3;
	SiNo
		Si n3 == x Entonces
			i = i + 1;
		FinSi
	FinSi
	Si i = 1 Entonces
		Escribir "El numero mayor es: ", x;
	SiNo
		Si i = 2 Entonces
			Escribir "El numero mayor es ", x, " y hay 2 iguales";
		SiNo
			Escribir "Los 3 son el mismo numero";
		FinSi
	FinSi
FinAlgoritmo