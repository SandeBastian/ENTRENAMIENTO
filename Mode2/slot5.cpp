//Eliminar elemento de cierta posicion
#include <iostream>
using namespace std;
int main() {
    int n,valBus, i, pos=0;

    do {
        cout<<"Ingrese el tamano del arreglo: ";
        cin>>n;
    }while(!(n>=1));

    int nota[n];
    for(i=0; i<n; i++) {
        do {
            cout<<"Ingrese el valor de nota ["<<i<<"]: ";
            cin>>nota[i];
        }while(nota[i]<0||nota[i]>20);
    }

    cout<<"\nIngrese la nota a eliminar: ";
    cin>>valBus;
    while(pos<n) {
        if(nota[pos]==valBus){
            break;
        }
        pos++;
    }
    //Interrumpo el algoritmo para Imprimir el Arreglo INICIAL
    cout<<"\nArreglo antes de la eliminacion: "<<endl;
    cout<<"Nota ["<<n<<"] : {";
    for(i=0;i<n;i++) {
        cout<<nota[i]<<" ";
    }
    cout<<"}"<<endl;
    //Hago Impresion dey continuo con el algoritmo
    while(pos<n-1) {
        nota[pos]=nota[pos+1];
        pos++;
    }
    n--;
    cout<<"\nArreglo despues de la eliminacion: "<<endl;
    cout<<"Nota ["<<n<<"] : {";
    for(i=0;i<n;i++) {
        cout<<nota[i]<<" ";
    }
    cout<<"}"<<endl;
    return 0;
}
