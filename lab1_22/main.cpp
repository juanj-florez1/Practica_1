/*Escriba un programa que pida una cantidad entera de segundos y la imprima en
formato horas:minutos:segundos.
Ej: si se ingresa 7777 se debe imprimir:
2:9:37*/#include <iostream>

using namespace std;

int main()
{
    cout << "Cuantos segundos va a calcular?" << endl;
    int N;
    cin>>N;
    int horas= N/3600; //3600 segundos = 1 hora
    int minutos=(N- horas*3600)/60;//regla de 3
    int segundos= N- (horas*3600+minutos*60);

    cout << horas <<":"<< minutos<<":"<<segundos;
    return 0;
}
