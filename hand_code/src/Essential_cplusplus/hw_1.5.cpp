#include <iostream>
#include <string.h>
#include <iterator>
using namespace std;

int main()

{
    // string usr_name = "";
    // while(true)
    // {
    //     cout << "Please input your name: " << endl;
    //     cin >> usr_name;
    //     if (usr_name.length()<3)
    //     {
    //         cout << "Invalid name length!" << endl;
    //     }
    //     else
    //     {
    //         cout << "Hello " << usr_name << endl;
    //         break;
    //     }
        
    // }
    // return 0;
    char usr_name[]{};
    while(true)
    {
        cout << "Please input your name: " << endl;
        cin >> usr_name;
        if (strlen(usr_name)<3)
        {
            cout << "Invalid name length!" << endl;
        }
        else
        {
            cout << "Hello " << usr_name << endl;
            break;
        }
        
    }
    return 0;
}
