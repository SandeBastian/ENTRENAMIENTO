/*Ejemplo 3:
Para un conjunto de N empleados se desea almacenados:
Codigo (entero de 3 digitos) y sueldo (real positivo).
Luego ordenar la informacion en forma decreciente respecto
al sueldo
N=6
Codigo	Sueldo	Ind
100		2500	0
200		1800	1
300		2800	2
400		1900	3
500		3500	4
600		2800	5

Salida:
Codigo	Sueldo	Ind
500		3500	4
300		2800	2
600		2800	5
100		2500	0
400		1900	3
200		1800	1*/
#include <iostream>
using namespace std;
int main() {
    int i,j,n,aux;
    do{
        cout<<"Ingrese el # de empleados N="; cin>>n;
    }while(!(n>0));

    //Crear los arreglos
    int cod[n],ind[n];
    float sueldo[n];

    for(i=0; i<n; i++) {
        do {
            cout<<"Cod ["<<i<<"]: ";
            cin>>cod[i];
        }
        while(cod[i]<100||cod[i]>999);
        do {
            cout<<"Sueldo ["<<i<<"]: ";
            cin>>sueldo[i];
        }while(sueldo[i]<=0);
        ind[i]=i;
    }
    //ordenamiento idezado
    //como es decreciente i tomara el mayor valor y j el menor
    //i con cada j hasta j=n-1
    for(i=0; i<n-1;i++)
        for(j=i+1;j<n; j++) {
            if(sueldo[ind[i]]<sueldo[ind[j]]) {
                aux=ind[i];
                ind[i]=ind[j];
                ind[j]=aux;
            }
        }
    cout<<"Codigo\tSueldo\tInd"<<endl;
    for(i=0; i<n; i++) {
        cout<<cod[ind[i]]<<"\t"<<sueldo[ind[i]]<<"\t"<<ind[i]<<endl;
    }
    return 0;
}