#include <iostream>
using namespace std;


int main() {
    int num11 = -7;
    int num12 = 4;
    double num13 = num11 + num12;
    cout << "Valor de n�mero11 (int): " << num11 << endl;
    cout << "Valor de n�mero12 (int): " << num12 << endl;
    cout << "Valor de n�mero13 (double) (num11 + num12): " << num13 << " CORRECTO" << endl;

    //Esta primera parte es el resultado de una operacion simple entre 2 enteros.

    int num21 = -7;
    unsigned num22 = 4;
    double num23 = num21 + num22;
    cout << "Valor de n�mero21 (int): " << num21 << endl;
    cout << "Valor de n�mero22 (unsigned): " << num22 << endl;
    cout << "Valor de n�mero23 (double) (num21 + num22): " << num23 << " ERROR" << endl;
}


    //La segunda operacion tienen la variable unsigned que nos dice que no va a llevar signo.
