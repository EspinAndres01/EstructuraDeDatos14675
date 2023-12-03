/*************************
 * Module:  Operations.cpp
 * Author:  Yeshua Chiliquinga, Josue Marin 
 * Modified: miercoles, 23 de noviembre de 2023 
 * Purpose: Exercise of Overide
 *************************/

#include <iostream>
#include "Overloading_Operator.h"
using namespace std;

// Constructor
template <typename T>
Overloading<T>::Overloading(T v1, T v2) : valor1(v1), valor2(v2) {}

// Definition of the calc method
template <typename T>
T Overloading<T>::calc() {
    T total = valor1 - valor2;
    return total;
}