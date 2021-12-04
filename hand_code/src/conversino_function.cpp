#include <iostream>
#include <typeinfo>
using namespace std;

class fraction
{
private:
    int Numerator, Denominator;
public:
    explicit fraction (int Num, int Deno=1 ):Numerator(Num),Denominator(Deno) {
        cout << "non-explicit-one-argument-used" << endl;
    };

    operator double() const
    {
        cout << "double conversion used" << endl;
        return (double)Numerator / Denominator;
    }

    fraction operator+(const int& i)
    {
        int Deno = this->Denominator;
        int Num = this->Numerator* i;

        cout << "Hello Operator +" << endl;
        return fraction(Num, Deno);

    }

        fraction operator+(const fraction& f)
    {
        int Deno = this->Denominator * f.Denominator;
        int Num = this->Numerator* f.Denominator + this->Denominator*f.Numerator;

        cout << "Hello Operator +" << endl;
        return fraction(Num, Deno);

    }

    friend ostream& operator << (ostream& os, const fraction& f);
    
};
ostream& operator << (ostream& os, const fraction& f)
{
    return os << "The numerator is " << f.Numerator << " and The denominator is " << f.Denominator << endl;
}


int main()
{
    fraction f(3, 5);
    cout << "Hello fffff" << endl;

    fraction a = f + 4;

    cout << "Hello definition a" << endl;
    cout << "a is " << a << endl;
    // cout << typeid(4+f).name() << endl;
}
