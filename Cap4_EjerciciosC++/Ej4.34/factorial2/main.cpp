#include <stdio.h>
#include <math.h> //librerias extras a usar
#include <iostream>
//Programa que calcula el valor de la constante e
//Hecho por Pablo Romeo Palencia Rosales
using namespace std;
float CalculaFactorial (int num)
{
    if (num==0)
        return 1;
    else
        return num * CalculaFactorial(num-1);
}
double e(int deci)
{
    double suma = 0;
    for(int i = 0; i < deci; i++)
    {
        suma += 1/CalculaFactorial(i);
    }
return suma;
}
    int i=0;
    float x, rsp=0, termino=1;
    int main()
{
    cout<<"Introduzca el valor de x: ";
    cin>>x;
    while(termino>=0.0001)
    {
        termino=pow(x,i)/CalculaFactorial(i);
        rsp+= termino;
        i++;
    }
    int deci;
    cout << "Cantidad de decimales: ";
    cin >> deci;
    cout << "e = " << e(deci) << endl;
    cout << endl << "El resultado de e^x es: " << rsp << endl;
    return 0;
}
