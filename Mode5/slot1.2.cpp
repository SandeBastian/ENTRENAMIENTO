#include<iostream>
using namespace std;
void divisores(int x) {
    for (int i=1; i<=x; i++) {
        if(x%i==0) cout<<i<<" ";
    }
}
int main() {
    int a;
    cout <<"Ingrese a: ";
    cin>>a;
    cout<<"Los divisores de "<<a<<"son: "<<endl;
    divisores(a);
    return 0;
}
