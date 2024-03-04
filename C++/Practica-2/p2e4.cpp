#include <iostream>
using namespace std;


int main(){

    int dia, mes, anyo;

    cout << "Introduzca el dia: ";
    cin >> dia;

    cout << "Introduzca el mes: ";
    cin >> mes;

    cout << "Introduzca el anyo: ";
    cin >> anyo;

    switch(mes){

    case 1:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Enero" << endl;
        cout << "Anyo: " << anyo << endl;
        break;


    case 2:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Febrero" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 3:

        cout << "Dia: " << dia << endl;
        cout << "Mes: Marzo" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 4:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Abril" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 5:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Mayo" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 6:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Junio" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 7:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Julio" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 8:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Agosto" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 9:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Septiembre" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 10:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Octubre" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 11:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Noviembre" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    case 12:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Diciembre" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    default:
        cout << "Dia: " << dia << endl;
        cout << "Mes: Error" << endl;
        cout << "Anyo: " << anyo << endl;
        break;

    }


    return 0;
}
