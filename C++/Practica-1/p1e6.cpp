#include <iostream>
using namespace std;

const int bytes_1_Kibyte = 1024;
const int Kibyte_1_Mibyte = 1024;
const int bytes_1_Mibyte = bytes_1_Kibyte*Kibyte_1_Mibyte;

int main(){
    int bytes;

    cout << "Introduzca una cantidad de bytes: ";
    cin >> bytes;

    int Mibytes = bytes / bytes_1_Mibyte;
    int resto_Mibytes = bytes % bytes_1_Mibyte;
    int Kibytes = resto_Mibytes / Kibyte_1_Mibyte;
    int resto_bytes = bytes % Kibyte_1_Mibyte;

    cout << bytes << " Bytes corresponden a: " << endl;
    cout << "Mibytes = " << Mibytes << endl;
    cout << "Kibytes = " << Kibytes << endl;
    cout << "Bytes = " << resto_bytes ;


    return 0;


}
