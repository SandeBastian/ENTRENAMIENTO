/*
Tarea 27: Algoritmo para determinar cuantas palabras de una
oración tienen una longitud dada
*/
#include <iostream>
using namespace std;

int main() {
    char oracion[100];
    int n;
    cout << "Ingrese una oracion: ";
    cin.getline(oracion, 100);
    cout << "Buscar palabras con longitud: ";
    cin >> n;

    int i = 0, cont = 0;
    while (oracion[i] != '\0') {
        while (oracion[i] == ' ' && oracion[i] != '\0') i++;
        int longitud = 0;
        while (oracion[i] != ' ' && oracion[i] != '\0') {
            longitud++;
            i++;
        }
        if (longitud == n) cont++;
    }

    cout << "Hay " << cont << " palabra/s con esa longitud" << endl;
    return 0;
}
