#include <iostream>
//Programa que calcula si algun cliente de la tienda ha excedido su crédito.
//Hecho por: Pablo Romeo Palencia Rosales
using namespace std;

int main()
{
    //definicion de variables
    int NumeroCuenta;
    double SaldoInicial, Cargos, Creditos, LimiteCredito, NuevoSaldo;

    //solicitando los datos del cliente
    cout << "Introduzca el numero de cuenta (-1 para salir): ";
    cin >> NumeroCuenta;
    while(NumeroCuenta!=-1)
    {
        cout << "Introduzca el saldo inicial: ";
        cin >> SaldoInicial;

        cout << "Introduzca los cargos totales: ";
        cin >> Cargos;

        cout << "Introduzca los creditos totales: ";
        cin >> Creditos;

        cout << "Introduzca el limite de credito: ";
        cin >> LimiteCredito;

        //calculamos el nuevo saldo
        NuevoSaldo=SaldoInicial+Cargos-Creditos;

        cout << "El nuevo saldo es: " << NuevoSaldo << endl;
        //usamos un if para ver si el nuevo saldo excede el limite de credito
        if (NuevoSaldo>LimiteCredito)
        {
            cout << "Cuenta: " << NumeroCuenta << endl;
            cout << "Limite de credito: " << LimiteCredito << endl;
            cout << "Saldo: " << NuevoSaldo << endl;
            cout << "Se excedio el limite de su credito" << endl;
        }
        //volvemos a solicitar un numero de cuenta
        cout << "\nIntroduzca el numero de cuenta (-1 para salir): ";
        cin >> NumeroCuenta;
    }
    return 0;
}
