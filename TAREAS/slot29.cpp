/*
Tarea 29: Calcular la suma de los valores numéricos de una oración
*/

#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main() {
    char oracion[100];
    int i, sum = 0, acumula=0;
    cout << "Ingrese una oracion: ";
    cin.getline(oracion, 100);
    i=0;
    while (oracion[i] != '\0') {
        while (!(oracion[i] >= '0' && oracion[i] <= '9')&&oracion[i]!='\0') {
            i++;
        }
        while (oracion[i]>='0' && oracion[i]<='9'&&oracion[i]!='\0') {
            acumula=acumula*10+(oracion[i]-'0');
            i++;
        }
        if (oracion[i] == '\0') break;
        cout<<acumula<<endl; //para ver los nros
        sum=sum+acumula;
        acumula=0;
    }
    cout << "La suma de los digitos es " << sum << endl;
    return 0;
}
