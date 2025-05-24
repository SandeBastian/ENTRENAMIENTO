#include <iostream>
using namespace std;

int fib(int n) {
    switch (n) {
        case 0:;
        case 1: return (1);
        default:
            return (fib(n-1)+fib(n-2));
    }
}

int main () {
    int m;
    cout<<"Ingrese m: ";
    cin>>m;
    cout<<"Fibonacci: "<<fib(m)<<endl;
    return 0;
}