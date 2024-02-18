Algoritmo Limite_De_Credito
	Escribir 'Introduzca el numero de cuenta (-1 para salir): ';
	Leer NumeroCuenta;
	Mientras NumeroCuenta<>-1 Hacer
		Escribir 'Introduzca el saldo inicial: ';
		Leer SaldoInicial;
		Escribir 'Introduzca los cargos totales: ';
		Leer Cargos;
		Escribir 'Introduzca los creditos totales: ';
		Leer Creditos;
		Escribir 'Introduzca el limite de creditos: ';
		Leer LimiteCredito;
		NuevoSaldo <- SaldoInicial+Cargos-Creditos;
		Escribir 'El nuevo saldo es: ', NuevoSaldo;
		Si NuevoSaldo>LimiteCredito Entonces
			Escribir 'Cuenta: ', NumeroCuenta;
			Escribir 'Limite de credito: ', LimiteCredito;
			Escribir 'Saldo: ', NuevoSaldo;
			Escribir 'Se excedio el limite de su credito';
		FinSi
		Escribir 'Introduzca el numero de cuenta (-1 para salir): ';
		Leer NumeroCuenta;
	FinMientras
FinAlgoritmo
