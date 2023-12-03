/*************************
 * Module:  Frac.cpp
 * Author:  Yeshua Chiliquinga, Josue Marin 
 * Modified: miercoles, 23 de noviembre de 2023 
 * Purpose: Exercise of Overide
 *************************/

#include <iostream>
#include "Frac.h"
using namespace std;

// Constructor
template <typename T>
void Frac<T>::in(){
    cout << "Enter the numerator : ";
    cin >> a;
    cout<< "Enter the denominator : ";
    cin >> b;
}

// Overload the * operator
template <typename T>
Frac<T> Frac<T>::operator*(const Frac<T> &obj){
    Frac temporal;
    temporal.a = a * obj.a;
    temporal.b = b * obj.b;
       
    return temporal;
}

template <typename T>
void Frac<T>::out(){
    cout << "The fraction is: " << a << "/" << b;
}


