#include <iostream>
#include <string>
using namespace std;

class RegistroAsistencia{
public:
    RegistroAsistencia(string fecha, string estado);
    void mostrar_asistencia() {
        cout << "Fecha de la clase: " << fecha << ", Estado de asistencia: " << estado << endl;
    }

private:
    string fecha;
    string estado;
};