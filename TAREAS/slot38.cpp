#include <iostream>
#include <fstream>
using namespace std;
int cuentaVocales(char *c) {
    int cont=0;
    while (*c) {
        switch (toupper(*c)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':cont++;
        }
        c++;
    }
    return cont;
}

int main(){
    string cadenax, cadenay;
    cout<<"Ingrese primera cadena: "; getline (cin, cadenax);
    cout<<"Ingrese segunda cadena: "; getline (cin, cadenay);
    cout<<cadenax<<" = "<<cuentaVocales(&cadenax[0])<<" vocales "<<endl;
    cout<<cadenay<<" = "<<cuentaVocales(&cadenay[0])<<" vocales "<<endl;
    return 0;
}