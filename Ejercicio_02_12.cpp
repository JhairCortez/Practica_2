// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 12
// Problema planteado: Genere una serie decendente
#include <iostream>
int main() 
{
    int num1, num2;
    std::cout << "Introduce el primer valor entero: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo valor entero: ";
    std::cin >> num2;
    if (num1 == num2) 
    {
        std::cout << "Los números deben ser distintos." << std::endl;
        return 1; // Termina el programa con un código de error
    }

    if (num1 > num2) 
    {
        // Imprimir serie descendente
        for (int i = num1; i >= num2; --i) 
        {
            std::cout << i << " ";
        }
    } else 
    {
        // Imprimir serie ascendente
        for (int i = num1; i <= num2; ++i) 
        {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}