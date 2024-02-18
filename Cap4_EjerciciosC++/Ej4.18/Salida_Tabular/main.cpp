#include <iostream>
//Un programa que realiza una salida tabular, como se pide en el
//ejercicio 4.18
//Hecho por Pablo Romeo Palencia Rosales
using namespace std;
int main()
{
    int contador=0;
    cout << "N\t " << "10*N\t " << "100*N\t" << "1000*N\t" << endl << endl;
    while(contador<5)
    {
        cout << ++contador << "\t " << contador*10 << "\t "
        << contador*100 << "\t" << contador*1000 << endl;
    }
    return 0;
}
