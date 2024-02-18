#include <iostream>
//Ejercicio de palindromos, by Pablo Romeo Palencia Rosales
using namespace std;
int main()
{
    int numero;//guardamos el numero que ingrese el usuario
    int n1,n2,n3,n4,n5,dig;//variables que obtendran c/u digito
    do
    {
        cout<<"Introduzca un numero de 5 digitos: ";
        cin>>numero;
    } while(numero<=9999 || numero>99999);//controlamos el rango
    dig=10000;//definimos dig
//dividimos numero hasta obtener individualmente cada digito
//para luego hacer la comparacion.
    n1=numero/dig;
    numero=numero-(dig*n1);
    dig=dig/10;
    n2=numero/dig;
    numero=numero-(dig*n2);
    dig=dig/10;
    n3=numero/dig;
    numero=numero-(dig*n3);
    dig=dig/10;
    n4=numero/dig;
    n5=numero-(dig*n4);
    if(n1==n5 & n2==n4)
        cout<<"\nel numero ES PALINDROMO"<<endl;
    else
        cout<<"\nel numero NO ES PALINDROMO"<<endl;
    return 0;
}
