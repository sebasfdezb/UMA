
#include <iostream>

using namespace std;
int main()
{
    char c;
    int distancia;
    int resultado= 0;
    cout<<"Introduzca el texto terminado en un punto: "<<endl;
    cin.get(c);

    while(c != '.'){
        distancia=int(c);
        resultado= resultado+ 1;
        cin.get(c);
        cout<< distancia <<" ";

    }
    cout<<endl;
    cout<< "Numero de caracteres leidos: "<<resultado<<endl;

}


