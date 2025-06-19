/*APERTURA DE BINARIO SELECCIONANDO LO QUE QUEREMOS LEER*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int indiceLect;
    int i,n;
    //Creando la variable archivo de entrada
    ifstream Binario;
    //Apertura del archivo para lectura
    Binario.open("zlot.dat");
    if(!Binario){
        cout<<"Error al abrir el archivo para lectura...";
    }
    else{
        //nos ubicamos al final del archivo de lectura
        Binario.seekg(0, Binario.end);

        //determinar el numero de registros alamcenados
        n=Binario.tellg()/sizeof(indiceLect);

        //nos ubicamos al inicio del archivo
        Binario.seekg(0, Binario.beg); //o ent.seekg(0);

        for(i=0; i<n; i++){
            if(Binario.read((char*)&indiceLect, sizeof(indiceLect))){
                cout<<indiceLect<<endl;
            }
        }
        Binario.close();
    }
    return 0;
}