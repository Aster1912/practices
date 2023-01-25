//El director de una escuela está organizando un viaje de estudios, y requiere determinar cuánto debe cobrar a cada alumno y cuanto debe pagar a la compañía de viajes por el servicio. La forma de cobrar es la siguiente: si son 100 alumnos o más, el costo por cada alumno es de $65.00, de 50 a 99 alumnos el costo es de $70.00, de 30 a 49 es de $95.00 y si son menos de 30 el costo de la renta del autobús es de $4000.00, sin importar el numero de alumnos. Realice un algoritmo que permita determinar el pago a la compañía de autobuses y de lo que debe pagar cada alúmno por el viaje, se deben calcular 3 viajes diferentes
Algoritmo examen_autobuses
	Definir i, alumnos Como Entero;
	Definir precio_alumno, total Como Real;
	Para i = 1 Hasta 3 Con Paso 1 Hacer
		Escribir "Escriba cuantos alumnos irán en el viaje ", i, ":";
		Leer alumnos;
		Si alumnos >= 100 Entonces
			total = alumnos * 65.00;
			Escribir "El total a pagar a la compañía es: $", total, ", a cada alumno se le deben cobrar $65.00";
		SiNo
			Si alumnos >= 50 Entonces
				total = alumnos * 70.00;
				Escribir "El total a pagar a la compañía es: $", total, ", a cada alumno se le deben cobrar $70.00";
			SiNo
				Si alumnos >= 30 Entonces
					total = alumnos * 95.00;
					Escribir "El total a pagar a la compañía es: $", total, ", a cada alumno se le deben cobrar $95.00";
				SiNo
					total = alumnos * 4000.00;
					Escribir "El total a pagar a la compañía es: $", total, ", a cada alumno se le deben cobrar $4000.00";
				FinSi
			FinSi
		FinSi
	FinPara
FinAlgoritmo