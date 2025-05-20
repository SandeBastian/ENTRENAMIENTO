/*UNI-II FIIS
Pregunta 1 PC2
Escriba un programa en C++ que reciba dos arreglos de enteros positivos A y B de m y n elementos.
Los datos de cada arreglo no deben contener valores repetidos. Luego construya un arreglo C que
contenga los elementos del conjunto unión de A y B, ordenados de menor a mayor. Debe resolver sin
utilizar algoritmos de ordenamiento.
Ejemplo:
A = {6; 12; 8; 16; 21; 11}
B = {9; 16; 14; 27; 8; 18; 24; 13}
C = {27; 24; 21; 18; 16; 14; 13; 12; 11; 9, 8; 6}*/
#include <iostream>
using namespace std;

int main() {

    int m;
    do{
        cout << "Ingresar el valor de m (m > 0):\n";
        cin >> m;
        if (m <= 0) cout << "Error: valor no positivo\n";
    } while (m <= 0);
    int a[m];
    cout << "Ingresar " << m << " valores distintos\n";
    for (int i=0; i<m; i++){
        bool flag;
        do {
            cout << "Valor #" << i+1 << ":\n";
            cin >> a[i];

            flag = false;
            for (int j=0; j<i; j++){
                if (a[j] == a[i]) flag = true;
            }
            if (flag) cout << "Valor repetido\n";
            if (a[i] <= 0) cout << "No es un valor entero positivo\n";
        } while (flag || a[i] <= 0);
    }

    int n;
    do{
        cout << "Ingresar el valor de n (n > 0):\n";
        cin >> n;
        if (n <= 0) cout << "Error: valor no positivo\n";
    } while (n <= 0);
    int b[n];
    cout << "Ingresar " << n << " valores distintos\n";
    for (int i=0; i<n; i++){
        bool flag;
        do {
            cout << "Valor #" << i+1 << ":\n";
            cin >> b[i];

            flag = false;
            for (int j=0; j<i; j++){
                if (b[j] == b[i]) flag = true;
            }
            if (flag) cout << "Error: Valor repetido\n";
            if (b[i] <= 0) cout << "Error: No es un valor entero positivo\n";
        } while (flag || b[i] <= 0);
    }

    int c[n+m];
    int sz = n+m;

    for (int i=0; i<m; i++)
        c[i] = a[i];

    for (int i=0; i<n; i++)
        c[m+i] = b[i];

    for (int i=0; i<sz; i++)
        for (int j=i+1; j<sz; j++)
            if (c[j] < c[i]){
                int aux = c[i];
                c[i] = c[j];
                c[j] = aux;
            }

    for (int i=1; i<sz; i++){
        if (c[i] == c[i-1]){
            // eliminar i
            for (int j=i; j+1<sz; j++)
                c[j] = c[j+1];
            sz--;
        }
    }

    cout << "A : ";
    for (int i=0; i<m; i++) cout << a[i] << " ";
    cout << "\n";

    cout << "B : ";
    for (int i=0; i<n; i++) cout << b[i] << " ";
    cout << "\n";

    cout << "C : ";
    for (int i=0; i<sz; i++) cout << c[i] << " ";
    cout << "\n";

    return 0;
}

