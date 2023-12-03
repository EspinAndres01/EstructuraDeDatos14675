// main.cpp
/*************************
 * Module:  main.cpp
 * Author:  Yeshua Chiliquinga, Josue Marin 
 * Modified: lunes, 27 de noviembre de 2023 
 * Purpose: Exercise of Overide
 *************************/

#include "Operations.cpp"
#include <iostream>

using namespace std;

int main(){
    int dolar;
    double cent;

    system("cls");

    cout << "Input an int, please: ";
    cin >> dolar;
    cout << "Input a double, please: ";
    cin >> cent;

    // Create an object of Overloading
    Overloading<double> obj(dolar, cent);

    // Call the calc method and print the result
    cout << "Your money is: " << obj.calc() << endl;

    return 0;
}
