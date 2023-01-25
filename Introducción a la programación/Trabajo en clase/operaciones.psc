//una función para sumar, restar, multiplicar y dividir 2 numeros;
Algoritmo operaciones
	Definir n1, n2 Como Real;
	Definir p Como Entero;
	Escribir "Escriba un numero:";
	Leer n1;
	Escribir "Escriba otro numero:";
	Leer n2;
	Escribir "Decida que hacer con los numeros:";
	Escribir "1. Suma";
	Escribir "2. Resta";
	Escribir "3. Multiplicación";
	Escribir "4. División";
	Repetir
		Leer p;
		Segun p Hacer
			1:
				Escribir "La suma es: ", suma(n1, n2);
			2:
				Escribir "La resta es: ", resta(n1, n2);
			3:
				Escribir "La multiplicación es: ", mult(n1, n2);
			4:
				Escribir "La división es: ", div(n1, n2);
			De Otro Modo:
				Escribir "Esa no es una opción, escriba un aopción valida";
		FinSegun
	Hasta Que p > 0 y p < 5
FinAlgoritmo

Funcion retorno = suma(n1, n2)
	Definir retorno Como Real;
	retorno = n1 + n2;
FinFuncion

Funcion retorno = resta(n1, n2)
	Definir retorno Como Real;
	retorno = n1 - n2;
FinFuncion

Funcion retorno = mult(n1, n2)
	Definir retorno Como Real;
	retorno = n1 * n2;
FinFuncion

Funcion retorno = div(n1, n2)
	Definir retorno Como Real;
	retorno = n1 / n2;
FinFuncion