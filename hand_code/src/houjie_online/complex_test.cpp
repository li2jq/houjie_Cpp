#include <iostream>
#include "../include/complex.hpp"

using namespace std;

int main()
{
    Complex<float> c1, c2(5.1, 10.2);
    cout << "c2: "<< c2 << endl;

    c1 += c2;

    cout << "c1: " << c1 << endl;

    cout << "conj: " << c2.conj() << endl;

};