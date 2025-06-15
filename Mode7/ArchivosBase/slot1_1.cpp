/*Variante de la slot1 en la que la condicion negativa va primero y la positiva despues
    if (NO) {Error}
        else { Ingreso Datos} */
#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[101];
int main() {
    int n, cod;
    Cadena nomb;
    cout << "Ingrese el nro de elementos: ";
    cin>>n;
    //Creacion de la variable archivo de salida
    ofstream sal;
    //Apertura del archivo para escritura
    sal.open("Datos1.txt");
    if(!sal){
        cout<<"Error de apertura para escritura...";
    }else{
        for(int i=0;i<n;i++){
            cout<<"Dato ("<<i+1<<")"<<endl;
            cout<<"Ingrese el Codigo ("<<i+1<<"): "<<endl; cin>>cod;
            cout<<"Ingrese el Nombre Completo ("<<i+1<<"): "<<endl; cin>>nomb;
            //Escribir en el archivo
            sal<<cod<<'\t'<<nomb<<endl;
        }
        sal.close();
        cout<<"Proceso terminado..."<<endl;
    }
    return 0;
}