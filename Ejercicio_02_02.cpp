// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 2
// Problema planteado: Calcular la hipotenusa
#include <iostream>
using namespace std;
int main() 
{
    double cateto1, cateto2;
    cout << "Introduce la longitud del primer cateto: ";
    cin >> cateto1;
    cout << "Introduce la longitud del segundo cateto: ";
    cin >> cateto2;
    double hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;
    return 0;
}