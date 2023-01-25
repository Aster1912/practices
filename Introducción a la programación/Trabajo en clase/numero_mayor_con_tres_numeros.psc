// Determinar de entre 3 numeros enteros cual es el mayor
Algoritmo numero_mayor_con_tres_numeros
	Definir num1,num2,num3 Como Entero;
	Escribir 'Escriba un numero entero:';
	Leer num1;
	Escribir 'Escriba otro numero entero:';
	Leer num2;
	Escribir 'Escriba un ultimo numero entero:';
	Leer num3;
	Si num1==num2 Y num2==num3 Entonces
		Escribir 'Los tres numeros son iguales';
	SiNo
		Si num1==num2 Y num1>num3 Entonces
			Escribir 'El primer y segundo numero son ',num1,', son iguales y mayores';
		SiNo
			Si num1>num2 Entonces
				Si num1>num3 Entonces
					Escribir 'El numero ',num1,' es el mayor';
				SiNo
					Si num1<num3 Entonces
						Escribir 'El numero ',num3,' es el mayor';
					SiNo
						Escribir 'El primer y tercer numero son ',num1,', son iguales y mayores';
					FinSi
				FinSi
			SiNo
				Si num2>num3 Entonces
					Escribir 'El numero ',num2,' es el mayor';
				SiNo
					Si num2<num3 Entonces
						Escribir 'El numero ',num3,' es el mayor';
					SiNo
						Escribir 'El segundo y tercer numero son ',num2,', son iguales y mayores';
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo