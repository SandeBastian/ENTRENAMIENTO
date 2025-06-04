#include <iostream>
using namespace std;
int main() {
    char oracion[51];
    int cont=0, i=0;
    cout<<"Ingrese una oracion: "<<endl;
    cin.getline(oracion,51);
    if(oracion[0]!= ' ') {
        cont++;
    }
    i=1;
    while (oracion[i]!='\0') {
        if(oracion[i]!=' ' && oracion[i-1]==' ') {
            cont++;
        }
    }
}