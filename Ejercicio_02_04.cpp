// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 4
// Problema planteado: Leer 3 numeros enteros y realizar una función
#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
    cout << "Introduce el primer número: ";
    cin >> a;
    cout << "Introduce el segundo número: ";
    cin >> b;
    cout << "Introduce el tercer número: ";
    cin >> c;
    if ((a * a + b * b == c * c) || 
        (a * a + c * c == b * b) ||
        (b * b + c * c == a * a)) {
        cout << "Los números pueden formar un triángulo rectángulo." << endl;
    } else {
        cout << "Los números no pueden formar un triángulo rectángulo." << endl;
    }
    return 0;
}