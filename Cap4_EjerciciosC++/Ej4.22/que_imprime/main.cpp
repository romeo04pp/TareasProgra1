#include <iostream>
//�Qu� imprime el programa? Hecho por Pablo Romeo
using namespace std;
int main()
{
    unsigned int fila = 10;
    while (fila>=1)
    {
        unsigned int columna = 1;
        while (columna<=10)
        {
            cout << (fila % 2 ? "<" : ">");
            ++columna;
        }
        --fila;
        cout<<endl;
    }
    return 0;
}
