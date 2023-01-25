//Hacer un programa que le pida a un maestro la calificación y el nombre de 5 alumnos, y sacar el promedio
Algoritmo calificacion_de_5_alumnos_mientras
	Definir cal, prom Como Real;
	Definir nombre Como Caracter;
	Definir i Como Entero;
	i = 1;
	prom = 0;
	Mientras i <= 5 Hacer
		Escribir i, ". Escriba el nombre del alumno/a:";
		Leer nombre;
		Escribir "Escriba su calificacion:";
		Leer cal;
		prom = prom + cal;
		i = i + 1;
	FinMientras
	prom = prom / 5;
	Escribir "El promedio de los alumos es de: ", prom;
FinAlgoritmo