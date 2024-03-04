#include<iostream>
using namespace std;
int main(){

    int n;

    cout<<"Introduzca un numero: ";
    cin>>n;

    if (n<0){
    cout<<"Error.";
}   else{

        int suma=0;

            for(int i=1;i<=n;++i){
            suma= suma+i;
    }
    cout<<"La suma es: "<<suma<<endl;
}

}

