#include <iostream>
using namespace std;

int esPar(int n){
return n % 2;
}

int main(){
    int n1, resul;
    cout << "Ingrese un numero para ver si es par: ";
    cin>> n1;

resul= esPar(n1);

if (resul==0){ 
    cout << "true (Es par)\n";
        }else{
          cout<<"false (No es par)\n";
                }
}