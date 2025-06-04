#include<iostream>
using namespace std;
typedef char cadena[201];
int main() {
    cadena oracion;
    cout<<"Escribe una oracion: "<<endl;
    cin.getline(oracion,20); //Tambien gets(oracion);
    int i=0;
    while (oracion[i]!='\0') {
        i++;
    }
    cout<<"La longitud de la oracion es: "<<i<<endl;
    return 0;
}
