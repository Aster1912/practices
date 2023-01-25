//Se requiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno (comprendidas entre 0 y 10). A continuación, debe mostrar todas las notas, la nota media, la nota más alta que haya sacado y la menor
Algoritmo calificacion_promedio_mayor_menor
	Definir notas, nota_ma, nota_me, promedio Como Real;
	Definir i Como Entero; 
	Dimension notas[5];
	nota_ma = 0;
	nota_me = 10;
	promedio = 0;
	Para i = 0 Hasta 4 Con Paso 1 Hacer
		Repetir
			Escribir i+1, ". Escriba la calificación del alumno (entre 0 y 10):";
			Leer notas[i];
			Si notas[i] < 0 o notas[i] > 10 Entonces
				Escribir "La calificación no entra en los parametros";
			FinSi
		Hasta Que notas[i] >= 0 y notas[i] <= 10;
		Si notas[i] > nota_ma Entonces
			nota_ma = notas[i];
		FinSi
		Si notas[i] < nota_me Entonces
			nota_me = notas[i];
		FinSi
		promedio = promedio + notas[i];
	FinPara
	Escribir "---Resultados---";
	Para i = 0 Hasta 4 Con Paso 1 Hacer
		Escribir "La calificación ", i+1, " fue de: ", notas[i];
	FinPara
	Escribir "El promedio fue de: ", promedio/5;
	Escribir "La calificación más alta fue de: ", nota_ma;
	Escribir "La calificación más baja fue de: ", nota_me;
FinAlgoritmo