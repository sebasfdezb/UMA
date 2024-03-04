#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Introduzca un numero entero: ";
    cin >> num;

    if(num>0){
        cout<< "El numero " << num << " no es negativo";
    }else{
        cout << "El numero " << num << " si es negativo";
    }

    return 0;
}
