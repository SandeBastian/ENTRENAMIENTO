/*
Crear un archivo de texto llamado "DATOS.TXT", que contenga la
siguiente información:
Codigo Nombre Completo PC1 PC2 PC3
100 TORRES-ALVA-JUAN 11 08 10
200 CAMPOS-RUIZ-JOSE 08 09 11
300 LOPEZ-QUISPE-ANA 11 13 10
*/
#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[51];
int main(){
    int cod, pc1, pc2, pc3;
    Cadena nomb;

    int n;
    cout<< "Ingrese el nro de elementos: " << endl;
    cin>>n;
    // Crear la variable de flujo de salida (archivo de escritura)
    ofstream sal;
    sal.open("DATOS.TXT");
    if(!sal) {
        cout << "Error de apertura para escritura..." << endl;
    }else{
        for(int i=0;i<n;i++){
            cout<<"Dato #"<<i<<endl;
            cout<<"Codigo: "; cin >> cod;
            cout<<"Nombre completo: "; cin>>nomb;
            cout<<"PC1: "; cin>>pc1;
            cout<<"PC2: "; cin>>pc2;
            cout<<"PC3: "; cin>>pc3;
            sal<< cod << "\t" << nomb << "\t" << pc1 << "\t" << pc2 << "\t" << pc3 << endl;
        }
    }
    sal.close();
    cout<< "Proceso terminado..." << endl;

}