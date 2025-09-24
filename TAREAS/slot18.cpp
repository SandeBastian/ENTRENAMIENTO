/*
Tarea 19: Algoritmo para determinar si una matriz cuadrada de orden n es simétrica
Desarrollar un algoritmo que lea una matriz cuadrada de orden n y determine si es simétrica.
Una matriz cuadrada es simétrica si para td i,j, x[i][j] = x[j][i].
*/
#include <iostream>
using namespace std;
int main () {
    int n, i, j;
    do {
        cout<<"Ingrese el orden de M (matriz cuadrada): ";
        cin>>n;
        if (n<0) cout<<"Error. Valor no valido."<<endl;
    }while (n<0);

    int mat[n][n];
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            cout<<"mat ["<<i<<"]["<<j<<"]: ";
            cin>>mat[i][j];
        }
    }
    bool simetrica = true;
    for (i=0;i<n;i++) {
            for (j=0;j<n;j++) {
                if (i>j) {
                    if (mat[i][j]!=mat[j][i]) {
                        simetrica=false;
                        break;
                    }
                }
            }
        if (!simetrica) break;
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout<<mat[i][j]<<" ";
            if (j==n-1) cout<<endl;
        }
    }
    if (simetrica) cout<<"\nLa matriz M "<<n<<"x"<<n<<" es simetrica."<<endl;
    else cout<<"\nLa matriz M "<<n<<"x"<<n<<" No es simetrica."<<endl;
    return 0;
}