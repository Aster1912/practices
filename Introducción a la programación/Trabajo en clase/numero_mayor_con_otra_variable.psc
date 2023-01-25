Algoritmo numero_mayor_con_otra_variable
	Definir n1, n2, n3, x Como Entero;
	Escribir "Escriba un numero entero:";
	Leer n1;
	Escribir "Escriba otro numero entero:";
	Leer n2;
	Escribir "Escriba un ultimo numero entero:";
	Leer n3;
	Si n1 > n2 Entonces
		x = n1;
	SiNo
		x = n2;
	FinSi
	Si n3 > x Entonces
		x = n3;
	FinSi
	Escribir "El numero mayor es: ", x;
FinAlgoritmo