/*Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15
*/
#include <iostream>

using namespace std;

int main()
{
    cout <<"Por favor ingresar el número de la sumatoria \n";
    int N;
    int X;
    cin >> N;

     for (int i=0;i<=N;i++){
        // int N= N-1;
         X=X+i;
         //int acomulador = X+i;
        // cout << acomulador;


    }
    cout << "la sumatoria desde  0 hasta "<<N<< " es :" <<X<<"\n";
    return 0;
}
