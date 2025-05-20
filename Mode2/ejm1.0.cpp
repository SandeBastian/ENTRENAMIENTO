/*
Ejemplo 1:
Para un conjunto N productos, se desea leer su código (entero de 3 dígitos) y la cantidad
solicitada (entero positivo). Sabiendo que los códigos se pueden repetir, presente un
listado donde figure cada código de producto con el total de unidades solicitadas
Ejemplo:
N=6
Código Unidades
100     30
200     80
100     100
300     40
200     50
100     80
Salida:
Código Unidades
100 210
200 130
300 40
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    do {
        cout<<"Ingrese n (n>0): ";
        cin>>n;
        if (n<=0) cout<<"Error. El numero no es positivo."<<endl;
    }while(n<=0);

    int cod[n];
    float uni[n];
    int ind[n];
    int i;

    //VALIDACION
    cout<<"\nIngrese Codigos (100<=Cod<=999) e Ingrese Unidades (Uni>0): "<<endl;
    for(i=0; i<n; i++) {
        do {
            cout<<"cod["<<i<<"]: ";
            cin>>cod[i];
            if(cod[i]<100||cod[i]>999) cout<<"Error. Codigo no valido"<<endl;
        }while(cod[i]<100||cod[i]>999);

        do {
            cout<<"uni["<<i<<"]: ";
            cin>>uni[i];
            if(uni[i]<=0) cout<<"Error. Unidad no valida"<<endl;
        }while(uni[i]<=0);
        ind[i]=i;
    }

    //IMPRIME 1
    cout<<"Tabla 1:"<<endl;
    cout<<"Codigo\tUnidades"<<endl;
    for(i=0; i<n; i++) {
        cout<<cod[i]<<"\t"<<uni[i]<<endl;
    }

    //ELIMINACION Y ACUMULACION INDEXADA PARA UN CONJUNTO DE DATOS LINEA A LINEA
    int j;
    int k;
    for(i=0; i<n-1; i++) {
        j=i+1;
        while(j<n) {
            k=j;
            if(cod[ind[i]]==cod[ind[j]]) {
                uni[ind[i]]=uni[ind[i]]+uni[ind[j]];
                while(k<n-1) {
                    ind[k]=ind[k+1];
                    k++;
                }
                n--;
            }else {
                j++;
            }
        }
    }

    //ORDENAMIENTO BURBUJA PARA ORDENAR MENOR A MAYOR
    int aux;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++){
            if(cod[ind[j]]<cod[ind[i]]) {
                aux=ind[i];
                ind[i]=ind[j];
                ind[j]=aux;
            }
        }
    }

    //IMPRIME 2
    cout<<"\nTabla 2:"<<endl;
    cout<<"Codigo\tUnidades"<<endl;
    for(i=0; i<n; i++) {
        cout<<cod[ind[i]]<<"\t"<<uni[ind[i]]<<endl;
    }
}