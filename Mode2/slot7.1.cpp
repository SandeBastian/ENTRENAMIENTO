//Copia
//Created by Sebastian on 2/12/2024.
/*Ejemplo 1:
Se desea alamacenar en un arreglo N datos enteros. Luego dado un dato x
eliminar todos aquellos que son iguales a x.
Ejemplo:
N=6
Datos: 4, 7, 3, 4, 4, 7
x: 4
Despues de la eliminacion:
Salida: 7, 3, 7*/
#include<iostream>
using namespace std;
int main() {
    int n, i, x, j;
    cout<<"Ingrese N= "; cin>>n;
    int arr[n];
    for(i=0; i<n; i++) {
        cout<<"Ingrese arr("<<i+1<<"): "; cin>>arr[i];
    }
    cout<<"Ingrese el valor a eliminar: "; cin>>x;
    i=0;
    while(i<n) {
        if(arr[i]==x) {
            j=i;  //...Guardamos su valor aqui porque i ya tiene un valor y no deseamos cambiarlo
            while(j<n-1) {
                arr[j]=arr[j+1];  //...arr[4]={2, 3, 4, 8} --> arr[4]={2, 4, 8, 8}
                j++;                //...Cuando imprimas solo cuentas hasta 3 o lo que sobre
            }
            //...Disminuir el tamaño del arreglo para que simule eliminación
            n--;
        }
        else {
            i++; //Esto hace que recorra hasta n
        }
    }
    //...Lo que se imprime
    cout<<"arr["<<n<<"] = { ";
    for(i=0; i<n; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<"}"<<endl;
    return 0;
}

