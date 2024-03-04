#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;

    cout << "Introduzca 3 numeros enteros: ";
    cin >> num1 >> num2 >> num3;

    if((num1>num2)&&(num1>num3)){
        cout << "El numero mayor es: " << num1;
    }else if((num2>num1)&&(num2>num3)){
        cout << "El numero mayor es: " << num2;
    }else if((num3>num1)&&(num3>num2)){
        cout << "El numero mayor es: " << num3;
    }else{
        cout << "No existe un unico numero mayor";
    }

    return 0;
}
