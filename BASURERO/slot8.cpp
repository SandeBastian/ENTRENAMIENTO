/*Tarea 8: Dadas n edades de niños todos menores de 10 años,
 determinar el promedio de las edades y cuantos tienen edad
 mayor o igual al promedio
 */
#include <iostream>
using namespace std;
int main() {
    int n, edad, suma=0, num=0, prom, r, cont=0;
    do {
        cout<<"Ingrese el numero de edades:";
        cin>>n;
    }while (n<0);
    for (int i=0; i<n; i++) {
        do {
            cout<<"Ingrese edad ["<<i+1<<"]: ";
            cin>>edad;
        }while (edad<1||edad>9);
        suma=suma+edad;
        num=num*10+edad;
        cout<<num<<endl;
    }
    prom=suma/n;
    while (num>0) {
        r=num%10;
        num=num/10;
        if (r>=prom) {
            cont++;
        }
    }
    cout<<"Hay "<<cont<<" nino/s cuya edad es mayor o igual al promedio"<<endl;
    return 0;
}