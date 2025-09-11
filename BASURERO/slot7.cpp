/*Tarea 7: algoritmo que lee un número entero
 positivo y determina cuántas cifras diferentes tiene.
 */
#include <iostream>
using namespace std;
int main () {
    int n, aux, r, contDif=0;
    do {
        cout<<"Ingrese n: ";
        cin>>n;
        if (n<0) {
            cout<<"Error. Valor no valido"<<endl;
        }
    }while (n<0);
    for (int i=0; i<10; i++) {
        aux=n;   //Debes reiniciar el aux para que el bucle for recorra el numero buscando (0, 1 ,3,...,9)
        bool flag=false;
        while (aux>0) {
            r=aux%10;
            if (r==i) {
                flag=true;
            }
            aux=aux/10;
        }
        if (flag) {
            contDif++;
        }
    }
    cout<<"Cantidad de cifras distintas: "<<contDif<<endl;
}