/*Ejemplo 2:
Se desea almacenar en arreglos de enteros los dígitos de dos números del sistema
de base 8 de m y n cifras respectivamente.
Luego almacenar en otro arreglo de enteros la suma dicho números y finalmente
presentar los dígitos de la suma.

Nota: No pasar los números a base 10. La suma se debe realizar en el base 8
Ejemplo:

Primer número con n=3: 123
Segundo número con m=5: 45767
Suma será: 46112*/
#include<iostream>
using namespace std;
int main () {
    int max;
    max=5+1;
    int num1[]={0,0,0,1,2,3};
    int num2[]={0,4,5,7,6,7};
    int num3[max]={0,0,0,0,0,0};
    int sum=0, lleva=0;
    for(int i=max-1; i>=0; i--) {
        sum=(num1[i]+num2[i]+lleva)%8; //i=max-1 3+7+0=10 - 10%8=2 [lo que lleva empieza en 0]
        lleva=(num1[i]+num2[i]+lleva)/8; //Es facil de entender primero suma con lo que lleva
        num3[i]=sum;
    }                                       //Luego lleva como deberia ser una suma y en cada iteracion
                                            //Ya prepara lo que lleva para la siguiente suma

    int i=0;
    sum=0;
    for(i=0; i<max; i++) {
        cout<<num3[i];
    }
    cout<<endl;
    //Demostrando que no necesitas mover pos para solo imprimir lo necesario
    i=0;
    while(i<max) {
        sum=sum*10+num3[i];
        i++;
    }
    cout<<sum;
    cout<<endl;
    //Moviendo pos para imprimir lo necesario nomas
    i=0;
    int s=0;
    while(num3[i]==0) {
        i++;
    }
    while(i<max) {
        s=s*10+num3[i];
        i++;
    }
    cout<<"La suma es: "<<s;

    return 0;
}
    /*do {
        cout<<"Ingrese n: ";
        cin>>n;
        if(n<=0) cout<<"Error. Valor no positivo"<<endl;
    }while(n<=0);

    do {
        cout<<"Ingrese m: ";
        cin>>m;
        if(m<=0) cout<<"Error. Valor no positivo"<<endl;
    }while(m<=0);

    int num1, i, r1;
    max=m+1;
    int n1[m+1];
    for(i=max+1) {
        r1=num1%10;
    }
    do {
        cout<<"Ingrese n1: ";
        if(n1<0||n1>=8) cout<<"Error. Valor no valido"<<endl;
    }while (n1<0||n1>7);

    int n2;
    do {
        cout<<"Ingrese n2: ";
        if(n2<0||n2>7) cout<<"Error. Valor no valido"<<endl;
    }while (n2<0||n2>=8);
}*/