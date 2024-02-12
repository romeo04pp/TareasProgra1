#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout << "Ingrese un entero: "; cin >> numero;
    if ((numero % 2) == 0)
        cout << "Es par";
    if ((numero % 2) != 0)
        cout << "Es impar";
    return 0;
}
