#include <iostream>
using namespace std;
bool isPerfect(int n) {
    int suma=0;
    for(int i=0; i<n; i++) {
        if(n%i==0) {
            suma+=i;
        }
    }
    return suma==n;
}
int main() {
    int n;
    cout<<"Ingrese n: ";
    cin>>n;
    int a[n];
    int suma=0;
    cout<<"Ingrese los numeros"<<endl;
    for(int i=0; i<n; i++) {
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
        suma+=a[i];
    }
    float prom=suma/n;
    cout<<"El promedio es: "<<prom<<endl;
    int sumaPerf=0, sumaNoPerf=0;
    for(int i=0; i<n; i++) {
        if (isPerfect(a[i])&&a[i]>prom) {
            sumaPerf+=a[i];
        }
        else if(!isPerfect(a[i])&&a[i]<=prom) {
            sumaNoPerf+=a[i];
        }
    }
    cout<<"Suma Perfect"<<sumaPerf<<endl;
}