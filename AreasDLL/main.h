/***********************************************************************
 * Module:  Main.h
 * Author:  Andres Espin, Anabel Davila
 * Modified: martes, 14 de noviembre de 2023 22:09:40
 * Purpose: Implementation DLL
 ***********************************************************************/

#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

double DLL_EXPORT areaCuadrado(double lado);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
