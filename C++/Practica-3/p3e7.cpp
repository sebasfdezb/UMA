#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Introduzca el numero de fracciones: ";
    cin >> n;

    while(n<=0){
        cout << "Error. Introduzca el numero de fracciones: ";
        cin >> n;
    }

    double numerador = 2;
    double denominador = 1;
    double division;
    double suma = 1;

    for (int i=0; i<=n; i++){
       if(numerador>denominador){
        numerador = numerador;
        denominador = denominador + 2;
       }else{
        numerador = numerador + 2;
        denominador = denominador;
       }

       division = numerador / denominador;
       suma= suma * division;

    }

    cout << "El valor de PI con " << n << " fracciones es: " << suma*4;


    return 0;
}
