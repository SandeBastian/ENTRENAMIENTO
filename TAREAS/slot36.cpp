#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int i,x[5]={1,2,3,4,5};
    int *p;
    p=&x[0];
    while (p!=NULL) {
        cout<<*p<<endl;
        if (*p==5) p=NULL;
        else p++;
    }
    return 0;
}