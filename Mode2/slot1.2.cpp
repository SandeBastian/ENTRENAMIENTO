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
int main(){
    int i,j,n,aux;
    do{
        cout<<"Ingrese el # de empleados N="; cin>>n;
    }while(!(n>0));

    //Crear los arreglos
    int Cod[n],Ind[n];
    float Sueldo[n];
    //Ingreso de datos
    for(i=0; i<n; i++){
        cout<<"Ingrese datos del empleado #"<<(i+1)<<endl;
        do{
            cout<<"Codigo:"; cin>>Cod[i];
        }while(!(100<=Cod[i] && Cod[i]<=999));
        do{
            cout<<"Sueldo:"; cin>>Sueldo[i];
        }while(!(Sueldo[i])>0);
        Ind[i]=i;
    }

    //Ordenamiento indexado
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(Sueldo[Ind[i]]<Sueldo[Ind[j]]){
                aux=Ind[i];
                Ind[i]=Ind[j];
                Ind[j]=aux;
            }
        }
    }
    //Presentacion
    for(i=0; i<n; i++){
        cout<<Cod[Ind[i]]<<"\t"<<Sueldo[Ind[i]]<<"\t"<<Ind[i]<<endl;
    }
    return 0;
}