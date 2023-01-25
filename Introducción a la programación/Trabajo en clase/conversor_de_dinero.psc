//Escribe una función en pseudocodigo llamada ConversionMoneda(...) que permita convertir una cantidad de dinero dada en dolares, libras o yenes a euros. Estas son las equvalencias aproximadad:
//1 libra = 22 euros
//1 dolar = 0.75 euros
//1 yen = 0.009 euros
Algoritmo conversor_de_dinero
	Definir op Como Entero;
	Definir dinero Como Real;
	Escribir "Escriba que moneda desea convertir a euro:";
	Escribir "1. Dolar";
	Escribir "2. Libra";
	Escribir "3. Yen";
	Repetir
		Leer op;
		Segun op Hacer
			1:
				Escribir "Escriba la cantidad a transformar:";
				Leer dinero;
				Escribir dinero, " dolares a euros son: ", dolar(dinero);
			2:
				Escribir "Escriba la cantidad a transformar:";
				Leer dinero;
				Escribir dinero, " libras a euros son: ", libra(dinero);
			3:
				Escribir "Escriba la cantidad a transformar:";
				Leer dinero;
				Escribir dinero, " yenes a euros son: ", yen(dinero);
			De Otro Modo:
				Escribir "Esa no es una opción, escriba un aopcion correcta:";
				
		FinSegun
	Hasta Que op > 0 y op < 4;
FinAlgoritmo

Funcion retorno =  libra(dinero)
	Definir retorno Como Real;
	retorno = dinero * 22;
FinFuncion	

Funcion retorno = dolar(dinero)
	Definir retorno Como Real;
	retorno = dinero * 0.75;
FinFuncion

Funcion retorno =  yen(dinero)
	Definir retorno Como Real;
	retorno = dinero * 0.009;
FinFuncion	