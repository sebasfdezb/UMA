#include <iostream>
using namespace std;

const double PI=3.1416;
int main(){
    double longitud, area;
    double radio;
    cout << "Hola" << endl;
    cout<< "Este programa calcula la longitud y el area de un circulo" << endl;
    cout << "Introduce el radio del circulo: ";
    cin >> radio;
    longitud = 2*PI*radio;
    area = PI*(radio*radio);
    cout << "Area = " << area << endl;
    cout << "Longitud = " << longitud;

    return 0;
}

