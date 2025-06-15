#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[101];
int main () {
    int n, cod;
    Cadena name;
    cout << "Ingrese el nro de elementos: ";
    cin>>n;
    ofstream sal;
    sal.open("Datos1.txt");
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
