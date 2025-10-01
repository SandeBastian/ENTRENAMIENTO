/*
Tarea 16: Desarrollar un algoritmo que reciba n números enteros no necesariamente ordenados y
con algunos valores repetidos 2 o más veces, y determine que valor ocurre más veces y cuantas
veces ocurre. Si dos o mas valores empatan en el máximo de ocurrencias, indicar que hay empate
y cuantas veces ocurren lo valores empatados.

Sugerencia: ordenar primero los números de menor a mayor aplicando el método de burbuja.
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

    for (int i=1;i<n;i++) {
        for (int j=0;j<n-i;j++) {
            if (num[j]>num[j+1]) {
                aux=num[j];
                num[j]=num[j+1];
                num[j+1]=aux;
            }
        }
    }

    int cont;
    int aparMax=0;
    int numMax=0;
    int cantModa=0;
    for (int i=0;i<n-1;i++) {
        cont=1;
        for (int j=i+1;j<n;j++) {
            if (num[i]==num[j]) {
                cont++;
            }else {
                break;
            }
        }
        if (cont>aparMax) {
            aparMax=cont;
            cantModa=1;
            numMax=num[i];
        }else if (cont==aparMax) {
            cantModa++;
        }
    }

    cout<<"Num = {";
    for (int i=0;i<n;i++) {
        cout<<num[i]<<" ";
    }
    cout<<"}"<<endl;
    if (cantModa==1) {
        cout<<"El valor ["<<numMax<<"] ocurre "<<aparMax<<" veces."<<endl;
    }else {
       cout<<"El maximo de ocurrencias "<<aparMax<<" se repite "<<cantModa<<" veces."<<endl;
    }
    return 0;
}
