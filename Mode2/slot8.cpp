#include <iostream>
using namespace std;
int main () {
    int n, i, j, aux;
    cout<<"n: ";
    cin>>n;
    int ind[n];
    float num[n];
    for(i=0; i<n; i++) {
        cout<<"num "<<i<<" : ";
        cin>>num[i];
        ind[i]=i;
    }
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++) {
            if(num[ind[i]]<num[ind[j]]) {
                aux=ind[i];
                ind[i]=ind[j];
                ind[j]=aux;
            }
        }
    for(i=0; i<n; i++) {
        cout<<num[ind[i]]<<"\t"<<ind[i]<<endl;
    }
}
