/*
Tarea 21: Algoritmo para determinar la suma de los elementos de las dos diagonales principales de una matriz
Desarrollar un algoritmo que lea una matriz cuadrada de orden n impar, donde n >= 5 y determine la suma de
los elementos que figuran en sus dos diagonales principales.
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cout<<"Ingrese el orden 'n' de la matriz (impar y n>=5) ";
        cin>>n;
        if (n<5) cout<<"Error. Valor no valido."<<endl;
    }while (n<5);

    int mat[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<"mat ["<<i<<"]["<<j<<"]: ";
            cin>>mat[i][j];
        }
    }
    int suma=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i==j||i+j==n-1) {
                suma=suma+mat[i][j];
            }
        }
    }
    //solo para ver la matriz
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
            if (j==n-1) cout<<endl;
        }
    }
    cout<<"\nLa suma es: "<<suma<<endl;
    return 0;
}