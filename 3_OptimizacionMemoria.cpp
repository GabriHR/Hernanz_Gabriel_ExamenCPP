#include<iostream>
using namespace std;

void intercambiar(int* a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int n1=4;
    int n2=44;
    cout<<"Los valores iniciales son: \nnum1: "<<n1<<", \n2: "<<n2<<endl;

}