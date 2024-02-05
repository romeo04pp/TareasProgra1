Algoritmo cuadrado_cubo
	Repetir
		Escribir "Ingrese número a evaluar: "; Leer x;
		Escribir "¿Qué desea realizar con el número?...";
		Escribir "1) elevar al cuadrado                 2) elevar al cubo";
		Leer opcion;
		Segun opcion Hacer
			1:
				resultado=x^2;
				Escribir "El resultado de la operación es: ",resultado;
			2:
				resultado=x^3;
				Escribir "El resultado de la operación es: ",resultado;
			De Otro Modo:
				Escribir "Error, opción no existe.";
		Fin Segun
		Escribir "¿Desea repetir el programa? S/N"; Leer salida;
		limpiar pantalla;
	Hasta Que salida = 'N' o salida = 'n';
FinAlgoritmo
