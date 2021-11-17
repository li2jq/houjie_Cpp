#include <iostream>
#include "../include/complex.hpp"

using namespace std;

int main()
{
    Complex c1, c2(5, 10);
    cout << "c2: "<< c2 << endl;

    c1 += c2;

    cout << "c1: " << c1 << endl;

};