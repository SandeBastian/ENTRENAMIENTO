/*Ejemplo 2:
Para un conjunto de N edades en e rango de 15 a 40 anios. Se desea
averiguar el numero de apariciones de cada una de ellas
Ejemplo:
N=6:
Edades: 16, 20, 16, 24, 20, 27
Salida:
Edad	Apariciones
16		2
20		2
24		1
27		1*/
#include <iostream>
using namespace std;
int main(){
    int n,Edad,i;
    do{
        cout<<"Ingrese N="; cin>>n;
    }while(!(n>0));
    //Crear el arreglo
    int Cont[26];//contador de las 26 edades
    //Inicializandp los contadores de edades
    for(i=0; i<26; i++){
        Cont[i]=0;
    }
    //ingreso de datos
    for(i=1; i<=n; i++){
        do{
            cout<<"Ingrese edad #"<<i<<":"; cin>>Edad;
        }while(!(15<=Edad && Edad<=40));
        Cont[Edad-15]++;
    }

    //Presentacion de los datos

    /*
    for(Edad=15; Edad<=40; Edad++){
        if(Cont[Edad-15]>0){  //Aqui como el cont de edad empieza de 15 debes quitarle 15 al iterar
            cout<<Edad<<"\t"<<Cont[Edad-15]<<endl;
        }
    }
     */

    for(Edad=0; Edad<26; Edad++){
        if(Cont[Edad]>0){  //Recuerda que el cont de edad empieza de 0 aqui no hay problema
            cout<<(Edad+15)<<"\t"<<Cont[Edad]<<endl;
        }
    }

    return 0;
}
