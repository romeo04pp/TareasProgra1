#include <iostream>
//Programa que calcula el sueldo bruto para varios empleados
//Hecho por Pablo Romeo Palencia Rosales
using namespace std;
int main()
{
    //Definimos variables
    int horasTrabajadas=0;
    float tarifaHoras=0, salario=0,extra=0;
    do
    {
        cout << "Introduzca las horas trabajadas (-1 para salir): ";
        cin >> horasTrabajadas;
        if(horasTrabajadas!=-1)
        {
            if (horasTrabajadas<=40)
            {
            cout << "Introduzca la tarifa por horas del empleado: ";
            cin >> tarifaHoras;
            //calculo del salario
            salario=horasTrabajadas*tarifaHoras;
            cout << "El salario es: $" << salario << endl << endl;
            }
            if (horasTrabajadas >40)
            {
                cout << "Introduzca la tarifa por horas del empleado: ";
                cin >> tarifaHoras;
                //calculo del salario con extras
                extra=(horasTrabajadas*tarifaHoras)+(tarifaHoras*0.5);
                cout << "El salario es: $" << extra << endl << endl;
            }
        }
    } while(horasTrabajadas !=-1);
    return 0;
}
