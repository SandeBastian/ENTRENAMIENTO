//ELIMINACION INDEXADA??
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
    int m,i, j, valEl;
    do {
        cout<<"Ingrese el tamano m (m>0): ";
        cin>>m;
        if(m<=0) cout<<"Error. Valor no positivo\n";
    }while(m<=0);
    int num[m];
    for(i=0; i<m; i++) {
        do {
            cout<<"Ingresa Nota["<<i<<"]: ";
            cin>>num[i];
            if(num[i]<0||num[i]>20) cout<<"Error. Nota no Valida\n";
        }while(num[i]<0||num[i]>20);
    }
    cout<<"Ingrese la num a eliminar: ";
    cin>>valEl;
    //-------------
    cout<<"\nAntes de la eliminacion: "<<endl;
    cout<<"Num["<<i<<"]: { ";
    for(i=0; i<m; i++) cout<<num[i]<<" ";
    cout<<"}"<<endl;
    //-------------
    i=0;
    while(i<m) {
        if(num[i]==valEl) {
            j=i; //debe estar  dento del if para que cumpl con la funcion de i pero de manera temporal
            while(j<m-1){
                num[j]=num[j+1];
                j++;
            }
            m--; //si se repite disminuye m e itera la siguiente
        }else {
            i++;
        }
    }
    //-------------
    cout<<"\nAntes de la eliminacion: "<<endl;
    cout<<"Num["<<i<<"]: { ";
    for(i=0; i<m; i++) cout<<num[i]<<" ";
    cout<<"}"<<endl;
    //-------------

    return 0;
}