#include <iostream>
using namespace std;


int main(){

    int num, provincia, numOp, digitoControl, comprobacion;

    cout << "Introduzca el codigo numerico de 4 digitos: ";
    cin >> num;

    if((num<1000) || (num>9999)){
        cout << "Codigo erroneo";
    }

    if(num>=1000){
        provincia = num/1000;
        int op1 = num%1000;
        int op2 = op1/100;
        int resto_op2 = op1%100;
        int op3 = resto_op2/10;
        int resto_op3 = resto_op2%10;

        numOp = (op2*10) + op3;
        digitoControl = resto_op3;

        int op4 = provincia*numOp;
        comprobacion = op4%10;

        if(digitoControl==comprobacion){
            cout << "Provincia: " << provincia << endl;
            cout << "Numero de operacion: " << numOp << endl;
            cout << "Digito de control: " << digitoControl << endl;
            cout << "Comprobacion: correcto";

        }else{
            cout << "Provincia: " << provincia << endl;
            cout << "Numero de operacion: " << numOp << endl;
            cout << "Digito de control: " << digitoControl << endl;
            cout << "Comprobacion: error";


        }

    }

    return 0;
}
