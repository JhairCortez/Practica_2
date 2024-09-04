// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 5
// Problema planteado: Leer un ano y un mes
#include <iostream>
using namespace std;
int main() 
{
    int año, mes;
        cout << "Introduce el año: ";
    cin >> año;
    cout << "Introduce el mes (1-12): ";
    cin >> mes;
    int días;
    bool bisiesto = (año % 4 == 0 && año % 100 != 0) || (año % 400 == 0);
    switch (mes) 
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            días = 31;
            break;
        case 4: case 6: case 9: case 11:
            días = 30;
            break;
        case 2:
            días = (bisiesto) ? 29 : 28;
            break;
        default:
            cout << "Mes inválido." << endl;
            return 1;
    }
    cout << "El mes " << mes << " del año " << año << " tiene " << días << " días." << endl;
    return 0;
}