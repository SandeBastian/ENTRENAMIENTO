#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream fichero("Agenda.txt");
    string nombre, direccion, telefono;
    bool sigue=true;
    while (sigue) {
        cout<<"Ingrese el nombre: "; getline(cin,nombre);
        if (nombre!="") {
            cout<<"Ingrese direccion: "; getline(cin,direccion);
            cout<<"Ingrese telefono: "; getline(cin,telefono);
            fichero<<nombre<<" "<<direccion<<" "<<telefono<<endl;
        }
        else {
            sigue=false;
        }
    }
    fichero.close();
}