/*Tarea 5: Elabore un algoritmo que lea un número entero positivo y
 determine su numero de cifras y cuantas cifras pares e
 impares tiene. asuma que cero es par.
 */
#include <iostream>
using namespace std;
int main() {
    int n, aux, contPar=0, contImp=0, r;
    do {
        cout<<"Ingresa un numero (entero positivo): ";
        cin>>n;
    }while (n<=0);
    aux=n;
    while (aux>0) {
        r=aux%10;
        aux=aux/10;
        if (r%2==0) {
            contPar++;
        }else {
            contImp++;
        }
    }
    cout<<"Numero de cifras: "<<contPar+contImp<<endl;
    cout<<"Numero de cifras pares: "<<contPar<<endl;
    cout<<"Numero de cifras impares: "<<contImp<<endl;
    return 0;
}