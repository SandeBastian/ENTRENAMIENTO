/*LEER UN ARCHIVO  zlot.dat Y AUMENTAR EN 1 LOS VALORES NUMERICOS
ALMACENADOS EN EL ARCHIVO*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int indiceLect;
    int i,n;
    //Creando la variable archivo de entrada
    fstream BinarioLect;
    //Apertura del archivo para lectura
    BinarioLect.open("zlot.dat");
    if(!BinarioLect){
        cout<<"Error al abrir el archivo para lectura...";
    }
    else{
        //nos ubicamos al final del archivo de lectura
        BinarioLect.seekg(0, BinarioLect.end);

        //determinar el numero de registros alamcenados
        n=BinarioLect.tellg()/sizeof(indiceLect);

        //nos ubicamos al inicio del archivo
        BinarioLect.seekg(0, BinarioLect.beg); //o ent.seekg(0);

        for(i=0; i<n; i++){
            //Nos ubicamos en la posicion del registro a leer
            BinarioLect.seekg(i*sizeof(indiceLect));
            if(BinarioLect.read((char*)&indiceLect, sizeof(indiceLect))){
                indiceLect=indiceLect+1;

                //ubicarnos en la posicion del registro para escribir
                BinarioLect.seekp(i*sizeof(indiceLect));
                BinarioLect.write((char*)&indiceLect, sizeof(indiceLect));
            }
        }
        BinarioLect.close();
    }
    return 0;
}