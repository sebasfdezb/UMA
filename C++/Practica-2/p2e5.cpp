#include <iostream>
using namespace std;

const double IVA = 0.12;
const double descuento = 0.05;


int main(){

    double unidades;
    double precio;

    cout << "Introduzca la cantidad de unidades adquiridas: ";
    cin >> unidades;

    cout << "Introduzca el precio de una unidad: ";
    cin >> precio;

    double precio1 = unidades*precio;
    double precioIVA = precio1*IVA;
    double precio2 = precio1 + precioIVA;

    if(precio2<300){
        cout << "El precio total a pagar es: " << precio2 << " euros" << endl;
    }else if(precio2>=300){
        double precioDescuento = precio2 - (precio2*descuento);
        cout << "Se aplica el descuento del 5% " << endl;
        cout << "El precio total a pagar es: " << precioDescuento << " euros" << endl;

    }


    return 0;
}
