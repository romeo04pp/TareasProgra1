Algoritmo promedio_N
	Repetir
		total <- 0;
		Escribir '�Cu�ntos n�meros ingresar�?';
		Leer N;
		Para i<-1 Hasta N Con Paso 1 Hacer
			Escribir 'Ingrese n�mero: ';
			Leer numero;
			total <- total+numero;
		FinPara
		promedio <- total/N;
		Escribir 'El promedio es: ', promedio;
		Escribir '�Desea repetir el programa? S/N';
		Leer salida;
		Limpiar Pantalla;
	Hasta Que salida='N' O salida='n'
FinAlgoritmo
