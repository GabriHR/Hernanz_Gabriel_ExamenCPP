#include "iostream"
#include "vector"

using namespace std;
int main(){
    vector<float> calificaciones = {5,6,7.5,8};

    cout << "Mis calificaciones:";
    for (float calificacion : calificaciones) {
        cout << " " << calificacion;
    }
    int suma = 0;
    for (float calificacion : calificaciones) {
        suma += calificacion;
    }
    double promedio = static_cast<double>(suma) / calificaciones.size();

    cout << "\nEl promedio de las calificaciones es: " << promedio << endl;

    return 0;
}