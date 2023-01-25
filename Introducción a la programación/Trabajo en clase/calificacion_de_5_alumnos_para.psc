//Hacer un programa que le pida a un maestro la calificación y el nombre de 5 alumnos, y sacar el promedio
Algoritmo calificacion_de_5_alumnos_para
	Definir cal, prom Como Real;
	Definir nombre Como Caracter;
	Definir i Como Entero;
	prom = 0;
	Para i = 1 Hasta 5 Con Paso 1 Hacer
		Escribir i, ". Escriba el nombre del alumno/a:";
		Leer nombre;
		Escribir "Escriba su calificacion:";
		Leer cal;
		prom = prom + cal;
	FinPara
	prom = prom / 5;
	Escribir "El promedio de los 5 alumnos es de: ", prom;
FinAlgoritmo