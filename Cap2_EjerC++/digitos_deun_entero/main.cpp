#include <iostream>

using namespace std;

int main()
{
    int x, a, b, c, d, e;
    cout << "Ingrese un entero de 5 digitos: " << endl; cin >> x;
    a = x / 10000;
    b = (x % 10000)/1000;
    c = (x % 10000)%1000/100;
    d = (x % 10000)%1000%100/10;
    e = (x % 10000)%1000%100%10;
    cout << a << "   " << b << "   " << c << "   " << d << "   " << e << endl;
    return 0;
}
