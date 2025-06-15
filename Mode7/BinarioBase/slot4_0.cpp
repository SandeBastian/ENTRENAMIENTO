#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //Creando la variable archivo de entrada
    ifstream Binario;

    //Apertura del archivo para lectura
    Binario.open("zlot.dat", ios::binary);
    int indiceLect;
    if (!Binario) {
        cout << "Error al abrir el archivo para lectura...\";" << endl;
    }else{
        while(Binario){
            if(Binario.read((char*)&indiceLect, sizeof(indiceLect))) {
                cout<<indiceLect<<endl;
            }
        }
        Binario.close();
    }
}