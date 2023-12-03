#include <iostream>
#include <windows.h>

// Declaración de la función desde la DLL
typedef double (*AreaCuadradoFunction)(double);

int main() {
    // Cargar la DLL
    HINSTANCE hDLL = LoadLibrary("AreasDLL.dll");
    if (hDLL == NULL) {
        std::cerr << "No se pudo cargar la DLL." << std::endl;
        return 1;
    }

    // Obtener el puntero a la función desde la DLL
    AreaCuadradoFunction areaCuadrado = (AreaCuadradoFunction)GetProcAddress(hDLL, "areaCuadrado");
    if (areaCuadrado == NULL) {
        std::cerr << "No se pudo encontrar la función en la DLL." << std::endl;
        FreeLibrary(hDLL);
        return 1;
    }

    // Usar la función de la DLL
    double resultado = areaCuadrado(5); // Llama a la función de la DLL
    std::cout << "El resultado del área es: " << resultado << std::endl;

    // Liberar la DLL
    FreeLibrary(hDLL);

    return 0;
}
