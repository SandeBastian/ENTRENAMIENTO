/*
Tarea 25: Algoritmo para contar cuantas palabras tiene una oración
Desarrollar un algoritmo que lea una oración y determine cuántas palabras tiene.

Estrategia 2:  detectar el final de cada palabra.
Una palabra termina si el caracter es diferente de blanco y el siguiente es blanco o nulo.

*/
#include <iostream>
using namespace std;
int main() {
    char oracion[100];
    int i=0;
    cout<<"Ingrese la Oracion: ";
    cin.getline(oracion,100);
    int cont=0;
    while(oracion[i]!='\0') {
        if (oracion[i]!=' '&&oracion[i+1]==' ') {
            cont++;
        }
        i++;
    }
    if (oracion[i]=='\0'&&oracion[i-1]!=' ') {
        cont++;
    }
    cout<<"Hay "<<cont<<" palabras"<<endl;
    return 0;
}