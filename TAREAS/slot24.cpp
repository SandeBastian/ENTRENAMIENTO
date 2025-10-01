/*
Tarea 25: Algoritmo para contar cuantas palabras tiene una oración
Desarrollar un algoritmo que lea una oración y determine cuántas palabras tiene.
Estrategia 1: detectar el inicio de cada palabra
Una palabra empieza cuando el caracter es diferente de blanco y el anterior es blanco. Si el primer caracter
es diferente de blanco Tambien empieza una palabra.

Estrategia 2:  detectar el final de cada palabra.
Una palabra termina si el caracter es diferente de blanco y el siguiente es blanco o nulo.
*/
#include<iostream>
using namespace std;
int main(){
    char oracion[100];
    int i, cont=0;
    cout<<"Ingrese una oracion: ";
    gets(oracion);
    if (oracion[0]!=' ') cont=1;
    while(oracion[i]!='\0') {
        if (oracion[i]!=' '&&oracion[i-1]==' ') cont++;
        i++;
    }
    cout<<"Tiene "<<cont<<" palabra/s"<<endl;
    return 0;
}