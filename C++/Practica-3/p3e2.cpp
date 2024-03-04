#include<iostream>
using namespace std;
int main(){
    int num_coches;

    cout<<"Introduzca número de modelos de coche: ";
    cin>>num_coches;

    double suma=0;

    for(double i=1;i<=num_coches;i++)
    {
        double precio;
        cout<<"Precio modelo "<<i<<": ";
        cin>>precio;
        suma = suma + precio;
    }
    double resultado= suma/num_coches;
    cout<<"El valor medio de los "<<num_coches<<
    " modelos de coches asciende a: "<<resultado<<endl;
}

