#include <iostream>
using namespace std;

const double TEORIA = 0.70;
const double PRACTICA = 0.30;

int main(){
    double notaTeoria, notaPractica;

    cout << "Introduzca la nota de teoria: ";
    cin >> notaTeoria;

    cout << "Introduzca la nota de practica: ";
    cin >> notaPractica;

    double calificacion = (notaTeoria*TEORIA) + (notaPractica*PRACTICA);
    cout << "La calificacion es: " << calificacion << endl;

    return 0;
}
