#ifndef __COMPLEX__
#define __COMPLEX__
#include <iostream>
using namespace std;


class Complex
{
    private:
        double re, im;
    public:
        Complex (double r=0, double i=0):re(r),im(i)
        {}
        inline double real() const {return re;}
        inline double imag() const {return im;}

        inline Complex& operator += (const Complex& adder)
        {
            return __doapl(this, adder);
        }

        friend inline Complex& __doapl(Complex* ths, const Complex& adder);


};

Complex operator +(const Complex& a, const Complex& b)
{
    double x = a.real()+b.real();
    double y = a.imag()+b.imag();
    return Complex(x, y);
}

Complex operator +(double a, const Complex& b)
{
    double x = a + b.real();
    double y = b.imag();
    return Complex(x, y);
}


inline Complex& __doapl(Complex* ths, const Complex& adder)
{
    ths->re += adder.re;
    ths->im += adder.im;
    return *ths;
}

ostream& operator << (ostream& os, const Complex& cmpl)
{
    return os << "(" << cmpl.real() << "," 
                        << cmpl.imag() << ")";
}

#endif