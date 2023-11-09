#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Estudiante {
public:
    Estudiante(string nombre, int grado) : nombre(nombre), grado(grado) {}
    string obtenerNombre() const {
        return nombre;
    }
    int obtenerGrado() const {
        return grado;
    }

private:
    string nombre;
    int grado;
};
int main() {
    vector<Estudiante> estudiantes;

    estudiantes.push_back(Estudiante("Gabriel", 7));
    estudiantes.push_back(Estudiante("Nerea", 6));
    estudiantes.push_back(Estudiante("Ruben", 10));
    estudiantes.push_back(Estudiante("Jose Luis", 8));
    estudiantes.push_back(Estudiante("Adriana", 9));


}