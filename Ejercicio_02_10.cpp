// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 10
// Problema planteado: determinar si los dígitos son iguales
#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Introduce un número de cuatro dígitos: ";
    cin >> num;
    int d1 = num / 1000;         
    int d2 = (num / 100) % 10;   
    int d3 = (num / 10) % 10;    
    int d4 = num % 10;          
    if (d1 == d2 || d1 == d3 || d1 == d4 ||
        d2 == d3 || d2 == d4 ||
        d3 == d4) 
        {
        cout << "Al menos dos dígitos son iguales." << endl;
    } else {
        cout << "Todos los dígitos son diferentes." << endl;
    }
    return 0;
}