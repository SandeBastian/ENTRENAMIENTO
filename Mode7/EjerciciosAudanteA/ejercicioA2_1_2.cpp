/*
Crear un programa que permita adicionar datos al archivo DATOS.TXT
(que ya existe): ios::app
Codigo Nombre Completo PC1 PC2 PC3
100 TORRES-ALVA-JUAN 11 08 10
200 CAMPOS-RUIZ-JOSE 08 09 11
300 LOPEZ-QUISPE-ANA 11 13 10
Vamos a adiciona:
400 BARRIOS-CAMPOS-LUIS 13 08 10
*/
#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[51];
int main(){
    int cod, pc1, pc2, pc3;
    Cadena nomb;

    // Crear la variable de flujo de salida (archivo de escritura)
    ofstream sal;
    sal.open("DATOS.TXT", ios::app);
    if(!sal) {
        cout << "Error de apertura para escritura..." << endl;
    }else{

        cout<<"Codigo: "; cin >> cod;
        cout<<"Nombre completo: "; cin>>nomb;
        cout<<"PC1: "; cin>>pc1;
        cout<<"PC2: "; cin>>pc2;
        cout<<"PC3: "; cin>>pc3;
        sal<< cod << "\t" << nomb << "\t" << pc1 << "\t" << pc2 << "\t" << pc3 << endl;

    }
    sal.close();
    cout<< "Proceso terminado..." << endl;

}