/*Tarea 12: Algoritmo para eliminar de un arreglo las notas que sean menores al promedio de las notas.
*/
#include <iostream>
using namespace std;
int main () {
    int n, suma=0, cont=0;
    float prom;
    do {
        cout<<"Ingrese la cantidad de notas: ";
        cin>>n;
    }while (n<0);
    int nota[999]={0};
    int i=0;
    for (i = 0; i < n; i++) {
        do {
            cout<<"Ingrese Nota["<<i+1<<"]: ";
            cin>>nota[i];
        }while (nota[i]<0||nota[i]>20);
        suma=suma+nota[i];
    }
    cout<<"Notas antes de la eliminacion: { ";
    for (i =0; i<n; i++) {
        cout<<nota[i]<<" ";
    }
    cout<<" }"<<endl;
    prom=suma*1.0/n;
    i=0;
    while (i<n) {
        if (nota[i]<prom) {
            for (int j=i; j<n; j++) {
                nota[j]=nota[j+1];
            }
            n--;
        }else {
            i++;
        }
    }
    cout<<"Promedio: "<<prom<<endl;
    cout<<"Notas despues de la eliminacion: {";
    for (i = 0; i < n; i++) {
        cout<<" "<<nota[i]<<" ";
    }
    cout<<"}"<<endl;
    return 0;
}