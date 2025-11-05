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
    char cadenax[80], cadenay[50];
    cout<<"Ingrese primera cadena: "; gets (cadenax);
    cout<<"Ingrese segunda cadena: "; gets (cadenay);
    cout<<cadenax<<" = "<<cuentaVocales(cadenax)<<" vocales "<<endl;
    cout<<cadenay<<" = "<<cuentaVocales(cadenay)<<" vocales "<<endl;
    return 0;
}