// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 7
// Problema planteado: tabla de multiplicar de un numero dado
#include <iostream>
using namespace std;
int main() 
{
    int numero;
    cout << "Introduce un número para imprimir su tabla de multiplicar: ";
    cin >> numero;
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) 
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
    return 0;
}