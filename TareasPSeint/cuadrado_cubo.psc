Algoritmo cuadrado_cubo
	Repetir
		Escribir "Ingrese n�mero a evaluar: "; Leer x;
		Escribir "�Qu� desea realizar con el n�mero?...";
		Escribir "1) elevar al cuadrado                 2) elevar al cubo";
		Leer opcion;
		Segun opcion Hacer
			1:
				resultado=x^2;
				Escribir "El resultado de la operaci�n es: ",resultado;
			2:
				resultado=x^3;
				Escribir "El resultado de la operaci�n es: ",resultado;
			De Otro Modo:
				Escribir "Error, opci�n no existe.";
		Fin Segun
		Escribir "�Desea repetir el programa? S/N"; Leer salida;
		limpiar pantalla;
	Hasta Que salida = 'N' o salida = 'n';
FinAlgoritmo
