#include <iostream>

using namespace std;

int main()
{
    const int NUM = 10;
    int i = 0, vowel_cnt=0;
    
    char get_char;
    while(i<NUM)
    {
        cout << "Please Input an Character: " << endl;
        cin >> get_char;

        switch (get_char)
        {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
        ++vowel_cnt;
        break;

        }

        ++i;

    }

    cout << "There are " << vowel_cnt << " Vowel in " << NUM << " Character" << endl;

    return 0;
}