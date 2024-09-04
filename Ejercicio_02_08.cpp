// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 8
// Problema planteado: Secuencia de Fibonacci
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Introduce el número de términos de la secuencia de Fibonacci: ";
    cin >> N;
    if (N <= 0) 
    {
        cout << "El número de términos debe ser positivo." << endl;
        return 1;
    }
    int a = 0, b = 1, c;
    cout << "Secuencia de Fibonacci:" << endl;
    for (int i = 1; i <= N; ++i) 
    {
        if (i == 1) 
        {
            cout << a << endl;
            continue;
        }
        if (i == 2) 
        {
            cout << b << endl;
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
    return 0;
}