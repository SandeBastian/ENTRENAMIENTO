/*Dados dos polinomios de grados N y M, se desea almacenar los coeficientes
de dichos polinomios y luego mostrar los coeficientes del productos de
los mismos.
Ejemplo:
P(x)=3x^3-4x^2+1 => coeficientes: 3, -4, 0, 1
Q(x)=-2x^2+x => coeficientes: -2, 1, 0
Producto:
P(x)Q(x)=-6x^5+11x^4-4x^3-2x^2+x => Coeficientes: -6, 11, -4, -2, 1, 0*/
#include <iostream>
using namespace std;
int main() {
    int n, m, i, j;
    cout<<"Grado del polinomio 1: "; cin>>n;
    float p[n+1];
    for(int i=n;i>=0;i--){
        cout<<"Ingrese el coeficiente del termino: x^"<<i<<": "<<endl; cin>>p[i];
    }
    cout<<"Grado del polinomio 2: "; cin>>m;|
    float q[m+1];
    for(int i=m;i>=0;i--){
        cout<<"Ingrese el coeficiente del termino: x^"<<i<<": "<<endl; cin>>q[i];
    }

    float x[m+n+1];
    for(i=0; i<m+n+1; i++) {
        x[i]=0;
    }

    for(i=0; i<=n; i++)
        for(j=0;j<=m; j++) {
            x[i+j]=x[i+j]+p[i]*q[j];
        }

    for(i=m+n;i>=0;i--) {
        cout<<x[i]<<"x^"<<i<<" ";
    }

    return 0;
}