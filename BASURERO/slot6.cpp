/* Tarea 6: algoritmo que recibe un numero entero positivo y construye
un nuevo número con las cifras invertidas  del numero ingresado
*/
#include <iostream>
using namespace std;
int main () {
    int n, aux, r,inv=0;
    do {
        cout<<"Ingresar un numero (entero positivo): ";
        cin>>n;
    }while (n<0);
    aux=n;
    while (aux>0) {
        r=aux%10;
        aux=aux/10;
        inv=inv*10+r;
    }
    cout<<"Numero Invertido: "<<inv<<endl;
    return 0;
}