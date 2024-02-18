#include <iostream>
//Programa que recibe tres valores y verifica si pueden formar
//un triangulo,   Hecho por: Pablo Romeo Palencia Rosales
using namespace std;
int main()
{
    //definimos variables a,b,c
    //normalmente se le llaman así a los lados de un triangulo
    double a, b, c;
    do
    {
        //Pedimos que ingrese los lados
        cout << "Introduzca lado a: ";
        cin >> a;
        cout << "Introduzca lado b: ";
        cin >> b;
        cout << "Introduzca lado c: ";
        cin >> c;
        //Si un valor es 0 no puede formar un triangulo.
        if((a<=0) || (b<=0) || (c<=0))
            cout << "\nLos lados no forman un triangulo" << endl <<endl;
        else
            cout << "Los lados si forman un triangulo" << endl;
    } while((a<=0) || (b<=0) || (c<=0));
    return 0;
}
