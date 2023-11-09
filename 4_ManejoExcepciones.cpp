#include<iostream>
using namespace std;

int divide(int x, int y){
    if (y=0){
        throw "División entre 0 no existe: ";
    }

    return x/y;
}

int main(){
    int numerador, denominador;
    cout<<"Digite el valor del numerador: "; cin>>numerador;
    cout<<"Digite el valor del denominador: ";cin>>denominador;


    }
}