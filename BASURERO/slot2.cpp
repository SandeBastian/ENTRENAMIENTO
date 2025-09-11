//Determinar el mayor valor de 3 numeros
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Ingrese a: "; cin>>a;
    cout<<"Ingrese b: "; cin>>b;
    cout<<"Ingrese c: "; cin>>c;
    cout<<endl;
    if (a==b&&b==c) {
        cout<<"Hay empate entre los 3 valores"<<endl;
    }else{
        if(a==b||b==c||a==c){
            cout<<"Hay 2 valores iguales"<<endl;
        }
    }
    if (a>b) {
        if (a>c) {
            cout<<"El mayor es: "<<a<<endl;
        }else {
            cout<<"El mayor es: "<<c<<endl;
        }
    }else {
        if (b>c) {
            cout<<"El mayor es: "<<b<<endl;
        }else {
            cout<<"El mayor es: "<<c<<endl;
        }
    }
    return 0;
}
