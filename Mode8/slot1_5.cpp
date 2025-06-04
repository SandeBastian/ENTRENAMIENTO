#include <iostream>
#include <string.h>
using namespace std;
int main () {
    char oracion [50];
    int contPal=0, i=0;
    cout<<"Ingrese una oracion: "<<endl;
    gets(oracion);
    if (oracion[0]!=' ') {
        contPal++;
        i=1;
    }
    while (oracion[i]!='\0') {
        if(oracion[i]!=' '&& oracion[i-1]==' ') {
            contPal++;
        }
        i++;
    }
    cout<<"La oracion contine: "<<contPal<<" palabras"<<endl;
}