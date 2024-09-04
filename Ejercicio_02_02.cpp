// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 2
// Problema planteado: Calcular la hipotenusa
#include <iostream>
using namespace std;
int main() 
{
    int segundos;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segRestantes = segundos % 60;
    cout << "Horas: " << horas << ", Minutos: " << minutos << ", Segundos: " << segRestantes << endl;
return 0;
}
