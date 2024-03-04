#include <iostream>
using namespace std;

const int SEG_MIN = 60;
const int MIN_HOR = 60;
const int SEG_HOR = SEG_MIN*MIN_HOR;
const int HOR_DIA = 24;
const int SEG_DIA = SEG_HOR*HOR_DIA;
const int DIA_SEM = 7;
const int SEG_SEM = SEG_DIA*DIA_SEM;


int main(){
    int segundos, minutos, horas, dias, semanas;

    cout << "Introduzca los segundos: ";
    cin >> segundos;

    semanas = segundos / SEG_SEM;
    segundos = segundos%SEG_SEM;

    dias = segundos/SEG_DIA;
    segundos = segundos%SEG_DIA;

    horas = segundos / SEG_HOR;
    segundos = segundos%SEG_HOR;

    minutos = segundos/SEG_MIN;
    segundos = segundos%SEG_MIN;

    cout << "Sus segundos equvalen a: [" << semanas << "] semanas, " << dias <<
        " dias, " << horas << ":" << minutos << ":" << segundos;

        return 0;
}
