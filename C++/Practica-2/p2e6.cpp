#include <iostream>
using namespace std;

const double gastosFijos = 1;
const double KW_100 = 0.50;
const double KW_150 = 0.35;
const double KW_resto = 0.25;
const double PRIMEROS_KW = 100;
const double SEGUNDOS_KW = 150;

int main(){

    double kw, importe;
    cout << "Introduzca el consumo del contador: ";
    cin >> kw;

    if(kw<=100){
        importe = (kw*KW_100) + gastosFijos;
        cout << "Consumo: " << kw << " Kwh. ";
        cout << "Importe: " << importe << " €" << endl;
    }

    if((kw>100) && (kw<250)){
        double op1 = kw -100;
        importe = (100*KW_100) + (op1*KW_150) + gastosFijos;
        cout << "Consumo: " << kw << " Kwh. ";
        cout << "Importe: " << importe << " €" << endl;

    }

    if(kw>=250){
        double op1 = kw - 250;
        importe = (100*KW_100)+(150*KW_150) + (op1*KW_resto) + gastosFijos;
        cout << "Consumo: " << kw << " Kwh. ";
        cout << "Importe: " << importe << " €" << endl;

    }

    return 0;
}
