Algoritmo salario_repetir
	Definir sal, sal_s, prom Como Real;
	Definir i Como Entero;
	i = 0;
	sal_s = 0;
	Repetir
		Escribir "Escriba el salario de el dia:";
		Leer sal;
		sal_s = sal_s + sal;
		i = i + 1;
	Hasta Que i = 5;
	prom = sal_s / i;
	Escribir "El promedio a la semana es de: $", prom;
FinAlgoritmo