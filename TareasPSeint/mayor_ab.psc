Algoritmo mayor_ab
	Repetir
		Escribir 'Ingrese un primer n�mero: ';
		Leer a;
		Escribir 'Ingrese un segundo n�mero: ';
		Leer b;
		Si a==b Entonces
			Escribir 'Ambos n�meros (', a, ', ', b, ') ', 'son iguales';
		SiNo
			Si a>b Entonces
				Escribir a, ' es el n�mero mayor';
			SiNo
				Escribir b, ' es el n�mero mayor';
			FinSi
		FinSi
		Escribir '�Desea repetir el programa? S/N';
		Leer salida;
		Limpiar Pantalla;
	Hasta Que salida='N' O salida='n'
FinAlgoritmo
