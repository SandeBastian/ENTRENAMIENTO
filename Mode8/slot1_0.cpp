#include <iostream>
#include <cstring>
using namespace std;
typedef char Cadena[10];
int main() {
    Cadena oracion;
    cout<<"Escribe una oracion: "<<endl;
    gets(oracion); //Tanto para Char y typedef char el gets sirve
    cout<<"La oracion ingresada es: "<< oracion << endl;

    return 0;
}