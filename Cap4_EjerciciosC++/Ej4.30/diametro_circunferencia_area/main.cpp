#include <iostream>
//Programa que calcula el area, diametro y circunferencia de un circulo
//Hecho por: Pablo Romeo Palencia Rosales
using namespace std;
const double PI=3.141519; //constante pi
int main()
{
    //definir variables double
    double radio=0, diametro=0, circunferencia=0, area=0;
    //pedir al usuario ingresar el diametro
    cout << "Ingrese el radio: "; cin >> radio;
    //calculos
    diametro=radio*2;
    circunferencia=2*PI*radio;
    area= PI*(radio*radio);
    //mostrar resultados
    cout << "\nSu diametro es: " << diametro << endl;
    cout << "Su circunferencia es: " << circunferencia << endl;
    cout << "Su area es: " << area << endl;
    return 0;
}
