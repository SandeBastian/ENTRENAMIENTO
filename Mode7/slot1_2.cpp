#include <iostream>
#include <fstream>
using namespace std;
typedef char cadena[51];
int main () {
    int cod, n=2;
    cadena name;
    ofstream sal;
    sal.open("datos1.txt");
    if(!sal) {
        cout<<"Error de apertura..."<<endl;
    }else {
        for(int i=0; i<n; i++) {
            cout<<"Dato Nro "<<i<<":"<<endl;
            cout<<"Codigo: "; cin >> cod;
            cout<<"Nombre completo: "; cin>>name;
            sal<<cod<<"\t"<<name<<endl;
        }
        sal.close();
        cout<<"Proceso terminado..."<<endl;
    }
}
