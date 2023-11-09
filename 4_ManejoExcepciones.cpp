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

    try{
        int resultado=divide(numerador,denominador);
        cout<<"El resultado de la division es: "<<resultado<<endl;
    }
    catch (const char* notificacion_error){
        cout<<"La excepcion es: "<<notificacion_error<<endl;
    }
    cout<<"El programa sigue funcionando despues del error: "<<endl;

    return 0;

}