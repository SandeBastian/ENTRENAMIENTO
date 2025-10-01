/*Tarea 10: Algoritmo que lee un número entero positivo y determina cuantos dígitos diferentes
 tiene y cuantas veces ocurre cada dígito diferente
 */
#include <iostream>
using namespace std;
int main() {
    int n, r, cant=0, i;
    do {
        cout<<"Ingrese un numero entero positivo: ";
        cin>>n;
    }while (n<0);
    int cont[10]={};
    while (n>0) {
        r=n%10;
        n=n/10;
        cont[r]++;
    }
    for (i = 0; i < 10; i++) {
        if (cont[i]>0) {
            cant++;
        }
    }
    cout<<"El numero tiene "<<cant<<" digito/s diferente/s"<<endl;
    for (i = 0; i < 10; i++) {
        if (cont[i]>0) {
            cout<<i<<" aparece "<<cont[i]<<" vez/veces"<<endl;
        }
    }
    return 0;
}