#include<iostream>
using namespace std;
int main(){
int num;
do{
    cout<<"Introduzca un numero: ";
    cin>>num;
    int suma=0;
    int total=1;
}
    while(num<=0);

    int suma=0;
    int total=0;
   while(total<=num){
        suma+=total;
        total++;
    }
     cout << "la suma es: "<<suma;
    return 0;
}


