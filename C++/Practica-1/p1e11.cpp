#include <iostream>
using namespace std;
int main()
{
int a = 6;
int b = 14;
int auxiliar;
cout << "a vale " << a << " y b vale " << b << endl;
// ¿Qué hacen estas tres sentencias?
auxiliar = a;
a = b;
b = auxiliar;
cout << "a vale " << a << " y b vale " << b << endl;
}

// Lo que permite este programa es que los valores de a y b se intercambien usando una variable auxiliar para ello
