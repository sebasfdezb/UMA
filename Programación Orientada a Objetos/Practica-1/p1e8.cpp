#include <iostream>
using namespace std;

int main(){
    char a,b,c,d;

    cout << "Introduzca una palabra  de 4 letras minusculas: "<< endl;
    cin >> a >> b >> c >> d;

    int distancia = a - int('a');
    char A = char(int('A') + distancia);

    int distancia2 = b - int('a');
    char B= char(int('A') + distancia2);

    int distancia3 = c - int('a');
    char C= char(int('A') + distancia3);

    int distancia4 = d - int('a');
    char D= char(int('A') + distancia4);


    cout <<"La palabra [" << a << b << c <<d << "] transformada es [" << A << B << C << D << "]";

    return 0;
    ;
}
