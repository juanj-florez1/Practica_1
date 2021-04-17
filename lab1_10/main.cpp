/*Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100.
Ej: si se ingresa 33 se debe imprimir:
Multiplos de 33 menores que 100:
33
66
99*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Numero a evaluar, menor que 100    ";
    int N;
    int i=1;
    cin>> N;

    while (N>=100){
        cout<<"Numero a evaluar, menor que 100    ";
        cin>>N;
    }

    for(int n=N;n<100;n=n*i){
        //i = i+1;

        cout<<n<<"\n";
        cout<<i<<"\n";
        _sleep(1000);
        i = i+1;
    }
    return 0;


}
