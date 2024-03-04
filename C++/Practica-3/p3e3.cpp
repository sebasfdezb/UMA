#include<iostream>
using namespace std;
const char SIMBOLO= 'x';
int main(){
    int n;
    cout<<"Introduzca un numero: ";
    cin>>n;

    while(n<=0)
    {
        cout<<"Introduzca un numero: "<<endl;
        cin>>n;
    }

    for(int f=0;f<n;f++)
    {
        cout<<SIMBOLO;
    }
    cout<<endl;


}

