#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Ingrese dos enteros: " << endl;
    cin >> x >> y;
    if (x > y)
        cout << x << " es mas grande";
    if (y > x)
        cout << y << " es mas grande";
    if (x == y)
        cout << "Estos numeros son iguales";
    return 0;
}
