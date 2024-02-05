Algoritmo par_impar
	Repetir
		Escribir 'Ingrese número a evaluar: ';
		Leer numero;
		residuo <- numero MOD 2;
		Si residuo=0 Entonces
			Escribir 'El numero ', numero, ' es PAR';
		SiNo
			Escribir 'El numero ', numero, ' es IMPAR';
		FinSi
		Escribir '';
		Escribir '¿Desea repetir el programa?...S/N: ';
		Leer R;
		Limpiar Pantalla;
	Hasta Que R='N' O R='n'
FinAlgoritmo
