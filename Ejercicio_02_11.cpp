// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 11
// Problema planteado: Generar secuencia
#include <iostream>
int main() 
{
    int n;
    std::cout << "Introduce el número de términos de la secuencia que deseas generar: ";
    std::cin >> n;
    int secuencia[] = {1, 1, 2, 4, 8, 16, 23, 28, 38, 49};
    for (int i = 0; i < n; ++i) 
    {
        if (i < 10) 
        {
            std::cout << secuencia[i] << " ";
        } else {
            int siguienteTermino = secuencia[i-1] + ((i - 1) % 10);
            std::cout << siguienteTermino << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}