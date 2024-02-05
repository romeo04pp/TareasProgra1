Algoritmo mas_menos_cero
	Repetir
		Escribir 'Ingrese primer valor a sumar: ';
		Leer valor1;
		Escribir 'Ingrese segundo valor a sumar: ';
		Leer valor2;
		resultado <- valor1+valor2;
		Si resultado=0 Entonces
			Escribir 'La suma de los dos valores es CERO! ', resultado;
		SiNo
			Si resultado>0 Entonces
				Escribir 'La suma de los dos valores es POSITIVA! ', resultado;
			SiNo
				Escribir 'La suma de los dos valores es NEGATIVA! ', resultado;
			FinSi
		FinSi
		Escribir '';
		Escribir '¿Desea repetir el programa?...S/N: ';
		Leer R;
		Limpiar Pantalla;
	Hasta Que R='N' O R='n'
FinAlgoritmo
