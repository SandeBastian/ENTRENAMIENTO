#include <iostream>
#include <fstream>
using namespace std;

int main(){
   struct reg_nodo {
      int numero;
      reg_nodo *psigue;
   } *pinicio, *pactual, *pante, *paux;
   pinicio = NULL;
   int x[5]={10, 20, 30, 40, 50}, i=0;
   while (i<5) {
      if (pinicio == NULL) {
         pinicio = new reg_nodo;
         pactual = pinicio;
      }
      else {
         pactual->psigue = new reg_nodo;
         pactual = pactual->psigue;
      }
      pactual->numero=x[i];
      pactual->psigue=NULL;
      i++;
   }
   pactual=pinicio;
   while (pactual!=NULL) {
      cout<<pactual->numero<<endl;
      pactual=pactual->psigue;
   }
   return 0;
}