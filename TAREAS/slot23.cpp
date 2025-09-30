/*
Tarea 24: Algoritmo para contar las vocales de una oración
*/
#include<iostream>
using namespace std;
int main(){
    char oracion[30];
    int i, cont=0;
    cout<<"Ingrese una oracion: ";
    gets( oracion);
    i=0;
    while(oracion[i]!='\0') {
        oracion[i]=toupper(oracion[i]);
        if (oracion[i]=='A'||oracion[i]=='E'||oracion[i]=='I'||oracion[i]=='O'||oracion[i]=='U') {
            cont++;
        }
        i++;
    }
    cout<<"Tiene "<<cont<<" vocal/es"<<endl;
    return 0;
}