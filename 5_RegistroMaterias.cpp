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


};

