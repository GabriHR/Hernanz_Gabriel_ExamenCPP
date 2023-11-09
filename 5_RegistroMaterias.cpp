#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Estudiante{
public:
    vector<string>materias;
    void agregar_materias(){
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

int main(){
    Estudiante estudiante;

    cout<<"Por favor, digite la informacion del estudiante:\n"<<endl;
    estudiante.agregar_materias();
    estudiante.agregar_materias();
    estudiante.mostrar_materias();

    return 0;
}

