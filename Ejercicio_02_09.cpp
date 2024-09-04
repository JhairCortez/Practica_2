// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 9
// Problema planteado: Leer un numero entero y si pertenece a Fiboacci
#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Introduce un número para verificar si pertenece a la secuencia de Fibonacci: ";
    cin >> num;
    int a = 0, b = 1, c = a + b;
    if (num == a || num == b) 
    {
        cout << num << " pertenece a la secuencia de Fibonacci." << endl;
        return 0;
    }
    while (c <= num) 
    {
        if (c == num) 
        {
            cout << num << " pertenece a la secuencia de Fibonacci." << endl;
            return 0;
        }
        a = b;
        b = c;
        c = a + b;
    }
    cout << num << " no pertenece a la secuencia de Fibonacci." << endl;
    return 0;
}