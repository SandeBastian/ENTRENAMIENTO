/*Tarea 30: Algoritmo para presentar un ranking de ciudades demayor a
menor diferencia entre temperatura máxima y mínima.
*/
#include <iostream>
using namespace std;
int main () {
    struct reg_temp {
        string ciudad;
        int temp;
    }lista[100], raux;
    int n, a, b;
    cout<<"Ingrese el numero de ciudades: ";
    cin>>n;
    getchar();
    for (int i = 0; i < n; i++) {
        cout<<"Ciudad ["<<i+1<<"]: ";
        getline(cin, lista[i].ciudad);
        cout<<"Ingrese la temperatura maxima: ";
        cin>>a;
        cout<<"Ingrese la temperatura minima: ";
        cin>>b;
        lista[i].temp = a-b;
        getchar();
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (lista[i].temp<lista[j].temp) {
                raux = lista[i];
                lista[i] = lista[j];
                lista[j] = raux;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<lista[i].ciudad<<" "<<lista[i].temp<<endl;
    }
    return 0;
}
