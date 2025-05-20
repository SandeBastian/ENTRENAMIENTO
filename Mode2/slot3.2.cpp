//Busqueda secuaencial sin break 25-I
#include <iostream>
using namespace std;
int main() {
    int n, valBus, i;
    bool encontrado=false;

    do {
        cout<<"Ingrese le tamano del Arreglo (notas) : "; //Ingresa tamaño de arreglo
        cin>>n;
    }while(n<=0);

    int num[n];
    for(i=0; i<n; i++) {  //Ingresa cada nota del arreglo
        do {
            cout<<"num ["<<i<<"]: ";
            cin>>num[i];
        }while(num[i]<1||num[i]>20);
    }

    //Ingresar Valor Buscado
    cout<<"__________________________________________"<<endl;
    cout<<"\nIngresa tu nota para buscarla: ";
    cin>>valBus;
    cout<<endl;
    for(i=0; i<n; i++) {
        cout<<"Nota ["<<i<<"] :"<<num[i]<<endl;
        if(num[i]==valBus) {
            cout<<"La Nota ha sido encontrada en:"<<endl;
            cout<<"Nota ["<<i<<"]: "<<num[i];
            encontrado=true;
            break;
        }
    }

    if(encontrado) {

    }else {
        cout<<"Tu nota no ha sido encontrada"<<endl;
    }
    return 0;
}