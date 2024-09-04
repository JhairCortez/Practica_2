// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 6
// Problema planteado: Leer una hora y realizar una funcion
#include <iostream>
using namespace std;
int main() 
{
    int hora;
        cout << "Introduce la hora (en formato de 24 horas): ";
    cin >> hora;
    if (hora >= 0 && hora < 6) 
    {
        cout << "Es madrugada." << endl;
    } else if (hora >= 6 && hora < 12) 
    {
        cout << "Es mañana." << endl;
    } else if (hora >= 12 && hora < 18) 
    {
        cout << "Es tarde." << endl;
    } else if (hora >= 18 && hora < 24) 
    {
        cout << "Es noche." << endl;
    } else 
    {
        cout << "Hora inválida. Introduce una hora entre 0 y 23." << endl;
        return 1; // Código de error
    }
    return 0;
}