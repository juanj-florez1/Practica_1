#include <iostream>

using namespace std;

int main()
{
    cout << "que numero quiere comprobar?\n" << endl;
    int N;
    cin >> N;
    int result= N%2;
    if (result==0){
        cout <<"su numero es par\n ";

    }else{
        cout<<"su numero es impar \n";
    }

    cout << "desea continuar?\n" << endl;
    string x;
    cin >>x;

    while(x=="y"){
        cout << "que numero quiere comprobar?\n" << endl;
        cin >> N;
        int result= N%2;
        if (result==0){
            cout <<"su numero es par \n";

        }else{
            cout<<"su numero es impar\n";
        }

    }
    cout << "adios"<< endl ;



    return 0;
}
