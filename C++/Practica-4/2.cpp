/*Practica 7 Ejercicio 2
Autor: Sebastian Fernandez Buelvas
Fecha: 12/01/2022 */

#include <iostream>
#include <array>
using namespace std;

const int N=4;

typedef array<int, N> TFila;
typedef array <TFila, N> TMatriz;

void leerMatriz(TMatriz& a);
bool esSimetrica(const TMatriz& a);

int main(){

TMatriz a;
cout << "Introduzca por filas una matriz " << N << " x " << N << ": " << endl;
leerMatriz(a);
if(esSimetrica(a)){
    cout << "Es simetrica";
}else{
    cout << "No es simetrica";
}
}

void leerMatriz(TMatriz& a){
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++){
            cin >> a[f][c];
        }
    }
}

bool esSimetrica(const TMatriz& a){
    bool res=true;
    int i, j;

    i=0;

    while(res && (i<N)){
        j= 0;
        while (res && (j<N)){
            if(i!=j){
                if(a[i][j] !=a[j][i]){
                    res=false;
                }
            }
            j++;
        }
        i++;
    }


    return res;

}
