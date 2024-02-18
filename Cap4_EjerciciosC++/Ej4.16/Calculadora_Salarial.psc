Algoritmo Calculadora_Salarial
	Repetir
		Escribir 'Introduzca las horas trabajadas (-1 para salir): ';
		Leer horas;
		Si horas<>-1 Entonces
			Si horas<=40 Entonces
				Escribir 'Introduzca la tarifa por horas del empleado: ';
				Leer tarifa;
				salario <- horas*tarifa;
				Escribir 'El salario es: $', salario;
			FinSi
			Si horas>40 Entonces
				Escribir 'Introduzca la tarifa por horas del empleado: ';
				Leer tarifa;
				extra <- (horas*tarifa)+(tarifa*0.5);
				Escribir 'El salario es: $', extra;
			FinSi
		FinSi
	Hasta Que horas=-1
FinAlgoritmo
