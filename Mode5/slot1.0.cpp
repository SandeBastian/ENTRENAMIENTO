C:\ENTRENAMIENTO#include <iostream>
using namespace std;
//prototipo de obtener mayor //con int en vez de void
void buscaMayor (int a, int b) {
    int mayor = a > b ? a : b;
    cout<<mayor;
}
int main () {
    int a , b;
    cout<<"Ingrese 2 valores"<<endl;
    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    buscaMayor (a, b);
    return 0;
}
