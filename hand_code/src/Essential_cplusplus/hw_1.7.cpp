#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    ifstream infile("hello_world.txt");
    if(!infile)
    {
        cerr << "File not exist" << endl;
        return -1;
    }

    ofstream outfile("output.txt");  
    if(!outfile)
    {
        cerr << "Cannot open output.txt" << endl;
        return -2;
    }

    else
    {
        vector< string > file_string;
        string tmp_string;
        while( infile >> tmp_string )
        {
            file_string.push_back(tmp_string);
        }

        for ( auto tmp_str:file_string )
        {
            cout << tmp_str << endl;
        }

        sort( file_string.begin(), file_string.end() );

        
        for ( auto tmp_str:file_string )
        {
            outfile <<  tmp_str << " ";
        }      
    }

    cout << "Are you ok?" << endl;

    return 0;

}