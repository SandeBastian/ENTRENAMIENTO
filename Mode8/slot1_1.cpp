#include<iostream>
using namespace std;
typedef char cadena[100];
int main() {
    cadena caracter;
    cout<<"Ingrese un caracter: ";
    gets(caracter);
    cout<<"El Caracter es: "<<caracter<<endl;
    int simboloInt = caracter[0];
    cout<<"El simbolo es: "<<simboloInt<<endl;
    return 0;
}

