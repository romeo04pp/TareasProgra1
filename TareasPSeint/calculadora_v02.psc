Algoritmo calculadora_v02
	Repetir
		Escribir '1. Sumar';
		Escribir '2. Restar';
		Escribir '3. Multiplicar';
		Escribir '4. Dividir';
		Escribir '�Qu� desea realizar?';
		Leer opcion;
		Seg�n opcion Hacer
			1:
				Escribir 'Ingrese primer valor: ';
				Leer primero;
				Escribir 'Ingrese segundo valor: ';
				Leer segundo;
				resultado <- primero+segundo;
				Escribir 'Respuesta: ', primero, ' + ', segundo, ' = ', resultado;
			2:
				Escribir 'Ingrese primer valor: ';
				Leer primero;
				Escribir 'Ingrese segundo valor: ';
				Leer segundo;
				resultado <- primero-segundo;
				Escribir 'Respuesta: ', primero, ' - ', segundo, ' = ', resultado;
			3:
				Escribir 'Ingrese primer valor: ';
				Leer primero;
				Escribir 'Ingrese segundo valor: ';
				Leer segundo;
				resultado <- primero*segundo;
				Escribir 'Respuesta: ', primero, ' * ', segundo, ' = ', resultado;
			4:
				Escribir 'Ingrese primer valor: ';
				Leer primero;
				Repetir
					Escribir 'Ingrese segundo valor: ';
					Leer segundo;
					Si segundo=0 Entonces
						Escribir '�ERROR!... Para segundo valor NO debe ingresar 0';
					FinSi
				Hasta Que segundo<>0
				resultado <- primero/segundo;
				Escribir 'Respuesta: ', primero, ' � ', segundo, ' = ', resultado;
			De Otro Modo:
				Escribir '�Opci�n no encontrada!...';
				Escribir 'Ingrese un n�mero que si se encuentre en las opciones';
		FinSeg�n
		Escribir '�Desea repetir el programa?...S/N: ';
		Leer R;
		Limpiar Pantalla;
	Hasta Que R='N' O R='n'
FinAlgoritmo
