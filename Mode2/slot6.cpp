//liberar una pos E INSERTAR EN POS
#include <iostream>
using namespace std;
int main() {
    int n, i, pos, posIn, notaIn;
    do {
        cout<<"Ingrese el tamano del arreglo: ";
        cin>>n;
    }while(!(n>=1));
    int nota[n];
    for(i=0; i<n; i++) {
        do {
            cout<<"Ingrese el valor de nota ["<<i<<"]: ";
            cin>>nota[i];
        }while(nota[i]<0||nota[i]>20);
    }
    cout<<"\nIngresar la nota a insertar: ";
    cin>>notaIn;
    cout<<"Ingresar la posicion en la que se insertara: ";
    cin>>posIn;
    pos=n-1;
    //Imprimo version antigua
    cout<<"\nArreglo antes de la insercion: "<<endl;
    cout<<"Nota ["<<n<<"] : {";
    for(i=0;i<n;i++) {
        cout<<nota[i]<<" ";
    }
    cout<<"}"<<endl;
    //Aqui elimino una posicion con el desplazamiento abriendo paso a un posicion intermedia
    while(pos>=posIn) {
        nota[pos+1]=nota[pos];
        pos--;
    }
    nota[posIn]=notaIn;
    n++;
    cout<<"\nArreglo despues de la insercion: "<<endl;
    cout<<"Nota ["<<n<<"] : {";
    for(i=0;i<n;i++) {
        cout<<nota[i]<<" ";
    }
    cout<<"}"<<endl;
    return 0;
}