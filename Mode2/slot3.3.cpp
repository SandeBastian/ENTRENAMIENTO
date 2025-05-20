//Busqueda sin Usando While 25-I sotelo
#include <iostream>
using namespace std;
int main () {
    int n, valBus, i;
    bool Encontrado=false;
    do {
        cout<<"Ingrese el tamano del arreglo: ";
        cin>>n;
    }while(!(n>=1));
    int nota[n];
    for(i=0; i<n; i++) {
        do {
            cout<<"Ingresa la Nota ["<<i<<"] :";
            cin>>nota[i];
        }while(nota[i]<1||nota[i]>20);
    }
    cout<<"Ingrese el valor a buscar: ";
    cin>>valBus;
    i=0;
    while(i<n&&!Encontrado){
        cout<<"Nota ["<<i<<"] :"<<nota[i]<<endl;
        if(nota[i]==valBus) {
            cout<<endl;
            cout<<"Nota encontrada: "<<endl;
            cout<<"Nota ["<<i<<"]: "<<nota[i];
            Encontrado=true;
        }else {
            i++;
        }
    }
    if(Encontrado) {

    }else {
        cout<<"La nota no se ha podido encontrar"<<endl;
    }
    return 0;
}
