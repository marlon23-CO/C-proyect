#include <iostream>
using namespace std;

int potencia(int numero){
    return numero * numero;
}

int main(){
    int n1;

    cout << "Ingrese un numero: ";
    cin >> n1;

    int resultado = potencia(n1);

    cout << "Tu numero al cuadrasdo es: " << resultado;

    return 0;
}