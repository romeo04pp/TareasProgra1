#include <iostream>
//Programa que descifra un numero Hecho por: Pablo Romeo
//Para que este programa funcione debemos revertir el
//proceso que hicimos en el programa criptografia.
using namespace std;
int main()
{
    int numero, digito1, digito2, digito3, digito4, sobrante;
    cout << "Ingrese numero a descrifrar: ";
    cin >> numero;
    digito1=numero/1000;
    sobrante=numero%1000;
    digito2=sobrante/100;
    sobrante=sobrante%100;
    digito3=sobrante/10;
    sobrante=sobrante%10;
    digito4=sobrante;
    digito2=digito2-7;
    digito1=digito1-7;
    digito3=digito3-7;
    digito4=digito4-7;
    cout << "\nNumero descifrado: ";
    cout << digito3 << digito4 << digito1 << digito2 << endl;
    return 0;
}
