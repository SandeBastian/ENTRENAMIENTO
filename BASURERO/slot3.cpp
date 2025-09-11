/*Tarea 3: Elaborar un algoritmo que reciba 6 números enteros y determine el valor máximo
 */
#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,f;
    cout<<"Ingrese 6 numeros: "<<endl;
    cin>>a>>b>>c>>d>>e>>f;
    int max=a;
    if (max<a) max=a;
    if (max<b) max=b;
    if (max<c) max=c;
    if (max<d) max=d;
    if (max<e) max=e;
    if (max<f) max=f;
    cout<<"Valor maximo: "<<max<<endl;
}