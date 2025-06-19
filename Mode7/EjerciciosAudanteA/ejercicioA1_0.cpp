/*Crear un archivo de texto llamado "Notas.txt", que contenga la
siguiente información:
Codigo Nombre Completo PC1 PC2 PC3
100	TORRES ALVA JUAN	11	8	10
200	CAMPOS RUIZ JOSE	8	9	11
300	LOPEZ QUISPE ANA	11	13	10*/
#include <iostream>
#include <fstream>
using namespace std;
typedef char cadena[101];
int main() {
    int cod, pc1, pc2, pc3;
    cadena nombre;
    int n;
    do {
        cout<<"Ingrese el numero de elementos: ";
        cin>>n;
    }while (n<=0);

    ofstream Archivo;
    Archivo.open("Notas.txt");

    if(!Archivo) { //Negacion del flujo
        cout<<"No Hay Flujo de Archivo. Error de Apertura..."<<endl;
    }else {
        for(int i=0; i<n; i++) {
            cout<<"----Notas "<<i+1<<" ----"<<endl;
            cout<<"Codigo: "; cin>>cod;
            cin.ignore();
            cout<<"Nombres y Apellidos: "; cin.getline(nombre,101);
            cout<<"PC1: "; cin>>pc1;
            cout<<"PC2: "; cin>>pc2;
            cout<<"PC3: "; cin>>pc3;
            Archivo<<cod<<"\t"<<nombre<<"\t"<<pc1<<"\t"<<pc2<<"\t"<<pc3<<endl;
        }
        Archivo.close();
        cout<<"Proceso Terminado..."<<endl;
    }
    return 0;
}