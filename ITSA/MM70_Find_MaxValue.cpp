#include <iostream>
#include <vector>

using namespace std;

void PrintMax(vector<unsigned int> arr);

int main()
{
    vector<unsigned int> arr;

    unsigned int input;
    while (cin >> input)
        arr.push_back(input);

    PrintMax(arr);
}

void PrintMax(vector<unsigned int> arr)
{
    vector<unsigned int>::iterator it = arr.begin();
    unsigned int MAX = 0;
    for (; it != arr.end(); it++)
        if (MAX < *it)
            MAX = *it;

    cout << MAX << endl;
}