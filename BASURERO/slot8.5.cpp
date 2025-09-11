/*Tarea 8.5: Notas menores que el promedio
 */
#include <iostream>
using namespace std;
int main () {
    int n, suma=0, prom, cont=0;
    do {
        cout<<"Ingrese la cantidad de notas: ";
        cin>>n;
    }while (n<0);
    int nota[n];
    for (int i=0;i<n;i++) {
        do {
            cout<<"Ingrese Nota["<<i+1<<"]: ";
            cin>>nota[i];
        }while (nota[i]<0||nota[i]>20);
        suma=suma+nota[i];
    }
    prom=suma/n;
    cout<<"Notas menores al Promedio: ";
    for (int i=0;i<n;i++) {
        if (nota[i]<prom) {
            cout<<nota[i]<<" ";
            cont++;
        }
    }
    cout<<'\n'<<"Cantidad de notas menores al promedio: "<<cont<<endl;
    return 0;
}
