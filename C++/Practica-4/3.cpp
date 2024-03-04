/*Practica 7 Ejercicio 3
Autor: Sebastian Fernandez Buelvas
Fecha: 12/01/2022 */

#include <iostream>
#include <array>
using namespace std;

const int N=4;

typedef array<int, N> TFila;
typedef array < TFila, N> TMatriz;

void leerMatriz(TMatriz& a);
bool esMagico(const TMatriz& a);
bool filasIguales(const TMatriz a, int v);


int main(){

TMatriz a;
cout << "Introduzca por filas una matriz " << N << " x " << N << ": " << endl;
leerMatriz(a);
if(esMagico(a)){
    cout << "Es magico";
}else{
    cout << "No es magico";
}
}

void leerMatriz(TMatriz& a){
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++){
            cin >> a[f][c];
        }
    }
}

bool esMagico(const TMatriz& a){
    bool magico;
    int v;
    v=sumaFila(a, 0);
    magico= ((filasIguales(a, v) && colIguales(a, v) && diagIguales(a, v));

    return magico;

}


bool filasIguales(const TMatriz a, int v){
int f=0;
while ((f<N)&&(v==sumaFila(a,f))){
    f++;
}
    return (f=>N);
}
