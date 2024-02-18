#include <iostream>
//patron de ajedrez con asteriscos
//Hecho por Pablo Romeo Palencia Rosales
using namespace std;
int main()
{
//al tener que realizar el porgrama con solo
//tres instrucciones de salida, utilizaremos ciclos for
//i representará el eje x, y j el eje y, viendolo así
//podremos formar la figura haciendo corridos.
    for(int i=1; i<=8; i++)
    {
        for(int j=1; j<=16; j++)
        {
            if ((i+j)%2 == 0) //si i+j es par, imprime *
            {
                cout << "*";
            }
                else //si i+j es impar, imprime un espacio
                {
                    cout << " ";
                }
        }
        cout << endl;
    }
    return 0;
}
