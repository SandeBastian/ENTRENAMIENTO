/*Lectura de Archivo y si quieres usas los recursos
dados en dicho archivo, esta parte solo la limito a lectura*/
#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[101];
int main(){
    int cod;
    Cadena nomb;
    //Crear la variable de flujo de entrada (archivo de lectura)
    ifstream Archivo;
    //Abrir el archivo para lectura
    Archivo.open("Datos1.txt");
    if(!Archivo){
        cout<<"Error de apertura para lectura...";
    }
    else{
        //while(ent){
        while(!Archivo.eof()){
            if(Archivo>>cod>>nomb){
                cout<<cod<<"\t"<<nomb<<endl;
            }
        }
        Archivo.close();
    }
    return 0;
}