// Materia: Programacion I, paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha de creación: 04/09/2024
// Numero de ejercicio: 15
// Problema planteado: realizar una función para que muestre u numero en literal
#include <iostream>
int main() 
{
    int numero = 34;
    std::string unidades[] = 
    {
        "Cero", "Uno", "Dos", "Tres", "Cuatro", "Cinco",
        "Seis", "Siete", "Ocho", "Nueve"
    };
    std::string decenas[] = 
    {
        "", "Diez", "Veinte", "Treinta", "Cuarenta", 
        "Cincuenta", "Sesenta", "Setenta", "Ochenta", "Noventa"
    };
    std::string especiales[] = 
    {
        "Diez", "Once", "Doce", "Trece", "Catorce", 
        "Quince", "Dieciséis", "Diecisiete", "Dieciocho", "Diecinueve"
    };
    std::string resultado;
    if (numero < 10) 
    {
        resultado = unidades[numero];
    } else if (numero < 20) 
    {
        resultado = especiales[numero - 10];
    } else {
        int decena = numero / 10;
        int unidad = numero % 10;
        if (unidad == 0) 
        {
            resultado = decenas[decena];
        } else {
            resultado = decenas[decena] + " y " + unidades[unidad];
        }
    }
    std::cout << "Número generado: " << numero << std::endl;
    std::cout << "En literal: " << resultado << std::endl;
    return 0;
}