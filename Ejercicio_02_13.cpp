// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 13
// Problema planteado: Generar secuencia de números aleatorios
#include <iostream>
int main() 
{
    for (int i = 1; i <= 10; ++i) 
    {
        int numero = i * 10; // Esto generará números 10, 20, 30, ..., 100
        std::cout << numero;
        if (numero % 5 == 0) 
        {
            std::cout << "*";
        }
        std::cout << std::endl; // Nueva línea después de cada número
    }

    return 0;
}