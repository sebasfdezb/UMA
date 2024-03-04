#include<iostream>
using namespace std;
const char SIMBOLO1='x';
const char SIMBOLO2= 'o';
int main(){
    int n;
    cout<<"Introduzca un numero: ";
    cin>>n;

    while(n<=0)
    {
        cout<<"Introduzca un numero: ";
        cin>>n;
    }

       for(int f=1;f<=n;++f)
    {
        for(int c=1;c<=n;++c)
        {
            if((c+f)%2==0)
            {
                cout<<SIMBOLO1;
            }
            else
            {
                cout<<SIMBOLO2;
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

