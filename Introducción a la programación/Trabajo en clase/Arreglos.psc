Algoritmo Arreglos
	Definir arr, contador Como Entero;
	Dimension arr[4]; 
	
	contador = 0;
	Mientras contador < 4 Hacer
		arr[contador] = contador * 5;
		contador = contador + 1;
	FinMientras
	
	contador = 0;
	Mientras contador < 4 Hacer
		Escribir "Arreglo [", contador,"]: ", arr[contador];
		contador = contador + 1;
	FinMientras
FinAlgoritmo