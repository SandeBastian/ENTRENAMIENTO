#include <iostream>
#include <fstream>
using namespace std;
int main () {
    struct reg_agenda {
        int num;
    } ragenda;
    ofstream archivo("Agenda.dat", ios::out|ios::binary);
    int n;
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el numero ["<<i+1<<"]: ";
        cin>>ragenda.num;
        archivo.write(reinterpret_cast<char *>(&ragenda), sizeof(reg_agenda));
    }
    archivo.close();
    return 0;
}