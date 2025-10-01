/*
Tarea 15: Algoritmo burbuja mejorado
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

    int aux=0;
    int cont1=0;
    int cont2=0;

    for (int i=1;i<n;i++) {
        bool flag = false;
        for (int j=0;j<n-i;j++) {
            cont2++;
            if (num[j]>num[j+1]) {
                aux=num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
                cont1++;
                flag = true;
            }
        }
        if (!flag) {
            i = n;
        }
    }

    cout<<"Num = {";
    for (int i=0;i<n;i++) {
        cout<<num[i]<<" ";
    }
    cout<<"}"<<endl;
    cout<<"Cantidad de intercambios: "<<cont1<<endl;
    cout<<"Cantidad de comparaciones: "<<cont2<<endl;
    return 0;
}
