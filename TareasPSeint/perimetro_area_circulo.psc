Algoritmo perimetro_area_circulo
	Repetir
		Escribir 'Ingrese radio del circulo: ';
		Leer radio;
		perimetro <- (2*pi)*radio;
		area <- pi*(radio^2);
		Escribir 'El perimetro del c�rculo es: ', perimetro;
		Escribir 'El �rea del c�rculo es: ', area;
		Escribir '';
		Escribir '�Desea repetir el programa?...S/N: ';
		Leer R;
		Limpiar Pantalla;
	Hasta Que R='N' O R='n'
FinAlgoritmo
