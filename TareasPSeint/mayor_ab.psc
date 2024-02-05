Algoritmo mayor_ab
	Repetir
		Escribir 'Ingrese un primer número: ';
		Leer a;
		Escribir 'Ingrese un segundo número: ';
		Leer b;
		Si a==b Entonces
			Escribir 'Ambos números (', a, ', ', b, ') ', 'son iguales';
		SiNo
			Si a>b Entonces
				Escribir a, ' es el número mayor';
			SiNo
				Escribir b, ' es el número mayor';
			FinSi
		FinSi
		Escribir '¿Desea repetir el programa? S/N';
		Leer salida;
		Limpiar Pantalla;
	Hasta Que salida='N' O salida='n'
FinAlgoritmo
