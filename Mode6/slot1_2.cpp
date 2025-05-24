#include<iostream>
using namespace std;

void Div (int n, int d) { //Tener cuidado, div es funcion de otra libreria
    if (d <= n) {
        if(n % d == 0) {
            cout<<d<<endl;
        }
        Div(n, d+1);
    }
}

int main () {
    int n;
    do {
        cout<<"Ingrese n: ";
        cin>>n;
    }while(n<=0);
    Div(n,1);
    return 0;
}