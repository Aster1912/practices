Algoritmo salario_mientras
	Definir sal, sal_s, prom Como Real;
	Definir i Como Entero;
	i = 0;
	sal_s = 0;
	Mientras i < 5 Hacer
		Escribir "Escriba el salario del dia:";
		Leer sal;
		sal_s = sal_s + sal;
		i = i + 1;
	FinMientras
	prom = sal_s / i;
	Escribir "El promedio a la semana es de: $", prom;
FinAlgoritmo