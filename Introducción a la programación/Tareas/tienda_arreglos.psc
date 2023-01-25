//Una tienda abre la tienda de lunes a viernes, calcular n ventas al dia y que muestre la suma de las n ventas
Algoritmo tienda_arreglos
	Definir n_venta, i Como Entero;
	Definir totalDia, totalSemana Como Real;
	Definir ventaLunes, ventaMartes, ventaMiercoles, ventaJueves, ventaViernes Como Real;
	//Preguntar ventas diarias
	Escribir "---Lunes---";
	Escribir "¿Cuantas ventas tubo al día?: ";
	Leer i;
	Dimension ventaLunes[i];
	totalDia = 0;
	totalSemana = 0;
	//Repetir según el numero de ventas
	Para n_venta = 0 Hasta i - 1 Con Paso 1 Hacer
		Escribir "Escriba el total de la venta ", n_venta+1,":";
		Leer ventaLunes[n_venta];
		totalDia = totalDia + ventaLunes[n_venta];
	FinPara
	//Imprimir el total del día
	Escribir "El total del día es: ", totalDia;
	totalSemana = totalSemana + totalDia;
	
	Escribir "---Martes---";
	Escribir "¿Cuantas ventas tubo al día?: ";
	Leer i;
	Dimension ventaMartes[i];
	totalDia = 0;
	Para n_venta = 0 Hasta i - 1 Con Paso 1 Hacer
		Escribir "Escriba el total de la venta ", n_venta+1,":";
		Leer ventaMartes[n_venta];
		totalDia = totalDia + ventaMartes[n_venta];
	FinPara
	Escribir "El total del día es: ", totalDia;
	totalSemana = totalSemana + totalDia;
	
	Escribir "---Miercoles---";
	Escribir "¿Cuantas ventas tubo al día?: ";
	Leer i;
	Dimension ventaMiercoles[i];
	totalDia = 0;
	Para n_venta = 0 Hasta i - 1 Con Paso 1 Hacer
		Escribir "Escriba el total de la venta ", n_venta+1,":";
		Leer ventaMiercoles[n_venta];
		totalDia = totalDia + ventaMiercoles[n_venta];
	FinPara
	Escribir "El total del día es: ", totalDia;
	totalSemana = totalSemana + totalDia;
	
	Escribir "---Jueves---";
	Escribir "¿Cuantas ventas tubo al día?: ";
	Leer i;
	Dimension ventaJueves[i];
	totalDia = 0;
	Para n_venta = 0 Hasta i - 1 Con Paso 1 Hacer
		Escribir "Escriba el total de la venta ", n_venta+1,":";
		Leer ventaJueves[n_venta];
		totalDia = totalDia + ventaJueves[n_venta];
	FinPara
	Escribir "El total del día es: ", totalDia;
	totalSemana = totalSemana + totalDia;
	
	Escribir "---Viernes---";
	Escribir "¿Cuantas ventas tubo al día?: ";
	Leer i;
	Dimension ventaViernes[i];
	totalDia = 0;
	Para n_venta = 0 Hasta i - 1 Con Paso 1 Hacer
		Escribir "Escriba el total de la venta ", n_venta+1,":";
		Leer ventaViernes[n_venta];
		totalDia = totalDia + ventaViernes[n_venta];
	FinPara
	Escribir "El total del día es: ", totalDia;
	totalSemana = totalSemana + totalDia;
	
	Escribir "El total de la semana es de: ", totalSemana;
	
FinAlgoritmo