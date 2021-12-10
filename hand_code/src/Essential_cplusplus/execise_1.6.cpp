#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tmp;
    int arr [255];
    int start=0;
    vector<int> a;
    cout << "Please input some integers: " << endl;
    while (cin >> tmp)
    {
        a.push_back(tmp);
        arr[start++] = tmp;
    }
    int sum_vector = 0;
    int ave_vector = 0;
    int sum_array = 0;
    int ave_array = 0;
    for (int i=0; i<a.size();i++)
    {
        sum_vector += a[i];
        sum_array += arr[i];
    }
    cout << "The sum vector is " << sum_vector << "The average is " << sum_vector/a.size() << endl;
    cout << "The sum array is " << sum_array << "The average is " << sum_array/a.size() << endl;

}