/*
Tarea 32: Algoritmo para hallar la sumas de los mayores números perfectos de dos arreglos de números enteros
*/
#include <iostream>
using namespace std;

bool perfecto (int n) {
    int sumdiv=0;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            sumdiv+=i;
        }
    }
    if (n==sumdiv) {
        return true;
    }else {
        return false;
    }
}

int mayorPerfecto (int x[], int n) {
    int max =0;
    for (int i=0; i<n; i++) {
        if (perfecto(x[i]) &&  x[i]>max) max=x[i] ;
    }
    return max;
}


int main () {
    int m, n;
    /*int a[]={34, 28, 6, 204};
    int b[]={102, 496, 6, 39, 53};
    */
    do {
        cout<<"Ingrese cantidad de elementos de a: ";
        cin>>m;
        if (m<0) cout<<"Error. Valor no valido."<<endl;
    }while (m<0);
    int a[m];

    for (int i=0; i<m; i++) {
        cout<<"a["<<i+1<<"]: ";
        cin>>a[i];
    }
    do {
        cout<<"Ingrese cantidad de elementos de b: ";
        cin>>n;
        if (n<0) cout<<"Error. Valor no valido."<<endl;
    }while (n<0);
    int b[n];

    for (int i=0; i<n; i++) {
        cout<<"b["<<i+1<<"]: ";
        cin>>b[i];
    }
    cout<<"La suma de los mayores perefectos de a y b: "<<mayorPerfecto(a,m)+mayorPerfecto(b,n)<<endl;
}