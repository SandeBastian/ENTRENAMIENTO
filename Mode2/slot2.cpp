//Cree un algoritmo para determinar el promedio de n notas
//y determinar cuantos son menores que el promedio
#include <iostream>
using namespace std;
int main () {
    int n, num[100], i, cont=0; //asignamos un numero grandes para que asi tenga una reserva grande de memoria para una gran cantidad de datos no deberia sobrepasar 100
    float suma=0, prom;
    do {
        cout<<"Ingrese la cantidad de notas: ";
        cin>>n;
    }while(n<=0);
    for(i=0;i<n;i++) {
        do {
            cout<<"La nota "<<i<<": ";
            cin>>num[i];
        }while(num[i]<0||num[i]>20);
        suma=suma+num[i];
    }
    prom=suma/n;
    cout<<"El promedio de ls notas ingresadas es: "<<prom<<endl;
    //No nos olvidemos de contar los menores al promedio
    for(i=0;i<n;i++) {
        if(num[i]<prom) {
            cont++;
        }
    }
    cout<<"Hay "<<cont<<" nota(s) menor(es) al promedio";
    return 0;
}