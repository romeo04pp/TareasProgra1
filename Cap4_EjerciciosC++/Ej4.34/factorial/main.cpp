#include <iostream>
//Programa que calcula el factorial de un numero
//Hecho por Pablo Romeo Palencia Rosales
using namespace std;
int CalculaFactorial(int);
int main()
{
    unsigned int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"El factorial del numero es: "<<CalculaFactorial(num);
    return 0;
}
int CalculaFactorial(int num)
{
    int factorial;
    if (num==0)
        factorial=1;
    else
    {
        for(int i=1;i<=num;i++)
        {
            factorial=1;
            for(int j=1;j<=i;j++)
            {
                factorial=factorial*j;
            }
        }
    }
return factorial;
}
