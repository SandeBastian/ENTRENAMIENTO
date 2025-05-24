#include <iostream>
using namespace std;
void burbuja(int &x, int &y) { //Se hace con asi porque las funciones crean copias
    int aux= x;
    x=y;
    y=aux;
}
void imprime(int x, int y) {
    cout<<"a: "<<x<<endl;
    cout<<"b: "<<y<<endl;
}
int main() {
    int a , b;
    cout<<"Ingrese a: "; cin>>a;
    cout<<"Ingrese b: "; cin>>b;
    imprime(a, b);
    burbuja(a , b);
    cout<<endl;
    imprime(a, b);
}