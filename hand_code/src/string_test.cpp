#include "../include/string.hpp"
#include <iostream>

using namespace std;

int main()
{
    String c0;
    String c1 = "Hello";
    String c2 = "World";
    String c3(c1);
    c0 = c2;
    cout << "c0 is copied = " << c0 << endl;

    cout << "c2 after delete " << c2 << endl;

    cout << "c3 is ctor from " << c3 << endl;
    
    String c5;
    cout << "c5 g_cstr_data" << hex << c5 << endl;
    
    String c6("Are you ok? ");
    cout << "c6: " << c6 << endl;

}