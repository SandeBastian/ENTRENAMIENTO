//ORDENAMIENTO DE ARREGLO
#include <iostream>
using namespace std;
int main () {
    int n, i, j, aux;
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
    cout<<"_________________"<<endl;
    for(i=0;i<n;i++) {
        cout<<nota[i]<<" ";
    }
    for(i=0;i<n-1; i++) {
        for(j=i+1;j<n; j++) {
            if(nota[i]>nota[j]) { //De menor a mayor, pasas
                aux=nota[i];             //nota[i] se intercambia a la derecha con nota[j]
                nota[i]=nota[j];
                nota[j]=aux;
            }
        }
    }
    cout<<"\n_________________"<<endl;
      for(i=0;i<n;i++) {
          cout<<nota[i]<<" ";
      }
    return 0;
}