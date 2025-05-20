/*UNI-II FIIS
Pregunta 1 PC2
Escriba un programa en C++ que reciba dos arreglos de enteros positivos A y B de m y n elementos.
Los datos de cada arreglo no deben contener valores repetidos. Luego construya un arreglo C que
contenga los elementos del conjunto unión de A y B, ordenados de menor a mayor. Debe resolver sin
utilizar algoritmos de ordenamiento.
Ejemplo:
A = {6; 12; 8; 16; 21; 11}
B = {9; 16; 14; 27; 8; 18; 24; 13}
C = {27; 24; 21; 18; 16; 14; 13; 12; 11; 9, 8; 6}*/
#include <iostream>
using namespace std;
int main () {
    int m, i, j, p, aux;
    do {
        cout<<"Ingrese n (n>0): ";
        cin>>m;
        if(m<=0) cout<<"Error. Valor no positivo"<<endl;
    }while(m<=0);
    int A[m];
    for(i=0; i<m; i++) {
        bool esta=false;
        do {
            cout<<"Ingresa A["<<i+1<<"] : ";
            cin>>A[i];

            esta=false; //tras cada prueba validacion debe reiniciar "esta"
            for(j=0; j<i; j++) {
                if(A[i]==A[j]) esta=true;
            }
            if(esta) cout<<"Error. Valor Repetido"<<endl;
            if(A[i]<=0) cout<<"Error. Valor no positivo<<endl"<<endl;
        }while(A[i]<=0||esta); //Si esta condicion es verdadera repite el bucle
    }                           //Por ese motivo "esta" va sin negacion porque debe
    //salir del bucle para este caso ser while(false)
    int n;
    do {
        cout<<"Ingrese n (n>0): ";
        cin>>n;
        if(n<=0) cout<<"Error. Valor no positivo"<<endl;
    }while(n<=0);
    int B[n];
    for(i=0; i<n; i++) {
        bool esta=false;
        do {
            cout<<"Ingresa A["<<i+1<<"] : ";
            cin>>B[i];

            esta=false; //tras cada prueba validacion debe reiniciar "esta"
            for(j=0; j<i; j++) {
                if(B[i]==B[j]) esta=true;
            }
            if(esta) cout<<"Error. Valor Repetido"<<endl;
            if(B[i]<=0) cout<<"Error. Valor no positivo<<endl"<<endl;
        }while(B[i]<=0||esta); //Si esta condicion es verdadera repite el bucle
    }
    int C[m+n];
    p=m+n;
    for(i=0; i<m; i++)
        C[i]=A[i];
    for(i=m; i<p; i++)
        C[i]=B[i];

    for(i=0; i<p; i++)
        for(j=i+1; j<p; j++)
            if(C[i]>C[j]) {
                aux=C[i];
                C[i]=C[j];
                C[j]=aux;
            }

    for(i=0; i<p-1; i++ ) {
        if(C[i]==C[i+1])
    }

}
