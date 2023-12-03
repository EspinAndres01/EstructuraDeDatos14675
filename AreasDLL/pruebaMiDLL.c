// En tu proyecto de C++ que usará la DLL
#include <iostream>
#include "main.h" // Incluye el archivo de encabezado de la DLL

int main() {
    double resultado = areaCuadrado(5, 3); // Usa la función de la DLL
    std::cout << "El resultado de la area es: " << resultado << std::endl;
    return 0;
}

