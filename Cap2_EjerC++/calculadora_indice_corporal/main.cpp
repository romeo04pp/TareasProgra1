#include <iostream>

using namespace std;

int main()
{
    float peso, altura, bm;
    cout << "Ingrese peso en kilogramos: " << endl; cin >> peso;
    cout << "Ingrese altura en metros: " <<endl; cin >> altura;
    bm = (peso/(altura * altura));
    if (bm < 18.5)
        cout << "BMI: " << bm << "\nValor de BMI: Bajo peso";
    if ((bm > 18.5) && (bm < 24.9))
        cout << "BMI: " << bm << "\nValor de BMI: Normal";
    if ((bm > 25) && (bm < 29.9))
        cout << "BMI: " << bm << "\nValor de BMI: Sobrepeso";
    if (bm > 30)
        cout << "BMI: " << bm << "\nValor de BMI: Obeso";
    return 0;
}
