#include <iostream>
#include <vector>
#include <string>

using namespace std;
class MateriaYaRegistradaException {
public:
    MateriaYaRegistradaException(const string& materia) : materia(materia) {}

    string getMateria() const {
        return materia;
    }

private:
    string materia;
};
class Estudiante {
public:
    Estudiante(string nombre) : nombre(nombre) {}

    void registrar_materia(const string& materia) {
        for (const string& materiaRegistrada : materias) {
            if (materiaRegistrada == materia) {
                throw MateriaYaRegistradaException(materia);
            }
        }
        materias.push_back(materia);
    }

    void listar_materias() {
        cout << nombre << " ha registrado las siguientes materias: ";
        for (const string& materia : materias) {
            cout << materia << ", ";
        }
        cout << endl;
    }

private:
    string nombre;
    vector<string> materias;
};
