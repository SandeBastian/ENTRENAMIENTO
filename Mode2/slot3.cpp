//Busqueda secuencial
#include <iostream>

using namespace std;

void ejecutaOperacion(){
    cout<<"###### Se ejecuto la operacion ######"<<endl; //funcion que pinta texto cuando
};                                                        //encuentra el 11 pero sigue buscando

int main() {

    int i;
    int j;
    int valorBuscado = 11;
    int n =10;
    int arr [10] = {20,15,9,11,7,4,7,13,40,5};
    cout<<"=================================================="<<endl;

    for(i=0; i < n ; i++)
    {
        cout<<"Elemento ["<<i<<"]: "<<arr[i]<<endl;
        if(arr[i] == valorBuscado)
            ejecutaOperacion(); //Llamando a la funcion
    }

    return 0;
}