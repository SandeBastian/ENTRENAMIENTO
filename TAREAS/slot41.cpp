#include <iostream>
#include <fstream>
using namespace std;

int main() {
    struct reg_nodo {
        int numero;
        reg_nodo *psigue;
    } *pinicio, *pactual, *pante;

    pinicio = NULL;
    ifstream a("Datos.txt");

    int num;
    while (!a.eof()) {
        a >> num;
        if (a.eof()) break; // evitar leer basura al final

        if (pinicio == NULL) {
            pinicio = new reg_nodo;
            pinicio->numero = num;
            pinicio->psigue = NULL;
            pactual = pinicio;
        } else {
            pactual->psigue = new reg_nodo;
            pactual = pactual->psigue;
            pactual->numero = num;
            pactual->psigue = NULL;
        }
    }
    a.close();

    cout << "Lista original:\n";
    pactual = pinicio;
    while (pactual != NULL) {
        cout << pactual->numero << " ";
        pactual = pactual->psigue;
    }
    cout << endl;

    // eliminar números primos (sin funciones)
    pactual = pinicio;
    pante = NULL;
    bool hayPrimos = false;

    while (pactual != NULL) {
        int n = pactual->numero;
        bool primo = true;
        if (n < 2) primo = false;
        else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    primo = false;
                    break;
                }
            }
        }

        if (primo) {
            hayPrimos = true;
            // si el primer elemento es primo
            if (pactual == pinicio) {
                // eliminar el primer elemento de la lista
                pactual = pactual->psigue;
                delete pinicio;
                pinicio = pactual;
            } else {
                // eliminar nodo intermedio
                pante->psigue = pactual->psigue;
                delete pactual;
                pactual = pante->psigue;
            }
        } else {
            pante = pactual;
            pactual = pactual->psigue;
        }
    }

    if (hayPrimos) {
        cout << "Lista sin numeros primos:\n";
        pactual = pinicio;
        while (pactual != NULL) {
            cout << pactual->numero << " ";
            pactual = pactual->psigue;
        }
        cout << endl;
    } else {
        cout << "No se encontraron números primos.\n";
    }

    // liberar memoria
    while (pinicio != NULL) {
        pactual = pinicio->psigue;
        delete pinicio;
        pinicio = pactual;
    }

    return 0;
}
