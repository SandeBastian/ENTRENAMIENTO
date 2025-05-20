#include <iostream>
using namespace std;

int main() {

    int n;
    do{
        cout << "Ingresar el valor n (0 < n <= 200):\n";
        cin >> n;
        if (n <= 0 || n > 200) cout << "Error: valor incorrecto\n";
    } while (n <= 0 || n > 200);

    int code[n];
    float precio[n];

    if (n > 1) cout << "Ingresar los datos de los " << n << " productos";
    else cout << "Ingresar los datos del unico producto1";
    cout << " (codigo y precio unitario):\n";
    cout << "codigo: valor entero de tres cifras\n";
    cout << "precio: valor real positvo\n";

    for (int i=0; i<n; i++){
        do{
            cout << "Ingresar codigo del producto #" << i+1 << "\n";
            cin >> code[i];
            if (code[i] < 100 || code[i] > 999)
                cout << "Error: codigo incorrecto\n";
        } while (code[i] < 100 || code[i] > 999);

        do{
            cout << "Ingresar precio unitario del producto #" << i+1 << "\n";
            cin >> precio[i];
            if (precio[i] <= 0)
                cout << "Error: precio incorrecto\n";
        } while (precio[i] <= 0);
    }

    // ordenamos para tener los codigos iguales consecutivos
    // no uso los indices porque solo son dos datos y también son un poco más complicados de manejar

    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if (code[i] > code[j]){
                int aux_code = code[j];
                float aux_precio = precio[j];
                // swap
                code[j] = code[i];
                code[i] = aux_code;
                precio[j] = precio[i];
                precio[i] = aux_precio;
            }

    cout << "codigo\t\tpromedio\t# de rebajas\n";

    for (int i=0; i<n; i++){
        int j = i;
        while (j+1 < n && code[j+1] == code[i]) j++;
        // en el rango [i, j] todos tiene el mismo codigo
        float promedio = 0;
        for (int k=i; k<=j; k++)
            promedio += precio[k];
        promedio /= (j - i + 1);
        int cnt = 0;
        for (int k=i; k<=j; k++)
            if (precio[k] < promedio) cnt++;
        if (cnt > 0){
            cout << code[i] << "\t\t" << promedio << "\t\t" << cnt << "\n";
        }
        i = j;
        // vamos al final del rango y luego se hace i++ (en el for)
    }

    return 0;
}

/*
100
*/