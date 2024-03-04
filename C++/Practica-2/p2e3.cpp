#include <iostream>
using namespace std;


int main(){

    char caracter;
    cout << "Introduzca un caracter: ";
    cin >> caracter;

    if(((caracter>='a')&&(caracter<='z')) || ((caracter>='A')&&(caracter<='Z'))){
        cout << "Es letra";
       }else if (caracter == '.'){
            cout << "Es punto";
        }else{
            cout << "Error";
        }


    return 0;
}
