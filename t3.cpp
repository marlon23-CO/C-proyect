#include <iostream>
using namespace std;

int a=0,b=0;

int suma(){
int junta;
return  a + b;
}


int main (){
    int numero1, numero2;
    cout<< "Ingrese el primer numero numero\n";
    cin >> a;

    cout<< "Ingrese segundo numero: \n";
    cin >> b;

    int resultado = suma();

    cout<< "El resultado es: "<< resultado;

    suma();
}