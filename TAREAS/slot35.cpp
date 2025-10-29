/*
Escriba un algoritmo que lea una lista de números
enteros y mediante una función determine el
máximo, el mínimo y el promedio del arreglo
*/
#include <iostream>
using namespace std;

void ordenar (int x[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i]>x[j]) {
                int aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
}

int main () {
    int n;
    do {
        cout<<"Ingrese la cantidad de numeros: ";
        cin>>n;
        if (n<=0) cout<<"Error. Valor no Valido."<<endl;
    }while (n<=0);

    int a[n];
    for (int i = 0; i < n; i++) {
        cout<<"a["<<i+1<<"]: ";
        cin>>a[i];
    }
    cout<<"\nArreglo antes de ordenar: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    ordenar(a, n);
    cout<<"\nArreglo despues de ordenar: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}