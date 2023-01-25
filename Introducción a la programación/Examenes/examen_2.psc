//Se requiere crear un algoritmo para calcular el promedio individual de n cantidad de alumnos. El algoritmo tiene que pedir al usuario 3 calificaciónes por alumno, mostrar en pantalla el promedio más alto, mostrar en pantalla el promdeio más bajo, crear una función que nos retorna el promedio general del grupo y mostrar en pantalla el promedio general del grupo
Algoritmo examen_2
	Definir alumnos, n, promedio, prom_mayor, prom_menor Como Real;
	Definir i, j Como Entero;
	prom_mayor = 0;
	prom_menor = 10;
	Escribir "Escriba cuantos alumnos tiene el grupo:";
	Leer n;
	Dimension alumnos[n, 3];
	Dimension promedio[n];
	Para i = 0 Hasta n - 1 Con Paso 1 Hacer
		Escribir "---Alumno ", i+1, "---";
		promedio[i] = 0;
		Para j = 0 Hasta 2 Con Paso 1 Hacer
			Escribir "Escriba la calificación ", j+1, ":";
			Repetir
				Leer alumnos[i, j];
				Si alumnos[i, j] < 0 o alumnos[i, j] > 10 Entonces
					Escribir "Esa calificación no es entre 0 y 10, escriba una calificación correcta:";
				FinSi
			Hasta Que alumnos[i, j] >= 0 y alumnos[i, j] <= 10;
			promedio[i] = promedio[i] + alumnos[i, j];
		FinPara
		promedio[i] = promedio[i] / 3;
		Si promedio[i] > prom_mayor Entonces
			prom_mayor = promedio[i];
		FinSi
		Si promedio[i] < prom_menor Entonces
			prom_menor = promedio[i];
		FinSi
	FinPara
	
	Escribir "";
	Escribir "---Resulatdos---";
	Escribir "El alumno con promedio más alto es: ", prom_mayor;
	Escribir "El alumno con el promedio más bajo es: ", prom_menor;
	Escribir "El promedio del grupo es: ", promedio_grupo(promedio, n);
FinAlgoritmo

Funcion retorno = promedio_grupo(promedio, n)
	Definir retorno Como Real;
	Definir i Como Entero;
	retorno = 0;
	Para i = 0 Hasta n - 1 Con Paso 1 Hacer
		retorno = retorno + promedio[i];
	FinPara
	retorno = retorno / n;
FinFuncion	