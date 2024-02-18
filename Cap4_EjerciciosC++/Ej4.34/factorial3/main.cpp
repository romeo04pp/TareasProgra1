//Librerias extras a usar
#include <stdio.h>
#include <math.h>
#include <iostream>
//Programa que calcula el valor de e, by Pablo Romeo
using namespace std;
float CalculaFactorial (int num)
{
    if (num==0)
        return 1;
    else
        return num * CalculaFactorial(num-1);
}
int i=0;
float x, resp=0, termino=1;
int main()
{
    cout << "Introduzca un numero: ";
    cin >> x;
    while(termino>=0.0001)
    {
        termino=pow(x,i)/CalculaFactorial(i);
        resp+=termino;
        i++;
    }
    cout << "\nEl resultado con exp es: " << x << exp(x) << endl;
    cout << "\nEl resultado de la serie es: " << resp << endl;
return 0;
}
