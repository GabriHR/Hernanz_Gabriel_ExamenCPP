#include "iostream"
#include "vector"

using namespace std;
int main(){
    vector<int> calificaciones = {8, 9, 7, 9, 8};

    cout << "Mis calificaciones:";
    for (int calificacion : calificaciones) {
        cout << " " << calificacion;
    }
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

}