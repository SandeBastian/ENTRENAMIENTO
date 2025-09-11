/*Tarea 4: mayor valor par y menor valor impar de n numeros enteros
 */
#include <iostream>
using namespace std;
int main() {
    int n,num, maxPar=-1, minImp=1000;
    cout<<"Ingrese n: "; cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Ingrese el numero "<<i+1<<" : "; cin>>num;
        if (num%2==0) {
            if (maxPar<num) {
                maxPar=num;
            }
        }else {
            if (minImp>num) {
                minImp=num;
            }
        }
    }
    cout<<"El maximo Par: "<<maxPar<<endl;
    cout<<"El minimo Impar: "<<minImp<<endl;
    return 0;
}