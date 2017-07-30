
#include <cstring>

#define MAX 5
#define MIN 2





#include <iostream>
using namespace std;

///Variables Globales

 int cont= 1;

/// Prototipo de función
void Permutaciones(char *, int l=0);

int main() {

char palabra[MAX];

    string mensaje="";
    cout<<"Ingrese una palabra"<<endl;
            cin>> palabra;

    cout<< "La cantidad de letras que contiene la palabra"<< palabra<< " = "<< strlen(palabra)<<endl;

   Permutaciones(palabra);



}

void Permutaciones(char * cad, int l) {
   char c;  //Variable para moverse en el arreglo char


   int n = strlen(cad);

   for(int i = 0; i < n-l; i++) {
      if(n-l > 2) Permutaciones(cad, l+1);

      else cout <<cont++<<" - " <<cad << "\n ";

      /* Intercambio de posiciones */
      c = cad[l];
      cad[l] = cad[l+i+1];
      cad[l+i+1] = c;
      if(l+i == n-1) {
         for(int j= l; j < n; j++) cad[j] = cad[j+1];
         cad[n] = 0;
      }
   }
}
















