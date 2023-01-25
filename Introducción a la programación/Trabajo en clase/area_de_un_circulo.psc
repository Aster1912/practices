//Escribe una funcion en pseudocodigo que devuelva el área de un circulo dado su radio. Recuerda que para calcular el área, la formula es pi * radio^2
Algoritmo area_de_un_circulo
	Definir radio Como Real;
	Escribir "Escriba el radio de el circulo:";
	Leer radio;
	Escribir "El área del circulo es: ", area(radio);
FinAlgoritmo

Funcion retorno = area(radio)
	Definir retorno Como Real;
	retorno = PI * (radio ^ 2);
FinFuncion