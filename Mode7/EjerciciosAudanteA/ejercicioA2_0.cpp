/*
sin emplear la funcion eof()
Leer el archivo de texto llamado "NotasA.txt" (que ya existe), que
contiene la siguiente información:

Codigo Nombre Completo PC1 PC2 PC3
100 TORRES-ALVA-JUAN 11 08 10
200 CAMPOS-RUIZ-JOSE 08 09 11
300 LOPEZ-QUISPE-ANA 11 13 10
*/
//Leer archivos con guiones
#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[51];
int main(){
    int cod, pc1, pc2, pc3;
    Cadena nombre;

    // Crear la variable de flujo de salida (archivo de escritura)
    ifstream Archivo;
    Archivo.open("NotasA.txt");
    if(!Archivo) {
        cout << "Error de apertura para lectura..." << endl;
    }else{
        while(Archivo){
            // Leer los datos del archivo
            if(Archivo >> cod >> nombre >> pc1 >> pc2 >> pc3){
                // Mostrar los datos leídos
                cout << cod << "\t" << nombre << "\t" << pc1 << "\t" << pc2 << "\t" << pc3 << endl;
            }
        }
    }
    Archivo.close();
    cout<< "Proceso terminado..." << endl;

}