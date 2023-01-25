//Un grupo de 10 alumnos, se requiere el promedio
Algoritmo promedio_de_alumnos
	Definir cal, cal_t, prom Como Real;
	Definir i Como Entero;
	i = 1;
	cal_t = 0;
	Mientras i <= 10 Hacer
		Escribir "Escriba la calificacion del alumno/a ", i, ":";
		Leer cal;
		cal_t = cal_t + cal;
		i = i + 1;
	FinMientras
	prom = cal_t / 10;
	Escribir "El promedio de los alumnos/a es: ", prom;
FinAlgoritmo
