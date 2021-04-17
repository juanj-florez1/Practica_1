/*Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120*/
#include <iostream>

using namespace std;

int main()
{
    cout <<"Por favor ingresar el número del factorial \n";
       int N;
       int X=1;
       cin >> N;

        for (int i=1;i<=N;i++){

            X=X*i;



       }
       cout <<N<< "! = :" <<X<<"\n";

    return 0;
}
