#include <iostream>
#include <fstream>
using namespace std;
int mini(int a, int b) {
    if (a>b) return b;
    return a;
}
int maxi(int a, int b) {
    if (a<b) return b;
    return a;
}
int main () {
    ifstream f("Datos.txt");
    int max, min;
    float prom=0;
    int i=0;
    while (!f.eof()) {
        int num;
        f>>num;
        if (i==0) {
            max=num;
            min=num;
        }
        max=maxi(max, num);
        min=mini(min, num);
        prom+=num;
        i++;
    }
    prom=prom/i;
    cout<<"Prom: "<<prom<<endl;
    cout<<"Minimo: "<<min<<endl;
    cout<<"Maximo: "<<max<<endl;

    f.close();
    return 0;
}