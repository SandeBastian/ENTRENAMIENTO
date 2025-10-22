/*
Tarea 31: Algoritmo para determinar la fecha del día siguiente utilizando una función para determinar si el año es bisiesto.
*/

#include <iostream>
using namespace std;

bool bisiesto (int anio) {
    if (anio%4==0 && anio%100!=0 || anio%400==0)
        return true;
    else
        return false;

}
int main () {
    int d, m, a;
    cout<<"Ingrese el dia: "; cin>>d;
    cout<<"Ingrese el mes: "; cin>>m;
    cout<<"Ingrese el anio: "; cin>>a;
    if (m==4||m==6||m==9||m==11) {
        if (d<30) {
            d++;
        }else {
            d=1;
            m++;
        }
    }else {
        if (m==1||m==3||m==5||m==7||m==8||m==10||m==12) {
            if (d<31) {
                d++;
            }else {
                d=1;
                if (m<12) {
                    m++;
                }else {
                    m=1;
                    a++;
                }
            }
        }else {
            if (d<28) {
                d++;
            }else {
                if (d==28) {
                    if (bisiesto(a)) {
                        d++;
                    }else {
                        d=1;
                        m=3;
                    }
                }else {
                    d=1;
                    m=3;
                }
            }
        }
    }
    cout<<"El dia siguiente es: "<<d<<"/"<<m<<"/"<<a;
}