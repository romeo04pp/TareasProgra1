#include <iostream>
//Hecho por Pablo Romeo Palencia Rosales
using namespace std;

int main()
{
    int x=5,y=7;
    if ( y == 8 )
    {
        if ( x == 5 )
            cout << "@@@@@" << endl;
    }
        else
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
//Para que el inciso d) funcione, quitamos
//las llaves del else, y agregamos al primer if
//además el valor de y cambia a 7.
    return 0;
}
