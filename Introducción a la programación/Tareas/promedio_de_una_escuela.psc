//Se requiere calcular el promedio de una escuela la cual consta de 3 grupos, cada grupo tiene 3 alumnos y cada alumno lleva 4 materias, obtener el promedio general de la escuela
Algoritmo promedio_de_una_escuela
	Definir alumn, prom_alumn, prom_grupo, prom_total Como Real;
	alumn = 0;
	prom_total = 0;
	Definir i, j, k Como Entero;
	Para i = 1 Hasta 3 Con Paso 1 Hacer
		prom_grupo = 0;
		Escribir "-----Grupo ", i,"-----";
		Para j = 1 Hasta 3 Con Paso 1 Hacer
			prom_alumn = 0;
			Escribir "---Alumno ", j, "---";
			Para k = 1 Hasta 4 Con Paso 1 Hacer
				Escribir "Escriba la calificación de la clase ", k, " del alumno/a:";
				Leer alumn;
				prom_alumn = prom_alumn + alumn;
			FinPara
			prom_alumn = prom_alumn / 4;
			prom_grupo = prom_grupo + prom_alumn;
		FinPara
		prom_grupo = prom_grupo / 3;
		prom_total = prom_total + prom_grupo;
	FinPara
	prom_total = prom_total  / 3;
	Escribir "El promedio del salon es de: ", prom_total;
FinAlgoritmo
