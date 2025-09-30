/*
Tarea 22: Una empresa comercializadora de instrumentos musicales tiene las ventas mensuales en dinero,
por cada tipo de instrumentos que vende (Cuerda, Viento, Percusión y Electrónicos). Desarrollar un
algoritmo que determine cuál fue el mes en que ocurrió la mayor venta total y cuál fue la línea de
instrumentos que tuvo la menor venta anual
*/
#include <iostream>
#include <time.h>
using namespace std;
int main() {
    int i, j;
    float ventas[5][13], max, min;
    for (j=1;j<13;j++) {
        ventas[0][j]=0;
    }
    for (i=1;i<5;i++) {
        ventas[i][0]=0;
    }
    for (i=1;i<5;i++) {
        for (j=1;j<13;j++) {
            ventas[i][j]=10000+rand()%90000;
            ventas[0][j]=ventas[0][j]+ventas[i][j];
            ventas[i][0]=ventas[i][0]+ventas[i][j];
        }
    }
    max=ventas[0][1];
    for (j=2;j<13;j++) {
        if (ventas[0][j]>max) {
            max=ventas[0][j];
        }
    }

    //impresion
    ventas[0][0]=100001;
    for (i=0;i<5;i++) {
        for (j=0;j<13;j++) {
            cout<<ventas[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\nMeses con mayores ventas: ";
    for (j=1;j<13;j++) {
        if (ventas[0][j]==max) {
            cout<<j<<" ";
        }
    }
    min=ventas[1][0];
    for (i=2;i<5;i++) {
        if (ventas[i][0]<min) {
            min=ventas[i][0];
        }
    }
    cout<<"\nTipo de instrumento con menor venta anual: ";
    for (i=1;i<5;i++) {
        if (ventas[i][0]==min) {
            cout<<i<<" ";
        }
    }
    return 0;
}