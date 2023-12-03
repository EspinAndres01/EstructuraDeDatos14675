
/*************************
 * Module:  Overloading_Operator.h
 * Author:  Yeshua Chiliquinga, Josue Marin 
 * Modified: miercoles, 23 de noviembre de 2023 
 * Purpose: Exercise of Overide
 *************************/

template <typename T>
class Overloading {
    private:
        T valor1;
        T valor2;
    public:
        Overloading(T v1, T v2);  // Constructor
        T calc();                // Declaration of the calc method
};