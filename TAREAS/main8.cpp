#include <iostream>
#include <fstream>
using namespace std;
int main () {
    struct reg_Agenda {
        int num;
    } ragenda;
    ifstream archivo("Agenda.dat", ios::in|ios::binary);
    float sum=0, cont=0;
    while (archivo.read(reinterpret_cast<char *>(&ragenda), sizeof(reg_Agenda))) {
        sum=sum+ragenda.num;
        cout<<sum<<endl;
        cont++;
    }
    cout<<"\nPromedio: "<<sum/cont<<endl;
    archivo.close();
    return 0;
}