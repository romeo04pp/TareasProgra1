//Programa Hecho por Pablo Palencia
#include <iostream>
#include <string>
using namespace std;

class Cuenta //Definición de clase Cuenta
{
public:
    int mSaldoInicial; //datos miembros
    int SaldoCuenta=0;
    Cuenta(int saldoInicial) //Constructor que recibe un saldo inicial y lo valida con funciones
    {
        mSaldoInicial=saldoInicial;
        SaldoCuenta=SaldoCuenta+mSaldoInicial;
    }
    void validacion() //funcion que muestra el estado de validacion del saldo inicial
    {
        cout << obtenerValidacionSI() << endl;
    }
    int abonar, cargar, obtenerSaldo;
    string obtenerValidacionSI() //funcion que realiza la validacion del saldo inicial
    {
        if (mSaldoInicial < 0)
        {
            mSaldoInicial = 0;
            return "ERROR!... Saldo inicial Invalido"; //mensaje de error si saldo es < 0
        }
        else
        {
            return "...Saldo inicial Valido"; //Saldo aprobado
        }
    }
    int obtenerCargo(int cargar) //funcion que obtiene cargo
    {
        if (cargar>SaldoCuenta)
        {
            cout << "El monto a cargar excede el saldo de la cuenta."<<endl;
        }
        else
        {
            cout << "Monto a cargar valido."<<endl;
            SaldoCuenta=SaldoCuenta-cargar;
        }
    }
    int obtenerAbono(int abonar) //funcion que obtiene abono
    {
        SaldoCuenta=SaldoCuenta+abonar;
    }
    void mostrarSaldoCuenta() //funcion que muestra el saldo de la cuenta
    {
        cout << "El saldo de la cueta es: " << SaldoCuenta << endl;
    }
};
int main()
{
    //objetos cuentas para las pruebas
    Cuenta cuentaUno(1000); //primer objeto cuenta uno
    cout << "Cuenta1: " << endl;
    cuentaUno.validacion();
    cuentaUno.obtenerAbono(200);
    cuentaUno.obtenerCargo(1400);
    cuentaUno.mostrarSaldoCuenta();

    Cuenta cuentaDos(10000); //segunda objeto cuenta dos
    cout << "\nCuenta2: " << endl;
    cuentaDos.validacion();
    cuentaDos.obtenerAbono(100);
    cuentaDos.obtenerCargo(3500);
    cuentaDos.mostrarSaldoCuenta();
    return 0;
}
