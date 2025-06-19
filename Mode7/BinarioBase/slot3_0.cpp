/* CODIGO QUE GENERA UN ARCHIVO BINARIO, SU MANERA DE CREARLO NECESITA
"::binary" Y EN SU LLAMADO TAMBIEN CREO, EL CODIGO A CONTINUANCION*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n, num;
    do{
        cout << "Ingrese el numero de indices: ";
        cin >> n;
    }while(!(n>0));

    // Crear el archivo binario de salida

    ofstream Binario;  //ofstream XXX;

    Binario.open("zlot.dat", ios::binary); //XXX.open( )

    if (!Binario) {  //( !XXX )
        cout<<"Error de apertura para escritura..."<<endl;
    }else{
        for (int i = 0; i < n; i++) {
            cout << "Ingrese el num " << i + 1 << ": ";
            cin >> num;
            Binario.write((char*)&num, sizeof(num)); //XXX.write( )
        }
        cout<<"Proceso terminado..."<<endl;
        // Cerrar el archivo
        Binario.close(); //XXX.close( )
    }
    return 0;
}