/*
Tarea 13: Desarrollar el algoritmo de fuerza bruta para ordenar de menor a mayor los
elementos de un arreglo de números enteros
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cout<<"Ingrese la cantidad de numeros: ";
        cin>>n;
        if (n<0) cout<<"Error. Numero no valido"<<endl;
    }while (n<0);
    int num[n];
    for (int i=0;i<n;i++) {
        do{
            cout<<"Ingrese un numero ["<<i+1<<"]: ";
            cin>>num[i];
        }while (num[i]<0);
    }
    int pos=0, menor, posMen, aux;
    for (pos=0;pos<n-1;pos++) {
        for (int i=pos;i<n;i++) {
            if (i==pos) {
                menor=num[i];
                posMen=i;
            }else {
                if (num[i]<menor) {
                    menor=num[i];
                    posMen=i;
                }
            }
            aux=num[pos];
            num[pos]=num[posMen];
            num[posMen]=aux;
        }
    }
    cout<<"Num = {";
    for (int i=0;i<n;i++) {
        cout<<num[i]<<" ";
    }
    cout<<"}"<<endl;
    return 0;
}