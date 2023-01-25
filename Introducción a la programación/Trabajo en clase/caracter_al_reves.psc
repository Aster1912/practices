//Crear un vector de 5 elementos de cadenas de caracteres, iniciqlizar el vector con datos leidos por el teclado. Copiar los elementos del vector en otro vector pero en orden inverso y musestralo en pantalla
Algoritmo caracter_al_reves
	Definir vector1, vector2 Como Caracter;
	Definir i Como Entero;
	Dimension vector1[5], vector2[5];
	Para i = 0 Hasta 4 Con Paso 1 Hacer
		Escribir i+1, ". Digite un valor para [", i, "]:";
		Leer vector1[i];
		vector2[4-i] = vector1[i];
	FinPara
	
	Escribir "---Arreglo al reves---";
	Para i = 0 Hasta 4 Con Paso 1 Hacer
		Escribir "[", i, "]:", vector2[i];
	FinPara
FinAlgoritmo