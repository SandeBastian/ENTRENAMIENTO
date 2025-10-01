#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));

    float ventas[5][13][6];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 13; j++) {
            for (int k = 0; k < 6; k++) {
                ventas[i][j][k] = 0;
            }
        }
    }

    // Marcar la esquina [0][0][0]
    ventas[0][0][0] = 1;

    // Llenar con datos aleatorios y acumular
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 13; j++) {
            for (int k = 1; k < 6; k++) {
                ventas[i][j][k] = 1000 + rand() % 1001;
                ventas[0][j][k] += ventas[i][j][k];
                ventas[i][0][k] += ventas[i][j][k];
            }
        }
    }

    // Buscar mayor venta total
    float maxVenta = 0;
    int maxMes = 1, maxTienda = 1;
    for (int j = 1; j < 13; j++) {
        for (int k = 1; k < 6; k++) {
            float totalMesTienda = 0;
            for (int i = 1; i < 5; i++) {
                totalMesTienda += ventas[i][j][k];
            }
            if (totalMesTienda > maxVenta) {
                maxVenta = totalMesTienda;
                maxMes = j;
                maxTienda = k;
            }
        }
    }

    // Buscar menor venta anual
    float minVenta = ventas[1][1][1] * 12;
    int minInstrumento = 1, minTienda = 1;
    for (int i = 1; i < 5; i++) {
        for (int k = 1; k < 6; k++) {
            float totalAnual = 0;
            for (int j = 1; j < 13; j++) {
                totalAnual += ventas[i][j][k];
            }
            if (totalAnual < minVenta) {
                minVenta = totalAnual;
                minInstrumento = i;
                minTienda = k;
            }
        }
    }

    // Impresión

    for (int k = 1; k < 6; k++) {
        cout << "Matriz de la Tienda " << k << endl;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 13; j++) {
                cout << ventas[i][j][k] << "\t";
            }
            cout << endl;
        }
    }

    cout << "\n>> Mes con mayor venta total: Mes " << maxMes << " en la Tienda " << maxTienda<< " con " << maxVenta << endl;

    cout << ">> Instrumento con menor venta anual: Instrumento " << minInstrumento
         << " en la Tienda " << minTienda
         << " con " << minVenta << endl;

    return 0;
}
