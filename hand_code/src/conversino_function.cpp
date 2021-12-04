#include <iostream>

using namespace std;

class fraction
{
private:
    int Numerator, Denominator;
public:
    fraction (int Num, int Deno=1 ):Numerator(Num),Denominator(Deno) {};

    operator double() const
    {
        return Numerator / (double) Denominator;
    }
};



int main()
{
    fraction f(3, 5);
    double a = 4 + f;
    cout << "a is " << a << endl;
}
