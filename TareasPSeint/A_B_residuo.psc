Algoritmo A_B_residuo
	Repetir
		Escribir 'Ingrese primer n�mero: ';
		Leer A;
		Repetir
			Escribir 'Ingrese segundo n�mero: ';
			Leer B;
			Si B=0 Entonces
				Escribir '�ERROR!... Para segundo valor NO debe ingresar 0';
				Esperar Tecla;
			FinSi
		Hasta Que B<>0
		cociente <- A/B;
		residuo <- A MOD B;
		Escribir 'Operaci�n: ', A, ' � ', B;
		Escribir 'Residuo: ', residuo, '      Cociente: ', cociente;
		Escribir '�Desea repetir el programa? S/N';
		Leer salida;
		Limpiar Pantalla;
	Hasta Que salida='N' O salida='n'
FinAlgoritmo
