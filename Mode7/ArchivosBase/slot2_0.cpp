/*Lectura de Archivo y si quieres usas los recursos
dados en dicho archivo, esta parte solo la limito a lectura*/
#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[101];
int main(){
    int cod;
    Cadena name;
    //Crear la variable de flujo de entrada (archivo de lectura)
    ifstream ent;
    //Abrir el archivo para lectura
    ent.open("Datos1.txt");
    if(!ent){
        cout<<"Error de apertura para lectura...";
    }
    else{
        //while(!ent.eof()){
        while(ent){
            if(ent>>cod>>name){
                cout<<cod<<"\t"<<name<<endl;
            }
        }
        ent.close();
    }
    return 0;
}