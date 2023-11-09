#include <iostream>
#include <string>
using namespace std;

class RegistroAsistencia{
public:
    RegistroAsistencia(string fecha,string estado) {

    }

    void mostrar_asistencia() {
        cout << "Fecha de la clase: " << fecha << ", Estado de asistencia: " << estado << endl;
    }

private:
    string fecha;
    string estado;
};

int main() {
    RegistroAsistencia asistencia1("2023-11-07", "Tardanza");
    RegistroAsistencia asistencia2("2023-11-08", "Falta");
    RegistroAsistencia asistencia3("2023-11-09", "Asistio");

    asistencia1.mostrar_asistencia();
    asistencia2.mostrar_asistencia();
    asistencia3.mostrar_asistencia();

    return 0;
}