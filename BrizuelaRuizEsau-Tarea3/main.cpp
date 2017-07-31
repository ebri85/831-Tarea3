
#include <cstring>

#define MAX 5
#define MIN 2





#include <iostream>
using namespace std;

///Variables Globales

 int cont= 1;
  int repite = 0;


/// Prototipo de función
void Permutaciones(char *, int k=0);
int Factorial(int );

int main() {

char palabra[MAX];

    string mensaje="";
      int rango=0;


      do{
            cout<<"Ingrese una palabra"<<"\n"<<endl;
            cin>> palabra;
            rango = strlen(palabra);

        if((rango>1)&&(rango<6)){

        cout<< "La cantidad de letras que contiene la palabra "<< palabra<< " = "<< strlen(palabra)<<".\n"<<endl;

        cout<<"La Cantidad de Permutaciones que se deben de generar son  "<< Factorial(rango)<<" \n"<<endl;

        cout<< "Lista de Permutaciones \n"<<endl;
        Permutaciones(palabra);
        repite =1;

        } else {

        cout<<"Ingrese otra Palabra que cumpla con el tamaño Correcto"<<endl;
        repite =0;
    }


   }while (repite==0);


}

int Factorial(int i){

   return (i==0)? 1:(i*Factorial(i-1));

}

void Permutaciones(char * cad, int k) { ///Metodo Recursivo para realizar las permutaciones e imprimir cada una de ellas SIN Repeticion
   char c;  //Variable para moverse en el arreglo char


   int n = strlen(cad);

   for(int i = 0; i < n-k; i++) {

      if(n-k > 2) Permutaciones(cad, k+1);

      else cout<<cont++<< " - " <<cad <<"\n ";

     ///Cambio de posiciones
      c = cad[k];

      cad[k] = cad[k+i+1];

      cad[k+i+1] = c;

      if(k+i == n-1) {

         for(int j= k; j < n; j++) cad[j] = cad[j+1];

         cad[n] = 0;

      }
   }
}
















