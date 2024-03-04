#include<iostream>
using namespace std;
const char SIMBOLO= '*';
int main()
{
    int n;
    cout<<"Introduzca un numero: ";
    cin>>n;

    while(n<=0)
    {
        cout<<"Introduzca un numero: ";
        cin>>n;
    }
    for(int f=0;f<n;++f)
    {
        for(int c=0;c<n;++c)
        {
        cout<<SIMBOLO;
        }
    cout<<endl;
    }
    cout<<endl;

}



