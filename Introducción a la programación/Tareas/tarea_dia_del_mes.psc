//Elegir un mes, pedirle al usuario un numero de día y el algoritmo tiene que decir que día es (lunes, martes, etc.)
Algoritmo tarea_dia_del_mes
	Definir dia Como Entero;
	Escribir "~Septiembre 2022~";
	Escribir "Escriba un numero de día de este mes:";
	Leer dia;
	Segun dia Hacer
		4, 11, 18, 25:
			Escribir "Ese día es domingo";
		5, 12, 19, 26:
			Escribir "Ese día es lunes";
		6, 13, 20, 27:
			Escribir "Ese día es martes";
		7, 14, 21, 28:
			Escribir "Ese día es miercoles";
		1, 8, 15, 22, 29:
			Escribir "Ese día es jueves";
		2, 9, 16, 23,30:
			Escribir "Ese día es viernes";
		3, 10, 17, 24:
			Escribir "Ese día es sabado";
		De Otro Modo:
			Escribir "Ese no es un dia de ese mes";
	Fin Segun
FinAlgoritmo
