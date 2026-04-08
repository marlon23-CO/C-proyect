#include <iostream>
using namespace std;

float resultado;

int promedio(float a, float b, float c){
resultado= (a+b+c)/3;
}

int main(){
    int n1, n2, n3;
    cout << "Ingrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    promedio(n1, n2, n3);

    cout << "El promedio es : " <<resultado;

}