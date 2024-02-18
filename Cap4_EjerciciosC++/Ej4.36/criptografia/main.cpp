#include <iostream>
//Codigo que cifra un numero de 4 digitos
//Hecho por Pablo Romeo Palencia Rosales
using namespace std;
int main()
{
    //Definimos todas las variables
    int numero, digito1, digito2, digito3, digito4, sobrante;
    //tomamos el numero
    cout << "Ingrese numero de cuatro digitos a cifrar: ";
    cin >> numero;
    //descomponemos el numero
    digito1=numero / 1000;
    sobrante=numero % 1000;
    digito2=sobrante / 100;
    sobrante=sobrante % 100;
    digito3=sobrante / 10;
    sobrante=sobrante % 10;
    digito4=sobrante;
    digito1=((digito1 + 7) % 10);
    digito2=((digito2 + 7) % 10);
    digito3=((digito3 + 7) % 10);
    digito4= ((digito4 +7 ) % 10);
    //mostramos el numero, con la condición que nos indica
    cout << "\nEl numero cifrado es: ";
    cout << digito3 <<digito4 <<digito1 <<digito2 << endl;
    return 0;
}
