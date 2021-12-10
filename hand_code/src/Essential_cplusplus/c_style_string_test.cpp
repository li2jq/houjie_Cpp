#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int strlength(char p[])
{
    char * ptr = p;
    int count = 0;
    while(*ptr!='\0')
    {
        ++ptr;
        ++count;
    }

    return count;
}

int main()
{
    const int str_size = 5;
    char p[str_size];
    cout << "Please input your name: " << endl;
    cin >> setw(str_size) >> p;
    while (strlen(p)<3)
    {
        cout << "Please input your name: " << endl;
        cin >> setw(str_size) >> p;
        if(strlen(p)>2)
        {
            cout << "Hello " << p << endl;
            break;
        }
        else{
            cout << "Invalid format!" << endl;
        }
    }
    
}