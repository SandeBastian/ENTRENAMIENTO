
#include <iostream>
using namespace std;
int main() {
    char oracion[100];
    int i, sum = 0, digito;
    cout << "Ingrese una oracion: ";
    cin.getline(oracion, 100);
    i=0;
    while (oracion[i] != '\0') {
        if (oracion[i] >= '0' && oracion[i] <= '9') {
            digito = oracion[i] - '0';
            sum += digito;
        }
        i++;
    }
    cout << "La suma de los digitos es " << sum << endl;
    return 0;
}
