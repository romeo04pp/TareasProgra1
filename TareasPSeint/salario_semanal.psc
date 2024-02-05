Algoritmo salario_semanal
	Repetir
		Escribir 'Ingrese nombre de empleado: ';
		Leer nombre;
		Escribir 'Ingrese días trabajados: ';
		Leer dia;
		Escribir 'Ingrese sueldo diario: Q ';
		Leer sueldo;
		total <- dia*sueldo;
		Escribir 'El empleado realizó horas extra... S/N';
		Leer horas;
		Si horas=='S' O horas=='s' Entonces
			Escribir 'Ingrese el total de horas extras trabajadas: ';
			Leer extras;
			Escribir 'Ingrese sueldo por hora: Q';
			Leer sueldo_hora;
			sueldo_extra <- extras*sueldo_hora;
			total <- total+sueldo_extra;
		FinSi
		Escribir 'Nombre: ', nombre;
		Escribir 'Sueldo semanal: Q ', total;
		Escribir '¿Desea repetir el programa?...S/N: ';
		Leer R;
		Limpiar Pantalla;
	Hasta Que R='N' O R='n'
FinAlgoritmo
