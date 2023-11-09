#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Estudiante{
public:
    vector<string> materias;
    void agregrar_materia(){
        string materia;
        cout<<"Ingrese las materias que tiene: "; cin>>materia;
        materias.push_back(materia);
    }
    void mostrar_materias(){
        cout<<"Las materias que usted tiene son:\n"<<endl;
        for (int i=0;i<materias.size();i++){
            cout<<materias[i]<<endl;
        }
    }

};

