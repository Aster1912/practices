//Pedir al usuario 5 numeros y determinar si cada numero es multiplo de 3
Algoritmo cinco_numeros_multiplos_de_3
	Definir num, i Como Entero;
	i = 1;
	Mientras i <= 5 Hacer
		Escribir i, ". Escriba un numero entero:";
		Leer num;
		Si (num % 3) == 0 Entonces
			Escribir "El numero es multiplo de 3";
			Esperar 2 Segundos;
			Limpiar Pantalla;
		SiNo
			Escribir "El numero no es multiplo de 3";
			Esperar 2 Segundos;
			Limpiar Pantalla;
		FinSi
		i = i + 1;
	FinMientras
FinAlgoritmo