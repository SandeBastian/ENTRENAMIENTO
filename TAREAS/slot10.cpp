/*Tarea 9: Algoritmo para leer n notas y
 determinar cuantas veces ocurre cada nota
 */
#include <iostream>
using namespace std;
int main() {
    int n, nota, cant=0;
    do {
        cout<<"Ingrese n: ";
        cin>>n;
    }while (n<0);
    int cont[21]={0};
    for (int i=0;i<n;i++) {
        do {
            cout<<"Numero ["<<i+1<<"]: ";
            cin>>nota;
        }while (nota<0||nota>20);
        cont[nota]++;
    }
    cout<<"Conteo de notas: "<<endl;
    for (int i=0;i<=20;i++) {
        if (cont[i]>0) {
            cout<<i<<" ocurre "<< cont[i]<<" vez/veces"<<endl;
        }
    }
    return 0;
}