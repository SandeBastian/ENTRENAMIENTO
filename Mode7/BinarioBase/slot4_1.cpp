#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int r;
    //Creando la variable archivo de entrada
    ifstream Binario;

    //Apertura del archivo para lectura
    Binario.open("zlot.dat");
    if(!Binario){
        cout<<"Error al abrir el archivo para lectura...";
    }
    else{
        while(!Binario.eof()){
            if(Binario.read((char*)&r, sizeof(r))){
                cout<<r<<endl;
            }
        }
        Binario.close();
    }
    return 0;
}