#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Introduzca un numero: ";
    cin>>num;
    if(num<0){
        cout<<"Error.";
    }
    else{
    int suma=0;
    int total=1;
    while (total<=num){
        suma+=total;
        total++;
    }
    cout<<"La suma es: "<<suma;
    }
}

