#include <iostream>

using namespace std;

int main()
{
    int radio; float pi;
    pi=3.14159;

    cout << "Ingrese radio del circulo: " << endl;
    cin >> radio;

    cout << "El diametro es: " << radio * 2 << endl;
    cout << "La circunferencia es: " << 2 * pi * radio << endl;
    cout << "El area es: " << pi * (radio * radio);
    return 0;
}
