/* Determina la cantidad de vocales de una oracion.
asuma que no hay tildes.*/
#include <iostream>
using namespace std;
typedef char cadena[201];
int main() {
    cadena oracion;
    cout<<"Escriba la oracion: "<<endl;
    cin.getline(oracion,201);
    int i=0, cont=0;
    while(oracion[i] != '\0') {
        switch (oracion[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': i++;
        }
    }
}