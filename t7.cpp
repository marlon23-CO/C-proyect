#include <iostream>
using namespace std;

int mayor(int a, int b){
if(a>b){
    cout<< "es mas grande "<< a;
   }else{
    cout <<"es mas grande "<< b;
   }
}

int main(){
    int n1, n2;
    cout << "Ingrese un numero: ";
    cin>> n1;

    cout << "Ingrese un numero diferente al anterior: ";
    cin>> n2;


    mayor(n1, n2);
}

