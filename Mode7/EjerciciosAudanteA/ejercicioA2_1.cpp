/*Sin emplear la funcion eof()
Leer el archivo de texto llamado "Notas.txt" (que ya existe), que
contiene la siguiente información:

Codigo Nombre Completo PC1 PC2 PC3
100	TORRES ALVA JUAN	11	8	10
200	CAMPOS RUIZ JOSE	8	9	11
300	LOPEZ QUISPE ANA	11	13	10
*/
#include <iostream>
#include <fstream>
using namespace std;

typedef char cadena[101];

int main() {
    int cod, pc1, pc2, pc3;
    cadena nombre;
    ifstream Archivo;

    Archivo.open("Notas.txt");

    if (!Archivo) {
        cout << "Error de apertura..." << endl;
    } else {
        while (Archivo >> cod) {
            Archivo.ignore();  // Ignora el tabulador o espacio después del código

            // Lee el nombre completo hasta el siguiente tabulador
            Archivo.getline(nombre, 101, '\t');

            // Verificamos si se pueden leer las 3 notas correctamente
            if (Archivo >> pc1 >> pc2 >> pc3) {
                cout << cod << "\t" << nombre << "\t" << pc1 << "\t" << pc2 << "\t" << pc3 << endl;
            } else {
                cout << "Faltan notas en una línea. Saltando línea incompleta..." << endl;

                // Limpiar estado de error y descartar el resto de la línea
                Archivo.clear();
                Archivo.ignore(1000, '\n');  // Descarta hasta salto de línea
            }
        }
    }

    Archivo.close();
    return 0;
}
