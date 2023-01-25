//Calcular descuento
//Compras mayores a $5000.00 20% de descuento + iva
//Compras mayores a $3000.00 10% de descuento + iva
//Compras mayores a $1000.00 5% de descuento + iva
Algoritmo calcular_descuento
	Definir precio Como Real;
	Escribir "Escriba el precio del producto:";
	Leer precio;
	Si precio > 5000 Entonces
		precio = precio - (precio * 0.20);
		precio = precio + (precio * 0.16);
		Escribir "El producto con descuento e iva calculado es: $", precio;
	SiNo
		Si precio > 3000 Entonces
			precio = precio - (precio * 0.10);
			precio = precio + (precio * 0.16);
			Escribir "El producto con descuento e iva calculado es: $", precio;
		SiNo
			Si precio > 1000 Entonces
				precio = precio - (precio * 0.05);
				precio = precio + (precio * 0.16);
				Escribir "El producto con descuento e iva calculado es: $", precio;
			SiNo
				precio = precio + (precio * 0.16);
				Escribir "El producto no cuenta con descuento, su precio con iva es: $", precio;
			FinSi
		FinSi
	FinSi
FinAlgoritmo
