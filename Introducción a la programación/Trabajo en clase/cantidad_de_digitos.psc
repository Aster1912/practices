//Algoritmo que cuando un numero entero (este numero no podrá ser menor e igual que 0) determine el número de cifras que tiene. Por ejemplo, si intoduce un 253 me devuelva un 3
Algoritmo cantidad_de_digitos
	Definir num Como Real;
	Escribir "Escriba un numero entero (No debe ser ni menor ni igual a 0)";
	Repetir
		Leer num;
		Si num <= 0 Entonces
			Escribir "Ese no es un numero entero o es menor o igual a 0, escriba un numero correcto:";
		FinSi
	Hasta Que num > 0
	Escribir "El numero tiene ", digitos(num), " digitos";
FinAlgoritmo

Funcion retorno = digitos(num)
	Definir retorno, d Como Real;
	d = 9;
	retorno = 0;
	Repetir
		num = num - d;
		d = d * 10;
		retorno = retorno + 1;
	Hasta Que num <= 0
FinFuncion