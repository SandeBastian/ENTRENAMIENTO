/*Contadores para un conjunto de valores de un arreglo para determinar cuando valores repetidos
hay repetidos oslo muestra los que aparecen 1 vez
Ejemplo 2:
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
int main() {
    int n, i, edad;
    int cont[26];
    do {
        cout<<"Ingrese la cantidad de valores: ";
        cin>>n;
        if(n<=0) cout<<"Error. Valor no positivo";
    }while(n<=0);
    for(i=15; i<=40; i++) {
        cont[i-15]=0;
    }
    //-----Contador-----
    for(i=0; i<n; i++) {
        do {
            cout<<"Ingrese la edad "<<i+1<<": ";
            cin>>edad;
        }while(edad<15||edad>40);
        cont[edad-15]++;
    }
    //-----Acaba Contador-----
    for(i=15; i<=40; i++) {
        if(cont[i-15]>0) {
            cout<<i<<"\t"<<cont[i-15]<<endl;
        }
    }
    return 0;
}