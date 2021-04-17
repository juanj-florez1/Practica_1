/*Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "número a evaluar" << endl;
    string N;
    cin>>N;

    for(int i=0;i<N.length();i=i+1){
        for(int j=N.length()-1;j>=0;j=j-1){
            if(N[i]==N[j]){
                cout<< N << " es palindromo";break;

            }else{
                cout<< N << "No es palindromo";break;

            }
        }
    }

    return 0;
}
