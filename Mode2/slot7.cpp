/*Ejemplo 1:
Se desea alamacenar en un arreglo N datos enteros. Luego dado un dato x
eliminar todos aquellos que son iguales a x.
Ejemplo:
N=6
Datos: 4, 7, 3, 4, 4, 7
x: 4
Despues de la eliminacion:
Salida: 7, 3, 7*/
#include <iostream>
using namespace std;
int main () {
    int n, i, j, valEl;
    do {
        cout<<"Ingrese el tamano del arreglo: ";
        cin>>n;
    }while(!(n>0));
    int nota[n];
    for(i=0; i<n; i++) {
        do {
            cout<<"Ingrese Nota["<<i<<"]: ";
            cin>>nota[i];
        }while(nota[i]<1||nota[i]>20);
    }

    cout<<"Ingrese el valor a eliminar: ";
    cin>>valEl;

    //Imprime Array antiguo
    cout<<"_________________"<<endl;
    cout<<"El arreglo antes de la eliminacion : "<<endl;
    cout<<"Arr ["<<n<<"]: { ";
    for(i=0;i<n;i++) {
        cout<<nota[i]<<" ";
    }
    cout<<"}"<<endl;
    //Termina de imprimir, empieza a eliminar valor a eliminar en todas las pos

    //Se hace de izquierda a derecha 1 por 1 cada 1 con desplazamiento hacia la izq y n=n-1
    i=0;
    while(i<n) {
        if(nota[i]==valEl) {
            j=i;
            while(j<n-1) {
                nota[j]=nota[j+1];
                j++;
            }
            n--; //tras cada eliminacion de 1 elemento debemos disminuir el tamaño visible por el usuario
        }else {
            i++; //Esto hace que recorra hasta n pero solo sucede si no se elimina
        }        //
    }
    //Reutilizado de 7.2
    cout<<"\nAntes de la eliminacion: "<<endl;
    cout<<"Num["<<i<<"]: { ";
    for(i=0; i<n; i++) cout<<nota[i]<<" ";
    cout<<"}"<<endl;

    return 0;
}