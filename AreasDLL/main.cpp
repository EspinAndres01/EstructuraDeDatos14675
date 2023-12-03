/***********************************************************************
 * Module:  Main.cpp
 * Author:  Andres Espin, Anabel Davila
 * Modified: martes, 14 de noviembre de 2023 22:09:40
 * Purpose: Implementation DLL
 ***********************************************************************/
#include "main.h"

// a sample exported function
double DLL_EXPORT areaCuadrado(double lado)
{
    return lado*lado;
}

extern "C" DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
