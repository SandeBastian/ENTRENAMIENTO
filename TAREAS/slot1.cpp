/*Tarea 1: Algoritmo para determinar el volumen de un cilindro
 */
#include <iostream>
using namespace std;
int main() {
    float r, h, volumen;
    cout<<"Volumen de un Cilindro"<<endl;
    cout<<"Ingrese el Radio: "; cin>>r;
    cout<<"Ingrese la Altura: "; cin>>h;
    volumen=3.141592*r*r*h;
    cout<<"El Volumen es: "<<volumen<<endl;
    return 0;
}