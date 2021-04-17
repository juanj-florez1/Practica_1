/*La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
Tip: la serie termina al llegar a un elemento cuyo valor sea 1.
Ej: para la semilla 13: 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Nota: la salida del programa debe ser:
La serie mas larga es con la semilla: j, teniendo m terminos.
Otra nota: se le dará una bonicación si imprime la serie.*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Numero Natural de inicio" << endl;
    int N;
    int cont=1;
    cin>>N;

    while(N!=1){
        if(N%2==0){
            N=N/2;
        }else{
            N=(N*3)+1;
        }
     cont++;
     cout<<N<< endl;
    }
    cout<<"la serie tienen "<<cont<< " elementos cuando llega a uno." <<endl;
    return 0;
}
