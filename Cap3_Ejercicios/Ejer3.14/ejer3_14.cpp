//Programa hecho por Pablo Palencia
#include <iostream>
#include <string>
using namespace std;

class Empleado
{
private: //datos miembros privados
    string mNombre;
    string mApellido;
    int mSalario;
public:
    Empleado(string nombre, string apellido, int salario) //constructor inicializa datos miembros
    {
        mNombre=nombre;
        mApellido=apellido;
        if (salario >= 0) //verifica si salario es menor a 0
        {
            mSalario=salario;
        }
        else
        {
            mSalario=0;
        }
    }
    void establecerPrimerNombre(string nombre) //funcion que establece nombre
    {
        mNombre = nombre;
    }

    string obtenerPrimerNombre() const //funcion que obtiene nombre
    {
        return mNombre;
    }
    void establecerApellidoPaterno(string apellido) //funcion que establece el apellido
    {
        mApellido = apellido;
    }
    string obtenerApellidoPaterno() const //funcion que obtiene apellido
    {
        return mApellido;
    }
    void establecerSalarioMensual(int salario) //funcion que establece el salario mensual ya verificado
    {
        mSalario=salario;
    }
    int obtenerSalarioMensual() const //funcion que obtiene el salario mensual
    {
        return mSalario;
    }

    //funciones para calculos
    int calcularSalarioAnual() const //funcion que calcula el salario anual
    {
        return mSalario * 12;
    }
    int calcularAumentoSalarial() const //funcion para el aumento del 10% en salarios
    {
        int aumento, mAumento;
        aumento=(mSalario*12)*0.10;
        mAumento=((mSalario*12)+aumento);
        return mAumento;
    }
};

int main()
{
    Empleado empleado1("Miguel", "Ohara", 4100); //objetos empleados para las pruebas
    Empleado empleado2("Rosa", "Smidth", 3200);
    cout << "Empleado1: " << empleado1.obtenerPrimerNombre() << " " << empleado1.obtenerApellidoPaterno() << ", Salario Anual: Q" << empleado1.calcularSalarioAnual() << endl;
    cout << "Empleado2: " << empleado2.obtenerPrimerNombre() << " " << empleado2.obtenerApellidoPaterno() << ", Salario Anual: Q" << empleado2.calcularSalarioAnual() << endl;
    cout << "\nAumento de 10%:" << endl;
    cout << "Empleado1: " << empleado1.obtenerPrimerNombre() << " " << empleado1.obtenerApellidoPaterno() << ", Salario Anual: Q" << empleado1.calcularAumentoSalarial() << endl;
    cout << "Empleado2: " << empleado2.obtenerPrimerNombre() << " " << empleado2.obtenerApellidoPaterno() << ", Salario Anual: Q" << empleado2.calcularAumentoSalarial() << endl;

    return 0;
}
