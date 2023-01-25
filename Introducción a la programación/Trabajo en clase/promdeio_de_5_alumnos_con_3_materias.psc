//Un maestro quiere saber el promedio de 5 alumnos que llevan 3 materias cada uno, determinar el promedio del grupo
Algoritmo promdeio_de_5_alumnos_con_3_materias
	Definir prom_total, prom_alumno, alumno Como Real;
	Definir i, j Como Entero;
	prom_total = 0;
	prom_alumno = 0;
	Para i = 1 Hasta 5 Con paso 1 Hacer
		Escribir "---Alumno/a ", i, "---";
		Para j = 1 Hasta 3 Con Paso 1 Hacer
			Escribir "Escriba la calificación de la clase ", j, " del alumno/a:";
			Leer alumno;
			prom_alumno = prom_alumno + alumno;
		FinPara
		prom_alumno = prom_alumno / 3;
		prom_total = prom_total + prom_alumno;
		prom_alumno = 0;
	FinPara
	prom_total = prom_total  / 5;
	Escribir "El promedio del salon es de: ", prom_total;
FinAlgoritmo