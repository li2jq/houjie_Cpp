#ifndef __COMPLEX__
#define __COMPLEX__
#include <iostream>
using namespace std;

template <typename T>
class Complex
{
    private:
        T re, im;
    public:
        Complex (T r=0, T i=0):re(r),im(i)
        {}
        inline T real() const {return re;}
        inline T imag() const {return im;}

        inline Complex& operator += (const Complex& adder)
        {
            return __doapl(this, adder);
        }

        Complex conj()
        {
            return Complex(this->re, -this->im);
        }
        template <typename U>
        friend inline Complex<U>& __doapl(Complex<U>* ths, const Complex<U>& adder);


};

template <typename T>
Complex<T> operator +(const Complex<T>& a, const Complex<T>& b)
{
    T x = a.real()+b.real();
    T y = a.imag()+b.imag();
    return Complex<T>(x, y);
}

template <typename T>
Complex<T> operator +(T a, const Complex<T>& b)
{
    T x = a + b.real();
    T y = b.imag();
    return Complex<T>(x, y);
}

template <typename T>
inline Complex<T>& __doapl(Complex<T>* ths, const Complex<T>& adder)
{
    ths->re += adder.re;
    ths->im += adder.im;
    return *ths;
}

template <typename T>
ostream& operator << (ostream& os, const Complex<T>& cmpl)
{
    return os << "(" << cmpl.real() << "," 
                        << cmpl.imag() << ")";
}

#endif
