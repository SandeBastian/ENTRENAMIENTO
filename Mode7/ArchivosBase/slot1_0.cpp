//Crea un archivo y guarda codigo y nombre*/
//Crear ARCHIVO TXT y MODIFICARLO en CADA EJECUCION

/*Primera Variante trabaja con
    if (YES) { Ingresa Datos }
        else { Error } */
#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[101];
int main() {
    int n, cod;
    Cadena nomb;
    cout << "Ingrese el nro de elementos: ";
    cin>>n;
    ofstream sal;
    sal.open("Datos1.txt");
    if(sal){
        for(int i=0;i<n;i++){
            cout<<"Dato ("<<i+1<<")"<<endl;
            cout<<"Ingrese el Codigo ("<<i+1<<"): "<<endl; cin>>cod;
            cout<<"Ingrese el Nombre Completo ("<<i+1<<"): "<<endl; cin>>nomb;
            sal<<cod<<'\t'<<nomb<<endl;
        }

    }else{
        cout<<"Error al abrir el archivo"<<endl;
    }
    sal.close();
    cout<<"Proceso terminado..."<<endl;

    return 0;
}