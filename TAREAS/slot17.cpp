/*
Tarea 17: Busqueda Binaria.
*/
#include <iostream>
using namespace std;
int main() {
    int n, val;
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

    for (int i=1;i<n;i++) {
        for (int j=0;j<n-i;j++) {
            if (num[j]>num[j+1]) {
                aux=num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
            }
        }
    }
    cout<<"Ingrese el numero que desea buscar: ";
    cin>>val;

    int inicio = 0;
    int fin = n-1;
    int pos=0;
    bool esta = false;
    int cont=0;
    while (!esta && inicio<=fin) {
        int medio = (inicio + fin)/2;
        if (val==num[medio]) {
            esta = true;
            pos = medio;
        }else {
            if (val<num[medio]) {
                fin=medio-1;
            }else {
                inicio=medio+1;
            }
        }
        cont++;
    }
    cout<<"Num = { ";
    for (int i=0;i<n;i++) {
        cout<<num[i]<<" ";
    }
    cout<<"}"<<endl;
    if (esta) cout<<val<<" esta en la posicion "<<pos<<endl;
    else cout<<val<<" no esta en la posicion "<<pos<<endl;
    cout<<"Numero de Busquedas: "<<cont<<endl;
    return 0;
}
