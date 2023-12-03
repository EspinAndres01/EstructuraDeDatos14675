/*************************
 * Module:  Frac.h
 * Author:  Yeshua Chiliquinga, Josue Marin 
 * Modified: miercoles, 23 de noviembre de 2023 
 * Purpose: Exercise of Overide
 *************************/

template <typename T>
class Frac{
    private:
        T a;
        T b;
    
    public:
        Frac() : a(0), b(0){}
        void in();
        Frac operator*(const Frac<T> &obj);
        void out();
};