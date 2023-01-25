Algoritmo conocer_segun
	Definir l1, l2, l3, l4, letra Como Caracter;
	l1 = "q";
	l2 = "f";
	l3 = "a";
	l4 = "z";
	Escribir "Teclea una letra: ";
	Leer letra;
	Segun letra Hacer
		l1,l4:
			Escribir "Letra es igual a ", l1, " o ", l4;
		l2:
			Escribir "Letra es igual a ", l2;
		l3:
			Escribir "Letra es igual a ", l3;
		De Otro Modo:
			Escribir "Opcion no valida";
	Fin Segun
FinAlgoritmo
