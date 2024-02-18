#include <iostream>
//Validar entrada de un usuario, verificando que los valores si sean 1 o 2
//hecho por Pablo Romeo Palencia Rosales
using namespace std;
int main()
{
    unsigned int aprobados=0; unsigned int reprobados=0;
    unsigned int contadorEstudiantes=1;
    while(contadorEstudiantes<=10)
    {
        int resultado=0;
        do
        {
            cout << "Escriba el resultado (1=aprobado, 2=reprobado): ";
            cin >> resultado;
            if ((resultado!=1) && (resultado!=2))
                cout << "ERROR, Ingrese valores correctos! (1 o 2)" << endl;
        } while ((resultado!=1) && (resultado!=2));
        if(resultado==1)
            aprobados++;
        else
            if(resultado==2)
                reprobados++;
    contadorEstudiantes++;
    }
    cout << "Aprobados " << aprobados << "\nReprobados " << reprobados << endl;
    if (aprobados>=8)
        cout << "Bono para el instructor" << endl;
    return 0;
}
