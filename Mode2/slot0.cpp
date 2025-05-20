#include <iostream>
using namespace std;
int main() {
    //Arreglo a
    int a[4]; //Declaramos tamaño de arreglo sin elementos, de TIPO ENTERO
    for(int i=0;i<4;i++) {
        cout<<"Ingrese el elemento "<<i<<": ";
        cin>>a[i];
    }
    for(int i=0;i<4;i++) {
        cout<<a[i]<<" ";
    }

    cout<<"\n";
    //Arreglo b
    int b[]={3,2,5,4}; //Declaramos un arreglo TIPO ENTERO
    for(int i=0;i<4;i++) {
        cout<<"b["<<i<<"]: "<<b[i]<<" Memoria &b[i]: "<<&b[i]<<endl;
    }
    cout<<"\n";

    //Arreglo c
    double c[]={1.1,2.45,1.3,3.0};
    for(int i=0;i<4;i++) {
        cout<<"c["<<i<<"]: "<<c[i]<<" Memoria &c[i]: "<<&c[i]<<endl;
    }
    return 0;
}