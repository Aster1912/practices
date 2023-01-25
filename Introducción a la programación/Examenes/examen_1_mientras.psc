//Problema 2, inciso b
//"La langosta ahumada" es un empresa dedicada a ofrecer banquetes; sus tarifas son las siguientes: el costo de platillo por persona es de $95.00, pero si el numero de personas es mayor a 200 pero menor o igual a 300, el costo es de $85.00. Para más de 300 personas el costo por platillo es de $75.00. Se requiere un algoritmo que determine el presupuesto que se debe prestar a 3 clientes que deseen realizar un evento
Algoritmo examen_1_mientras
	Definir i, personas Como Entero;
	Definir precio Como Real;
	i = 1;
	Escribir ">Bienvenido/a a La Langosta Ahumada<";
	Mientras i <= 3 Hacer
		precio = 0;
		personas = 0;
		Escribir "Escriba cuantas personas tendrá el banquete del cliente ", i, ":";
		Leer personas;
		Si personas > 300 Entonces
			precio = personas * 75.00;
		Sino
			Si personas > 200 Entonces
				precio = personas * 85.00;
			Sino
				precio = personas * 95.00;
			FinSi
		FinSi
		Escribir "El costo del banquete del cliente ", i, " es de: ", precio;
		Escribir "";
		i = i + 1;
	FinMientras
FinAlgoritmo
//Victor Manuel Mtz. Hdz.