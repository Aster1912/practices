//Realiza un programa que defina un vector llamado "vecor_numeros" de 10 enteros, a continuación lo inicialize con valores aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector junto con su cuadro y su cubo.
Algoritmo numero_aleatorio_al_cuadrado_y_cubo
	Definir vector_numeros, i Como Entero;
	Dimension vector_numeros[10];
	Para i = 0 Hasta 9 Con Paso 1 Hacer
		Repetir
			vector_numeros[i] = azar(11);
		Hasta Que vector_numeros[i] <> 0;
	FinPara
	
	Escribir "---Cuadrados del arreglo---";
	Para i = 0 Hasta 9 Con Paso 1 Hacer
		Escribir i, ". ", vector_numeros[i], "^2 = ", (vector_numeros[i]^2);
	FinPara
	
	Escribir "";
	Escribir "---Cubos del arreglo---";
	Para i = 0 Hasta 9 Con Paso 1 Hacer
		Escribir i, ". ", vector_numeros[i], "^3 = ", (vector_numeros[i]^3);
	FinPara
FinAlgoritmo
