/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  Andres Espin
 * Modified: lunes, 13 de noviembre de 2023 20:09:40
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerator()
// Purpose:    Implementation of Fraccion::getNumerator()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fraccion::getNumerator(void)
{
   return numerator;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerator(int newNumerator)
// Purpose:    Implementation of Fraccion::setNumerator()
// Parameters:
// - newNumerator
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNumerator(int newNumerator)
{
   numerator = newNumerator;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominator()
// Purpose:    Implementation of Fraccion::getDenominator()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fraccion::getDenominator(void)
{
   return denominator;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominator(int newDenominator)
// Purpose:    Implementation of Fraccion::setDenominator()
// Parameters:
// - newDenominator
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDenominator(int newDenominator)
{
   denominator = newDenominator;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion(int numerator, int denominator)
// Purpose:    Implementation of Fraccion::Fraccion()
// Parameters:
// - numerator
// - denominator
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion(int numerator, int denominator)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implement
}