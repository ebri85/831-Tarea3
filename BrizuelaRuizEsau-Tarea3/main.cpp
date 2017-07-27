#include <iostream>

using namespace std;

///Variables Globales


///Funciones Prototipo

int Factorial(int);

int main()
{
cout << Factorial(3)<<endl;

}



int Factorial(int i){

    if (i==0){
        return 1;
    } else {
        return (i*Factorial(i-1));
    }
}
