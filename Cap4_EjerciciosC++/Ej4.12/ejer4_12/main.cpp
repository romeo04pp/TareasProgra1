//Ejercicio 4.12
//¿Qué imprime este programa?
//Pablo Romeo Palencia Rosales
#include <iostream>
using namespace std;
int main()
{
    unsigned int y=0;
    unsigned int x=1;
    unsigned int total=0;
    while(x<=10)
    {
        y=x*x;
        cout << y << endl;
        total+=y;
        ++x;
    }
    cout << "El total es " << total << endl;
    return 0;
}
