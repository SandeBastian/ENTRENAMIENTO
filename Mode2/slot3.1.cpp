//Busqueda secuencial truncada con break 24-II
//Hecha por mi sin la funcion
#include<iostream>
using namespace std;
int main() {
    int n, i, dato;
    cout<<"La cantidad de valores a ingresar: "; cin>>n; //Tamaño de arreglo
    int num[n];
    for(i=0; i<n; i++) {
        cout<<"Ingrese el valor Nro("<<i+1<<"): "; cin>>num[i]; //Declara cada elemento del arreglo
    }
    cout<<"____________________________________________________________"<<endl;
    i = 0; //Error de principiante no es necesario reinciiar variable si en el for ya lo hice
    cout<<"Ingrese el valor que buscara: "; cin>>dato;
    for(i=0; i<n; i++) {
        cout<<"Valor Nro("<<i+1<<"): "<<num[i]<<endl;
        if(dato==num[i]) {
            cout<<"^^^^^^^El Valor buscado es el que esta justo aqui arriba^^^^^^^"<<endl;
            break;
        }
    }
    return 0;
}