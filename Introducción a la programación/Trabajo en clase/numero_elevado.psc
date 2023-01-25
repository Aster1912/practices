//Escribe una funcion en pseudocodigo que devuelva el resultado de un numero elevado a un exponente dado
Algoritmo numero_elevado
	Definir num, expo Como Real;
	Escribir "Escriba un numero:";
	Leer num;
	Escribir "Escriba el exponente:";
	Leer expo;
	Escribir "El resultado es: ", potencia(num, expo);
FinAlgoritmo

Funcion retorno = potencia(n, p)
	Definir retorno Como Real;
	retorno = n ^ p;
FinFuncion