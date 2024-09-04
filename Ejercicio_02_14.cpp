// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 14
// Problema planteado: Generar los cuadrados perfectos
#include <iostream>
int main() 
{
    int n;
    std::cout << "Introduce el valor de n: ";
    std::cin >> n;
    int i = 1;
    while (i * i <= n) 
    {
        std::cout << i * i << std::endl;
        ++i;
    }
    return 0;
}