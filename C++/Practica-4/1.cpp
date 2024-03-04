/*Practica 7 Ejercicio 1
Autor: Sebastian Fernandez Buelvas
Fecha: 12/01/2022 */

#include <iostream>
#include <array>
using namespace std;

const int N=4;
const int M=5;
typedef array <int, M> TFila;
typedef array <TFila, N> TMatriz;

void leerMatriz(TMatriz& a);
void mayorMatriz(const TMatriz a, int& mayor, int& filMayor ,int& colMayor);


int main(){

TMatriz a;
int mayor, fil, col;

cout << "Introduzca por filas una matriz " << N << " x " << M;
leerMatriz(a);
mayorMatriz(a, mayor, fil, col);

cout << "El mayor de la matriz es " << mayor << " en la posicion " << fil << ", " << col;
return 0;
}

void leerMatriz(TMatriz& a){
    for (int f=0; f<N; f++){
        for (int c=0; f<M; c++){
            cin >> a[f][c];
        }
    }
}

void mayorMatriz(const TMatriz a, int& mayor, int& fil ,int& col){
    mayor = a[0][0];
    fil=0;
    col=0;

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
                if(a[i][j]> mayor){
                    mayor= a[i][j];
                    fil=i;
                    col=j;
                }

        }
    }
}









