#include <iostream>
using namespace std;

int main(){
    char char1, char2, char3, char4;
    cout << "Introduzca una palabra de 4 letras: ";
    cin >> char1 >> char2>> char3 >> char4;

    char a = char(char1+1);
    char b = char(char2+1);
    char c = char(char3+1);
    char d = char(char4+1);


    cout << "La palabra [" << char1<<char2<<char3<<char4 << "] " << "transformada es: ["
    <<a<<b<<c<<d<<"]";

}
