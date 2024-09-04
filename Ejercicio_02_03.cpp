// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 3
// Problema planteado: Calculo de la distancia entre 2 puntos
#include <iostream>
#include <cmath> 
using namespace std;
int main() 
{
    double x1, y1, x2, y2;
    cout << "Introduce las coordenadas del primer punto (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Introduce las coordenadas del segundo punto (x2 y2): ";
    cin >> x2 >> y2;
    double distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "La distancia entre los puntos es: " << distancia << endl;
    return 0;
}