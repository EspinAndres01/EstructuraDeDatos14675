/*************************
 * Module:  main.cpp
 * Author:  Yeshua Chiliquinga, Josue Marin 
 * Modified: lunes, 27 de noviembre de 2023 
 * Purpose: Exercise of Overide
 *************************/

#include <iostream>
#include "Frac.cpp"

int main(){
    Frac<int> F1, F2, result;

    system("cls");

    cout << "Enter the fist fraction: " << endl;
    F1.in();

    cout << "Enter the secod fraction: " << endl;
    F2.in();

    result = F1 * F2;
    result.out();

    return 0;
}