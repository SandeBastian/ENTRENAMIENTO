/*
Tarea 28: Algoritmo para determinar cuantas veces ocurre una palabra dada en un oración
*/
#include <iostream>
using namespace std;

int main() {
    char oracion[100];
    string palabra, aux="";
    cout << "Ingrese una oracion: ";
    cin.getline(oracion, 100);
    cout << "Ingrese la palabra: ";
    cin>>palabra;
    int i=0, veces=0;
    while (oracion[i]!='\0') {
        if (oracion[i]!=' '&&oracion[i+1]!=' ') {
            aux=aux+oracion[i];
        }else {
            if (palabra==aux) {
                veces++;
            }
            aux="";
        }
        i++;
    }
    cout<<"\nLa palabra ocurrre "<<veces<<endl;
    return 0;
}