//Programa que declare un vector de diez elementos enteros y pide números para rellenarlo hasta que se llane el vector o se introduzaca un número negativo. Entonces se debe imprimir el vector (solo los elementos introducídos)
Algoritmo numeros_que_terminan_en_negativo
	Definir vector, i, d Como Entero;
	Dimension vector[10];
	d = -1;
	Para i = 0 Hasta 9 Con Paso 1 Hacer
		Escribir "Escriba un valor para [", i, "], sin que sea negativo:";
		Leer vector[i];
		d = d + 1;
		Si vector[i] < 0 Entonces
			d = d - 1;
			i = 9;
		FinSi
	FinPara
	Escribir "---Numeros intoducidos---";
	Para i = 0 Hasta d Con Paso 1 Hacer
		Escribir "[", i, "]: ", vector[i];
	FinPara
FinAlgoritmo