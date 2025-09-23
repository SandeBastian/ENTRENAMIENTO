/*Tarea 11: Algoritmo para insertar una nota en un arreglo de notas (notas que ya esta ordenadas =D )
ordenado de menor a mayor
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese cantidad de notas: ";
    cin >> n;
    int nota[100];
    cout << "Ingrese "<< n <<" notas (de menor a mayor):"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese Nota["<<i+1<<"]: ";
        cin >> nota[i];
    }
    int newNum;
    cout << "Ingrese la nueva nota: ";
    cin >> newNum;
    int pos = n;
    for (int i = 0; i < n; i++) {
        if (newNum < nota[i]) {
            pos = i;
            break;
        }
    }
    for (int i = n; i > pos; i--) {
        nota[i] = nota[i - 1];
    }
    nota[pos] = newNum;
    n++;

    cout << "Notas: {";
    for (int i = 0; i < n; i++) {
        cout <<" "<< nota[i] << " ";
    }
    cout<<"}"<<endl;
    return 0;
}