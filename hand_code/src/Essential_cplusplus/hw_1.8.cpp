#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num_tries;
    cin >> num_tries;

    string str_array[4]={"Correct", "Come on and one more time", "Twice worng", "You tried three times!"};
    switch (num_tries)
    {
    case 0:
        cout << str_array[0] << endl;
        break;

    case 1:
        cout << str_array[1] << endl;
        break;

    case 2:
        cout << str_array[2] << endl;
        break;

    case 3:
        cout << str_array[3] << endl;
        break;

    default:
        cout << "It must be pretty frustrating by now!\n";
        break;
    }
}