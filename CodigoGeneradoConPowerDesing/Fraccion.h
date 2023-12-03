/***********************************************************************
 * Module:  Fraccion.h
 * Author:  Andres Espin
 * Modified: lunes, 13 de noviembre de 2023 20:09:40
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Fraccion_h)
#define __Class_Diagram_1_Fraccion_h

/**
 * @class Fraccion
 * @brief Clase que representa una fracción matemática.
 *
 * Esta clase proporciona métodos para manejar fracciones.
 */
class Fraccion
{
public:
   /**
    * @fn int Fraccion::getNumerator(void)
    * @brief Obtiene el numerador de la fracción.
    * @return El numerador actual de la fracción.
    */
   int getNumerator(void);

   /**
    * @fn void Fraccion::setNumerator(int newNumerator)
    * @brief Establece un nuevo valor para el numerador de la fracción.
    * @param newNumerator El nuevo valor del numerador a establecer.
    */
   void setNumerator(int newNumerator);

   /**
    * @fn int Fraccion::getDenominator(void)
    * @brief Obtiene el denominador de la fracción.
    * @return El denominador actual de la fracción.
    */
   int getDenominator(void);

   /**
    * @fn void Fraccion::setDenominator(int newDenominator)
    * @brief Establece un nuevo valor para el denominador de la fracción.
    * @param newDenominator El nuevo valor del denominador a establecer.
    */
   void setDenominator(int newDenominator);

   /**
    * @fn Fraccion::Fraccion(int numerator, int denominator)
    * @brief Constructor de la clase Fraccion.
    * @param numerator El numerador inicial de la fracción.
    * @param denominator El denominador inicial de la fracción.
    */
   Fraccion(int numerator, int denominator);

   /**
    * @fn Fraccion::~Fraccion()
    * @brief Destructor de la clase Fraccion.
    *
    * Libera los recursos asignados a la instancia de la fracción.
    */
   ~Fraccion();

protected:
private:
   int numerator; ///< Numerador de la fracción.
   int denominator; ///< Denominador de la fracción.
};

#endif
