#include <iostream>
using namespace std;


int main(){

    char operador;
    int operando1, operando2, resultado;

    do{
        cout << "Operacion (+ - * / &): ";
        cin >> operador;

        if(operador=='&'){
            cout << "FIN DEL PROGRAMA" << endl;
        }else if((operador!='+')&&(operador!='-')&&(operador!='*')&&(operador!='/')){
            cout << "ERROR: Operacion no valida" << endl;
        }else{

        cout << "Operando 1: ";
        cin >> operando1;
        cout << "Operando 2: ";
        cin >> operando2;

        switch(operador){
        case '+':
        resultado = operando1+operando2;
        cout << "El resultado es: " << resultado << endl;
        break;

        case '-':
        resultado = operando1-operando2;
        cout << "El resultado es: " << resultado << endl;
        break;

        case '*':
        resultado = operando1*operando2;
        cout << "El resultado es: " << resultado << endl;
        break;

        case '/':
        resultado = operando1/operando2;
        cout << "El resultado es: " << resultado << endl;
        break;

        default:
            if(operador=='&'){
                cout << "FIN DEL PROGRAMA" << endl;
            }

        }

        }
    }while(operador!='&');

    return 0;
}
